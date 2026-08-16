public class Borrow {
    private Book book;
    private Member member;

    public Borrow(Book book, Member member){
        this.book = book;
        this.member = member;
        borrow(true);
    }

    private void borrow(){
        book.borrow();
        member.borrowBook(book);
    }

    private void returnBook(){
        book.returnBack();
        member.returnBook(book);
    }

    public void borrow(boolean borrow){
        if (borrow) borrow();
        else returnBook();
    }

    public String toString(){
        return book + " -> " + member;
    }
}



