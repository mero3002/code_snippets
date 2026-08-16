//    Add/remove books
//    Register/remove members
//    Search books
//    Borrow a book
//    Return a book
//    Show available books
//    Show a member's borrowed books
//    Prevent invalid operations

import java.util.*;

public class LibraryManager {
    private List<Book> books;
    private List<Member> members;
    private boolean loop_start;
    private Scanner cin;
    private int bookID;
    private int memberID;
    private List<Borrow> borrows;

    public LibraryManager(){
        books = new ArrayList<>();
        members = new ArrayList<>();
        borrows = new LinkedList<>();
        loop_start = true;
        cin = new Scanner(System.in);
        bookID = 1;
        memberID = 1;
    }

    // booleans

    public boolean isOptionValid(int option, int maxOption){
        return option >= 1 && option <= maxOption;
    }

    public boolean doesTitleExist(String title){
        for (Book b : books){
            if (b.getTitle().contains(title)) return true;
        }
        return false;
    }

    // displayers

    public void printInfoHeader(){
        System.out.printf(
                "%-5s %-36s %-22s %-10s %-15s%n",
                "ID",
                "Title",
                "Author",
                "Pages",
                "Availability"
        );
    }

    public void printGeneralOptions(){
        System.out.println("[1] Add book");
        System.out.println("[2] Remove book");
        System.out.println("[3] Register member");
        System.out.println("[4] Remove member");
        System.out.println("[5] Borrow book");
        System.out.println("[6] Return book");
        System.out.println("[7] Search books");
        System.out.println("[8] Show books");
        System.out.println("[9] Show members");
        System.out.println("[10] Show borrowings");
        System.out.println("[11] Quit app");
    }

    public void printAllBooks(){
        if (books.isEmpty()){
            System.out.println();
            System.out.println("~ very quiet around here ~");
            return;
        }
        for (int i = 0; i < books.size(); i++){
            System.out.println(i + 1 + ". " + books.get(i));
        }
    }

    public void printMembers(){
        if (members.isEmpty()){
            System.out.println();
            System.out.println("~ very quiet around here ~");
            return;
        }
        for (int i = 0; i < members.size(); i++){
            Member m = members.get(i);
            System.out.println(i + 1 + ". " + m + " (" + m.getId() + ')');
        }
    }

    public void printBorrows(){
        if (borrows.isEmpty()){
            System.out.println();
            System.out.println("~ very quiet around here ~\n");
            return;
        }
        for (int i = 0; i < borrows.size(); i++){
            System.out.println(i + 1 + ". " + borrows.get(i));
        }
    }

    // readers

    public int readInteger(){
        boolean valid = false;
        String input;

        do{
            System.out.print("# ");
            input = cin.nextLine();

            try {
                Integer.parseInt(input);
                valid = true;
            }
            catch (NumberFormatException error){
                System.out.println("<< Enter an integer >>");
                valid = false;
            }

        }while (!valid);

        return Integer.parseInt(input);
    }

    public String readString(){
        String input;

        do{
            System.out.print("> ");
            input = cin.nextLine();

            if (input.isEmpty()) {
                System.out.println("<< Input cannot be empty >>");
            }

        }while(input.isEmpty());

        return input;
    }

    public int readOption(int maxOption){
        int option = 0;
        boolean valid = false;

        while (!valid){
            option = readInteger();
            if (!isOptionValid(option, maxOption)){
                System.out.println("<< Enter a value between (" + 1 + "-" + maxOption + ") >>");
            }
            else valid = true;
        }

        return option;
    }

    // main

    public void start(){
        System.out.print("============= Library Management System =============");
        while (loop_start){
            System.out.println();
            printGeneralOptions();
            execute(readOption(11));
        }
    }

    public void addBook(Optional<Book> b){
        b.ifPresent(book -> books.add(book));
    }

    public void removeBook(Optional<Book> b){
        b.ifPresent(book -> books.remove(book));
    }

    public void addMember(Optional<Member> m){
        m.ifPresent(member -> members.add(member));
    }

    public void removeMember(Optional<Member> m){
        m.ifPresent(member -> members.remove(member));
    }

    public void searchBook(Optional<String> keyWord){
        if (!keyWord.isPresent()) return;
        if (!doesTitleExist(keyWord.get())) {
            System.out.println("~ Book was not found ~");
            return;
        }
        printInfoHeader();
        for (Book b : books){
            if (b.getTitle().contains(keyWord.get())){
                b.getInfo();
            }
        }
    }

    public void borrowBook(Book b, Member m){
        Borrow borrow = new Borrow(b, m);
        borrows.add(borrow);
    }

    public void returnBook(Borrow borrow){
        borrow.borrow(false);
        borrows.remove(borrow);
    }

    public void execute(int option){
        switch (option){
            case 1 -> addBook(addBookPortal());
            case 2 -> removeBook(removeBookPortal());
            case 3 -> addMember(addMemberPortal());
            case 4 -> removeMember(removeMemberPortal());
            case 5 -> borrowBookPortal();
            case 6 -> returnBookPortal();
            case 7 -> searchBook(searchBookPortal());
            case 8 -> {
                System.out.println("\n============= Books =============");
                printAllBooks();
            }
            case 9 -> {
                System.out.println("\n=========== Members ===========");
                printMembers();
            }
            case 10 -> {
                System.out.println("\n=============== Borrows ===============");
                printBorrows();
            }
            case 11 -> byebye();
        }
    }

    public void byebye(){
        System.out.println("\n<< byebye >>");
        loop_start = false;
    }

    public static void main(String[] args) {
        new LibraryManager().start();
    }

    // shit-testing

    public Optional<Book> addBookPortal(){
        String title;
        String author;
        int pages;

        System.out.println();
        System.out.println("Enter Book's info:");

        System.out.println("Title");
        title = readString();

        System.out.println("Author");
        author = readString();

        Book newBook = new Book(title, author);

        if (books.contains(newBook)){
            System.out.println("<< This book already exists >>");
            return Optional.empty();
        }

        System.out.println("Pages");
        pages = readInteger();

        System.out.println("<< Book added >>");

        return Optional.of(new Book(bookID++, pages, title, author));
    }

    public Optional<Book> removeBookPortal(){
        System.out.println();
        if (books.isEmpty()) {
            System.out.println("<< Books list is empty >>");
            return Optional.empty();
        }

        System.out.println("<< Choose the book (removing) >>");
        printAllBooks();
        System.out.println();
        int option = readOption(books.size());
        System.out.println("<< Book removed >>");
        return Optional.of(books.get(option - 1));

    }

    public Optional<Member> addMemberPortal(){
        System.out.println("\n<< Member details (adding) >>");

        System.out.println("Name");
        String name = readString();

        System.out.println("Phone Number");
        String phone = readString();

        Member newMember = new Member(name, phone);
        if (members.contains(newMember)){
            System.out.println("<< Member already exists >>");
            return Optional.empty();
        }

        System.out.println("<< Member added >>");

        return Optional.of(new Member(memberID++, name, phone));
    }

    public Optional<Member> removeMemberPortal(){
        System.out.println();
        if (members.isEmpty()){
            System.out.println("<< Members list is empty >>");
            return Optional.empty();
        }

        System.out.println("<< Member (removing) >>");
        printMembers();
        int option = readOption(members.size());
        System.out.println("<< Member removed >>");
        return Optional.of(members.get(option - 1));
    }

    public Optional<String> searchBookPortal(){
        System.out.println();
        if (books.isEmpty()) {
            System.out.println("<< Books list is empty >>");
            return Optional.empty();
        }

        System.out.println("<< Enter book's title or a part of it (case-sensitive) >>");
        return Optional.of(readString());
    }

    public void borrowBookPortal(){
        if (members.isEmpty()) {
            System.out.println("<< No members to borrow >>");
            return;
        }
        if (books.isEmpty()) {
            System.out.println("<< No books to borrow >>");
            return;
        }

        System.out.println("<< Enter book (borrowing) >>");
        printAllBooks();
        Book b = books.get((readOption(books.size()) - 1));

        if (!b.isAvailable()){
            System.out.println("<< This book isn't available >>");
            return;
        }

        System.out.println("<< Enter member (borrowing) >>");
        printMembers();
        Member m = members.get(readOption(members.size()) - 1);

        if (m.getBorrowedBooks().contains(b)){
            System.out.println("<< Member had already borrowed this book >>");
            return;
        }

        borrowBook(b, m);
        System.out.println("<< Book successfully borrowed >>");
    }

    public void returnBookPortal(){
        if (borrows.isEmpty()){
            System.out.println("<< No borrows were added >>");
            return;
        }

        System.out.println("=============== Borrows ===============");
        printBorrows();
        Borrow borrow = borrows.get(readOption(borrows.size()) - 1);
        returnBook(borrow);

        System.out.println("<< Book has returned >>");

    }
}
