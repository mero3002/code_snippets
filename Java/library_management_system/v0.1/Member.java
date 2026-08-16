import java.util.LinkedList;
import java.util.Optional;

public class Member {
    private int id;
    private String name;
    private String phoneNumber;
    private LinkedList<Book> borrowedBooks;

    public Member(int id, String name, String phoneNumber){
        this.id = id;
        this.name = name;
        this.phoneNumber = phoneNumber;
        borrowedBooks = new LinkedList<>();
    }

    public Member(String name, String phoneNumber){
        this.name = name;
        this.phoneNumber = phoneNumber;
    }

    public String toString(){
        return name;
    }

    public boolean equals(Object o){
        if (!(o instanceof Member m)) return false;
        return name.equalsIgnoreCase(m.name)
                && phoneNumber.equalsIgnoreCase(m.phoneNumber);
    }

    public void getInfo() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Phone: " + phoneNumber);
    }

    public String getName() {
        return name;
    }

    public int getId() {
        return id;
    }

    public void borrowBook(Book b){
        borrowedBooks.add(b);
    }

    public void returnBook(Book b){
        borrowedBooks.remove(b);
    }

    public LinkedList<Book> getBorrowedBooks() {
        return borrowedBooks;
    }
}
