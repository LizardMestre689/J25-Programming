public class Book {
   private String title; 
   private String author;
    private int pages;
    private String ISBN;
    private boolean inKorean;
    
    public Book() {
        this.title = "untitled";
        this.author = "anonimous";
        this.pages = 0;
        this.ISBN = "none";
        this.inKorean = false;
    }
    
    public Book (String title) {
        this.title = title;
        this.author = "anonimous";
        this.pages = 0;
        this.ISBN = "none";
        this.inKorean = false;     
    }
    
    public Book (String title, int numberOfPages) {
        this.title = title;
        this.author = "anonimous";
        this.pages = numberOfPages;
        this.ISBN = "none";
        this.inKorean = false;     
    }
}
