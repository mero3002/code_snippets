import java.util.HashMap;

public class Book {
    private int id;
    private int pages;
    private String title;
    private String author;
    private boolean available;

    public Book(int id, int pages, String title, String author){
        this.id = id;
        this.title = title;
        this.pages = pages;
        this.author = author;
        available = true;
    }

    public Book(String title, String author){
       this.title = title;
       this.author = author;
    }

    public void borrow(){
        available = false;
    }

    public void returnBack(){
        available = true;
    }

    public String toString(){
        return title;
    }

    public boolean isAvailable() {
        return available;
    }

    public boolean equals(Object o){
        if (!(o instanceof Book b)) return false;
        return author.equalsIgnoreCase(b.author)
                && title.equalsIgnoreCase(b.title);
    }

    public void getInfo(){
        System.out.printf(
                "%-5d %-36s %-22s %-10d %-15s%n",
                id,
                title,
                author,
                pages,
                available ? "YES" : "NO"
        );
    }

    public String getTitle(){
        return title;
    }
}
