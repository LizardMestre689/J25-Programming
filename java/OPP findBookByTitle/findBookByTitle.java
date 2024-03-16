  
  public Book findBookByTitle(String title) {
    for (int i = 0; i < library.length; i++) {
        if (library[i].getTitle().equals(title)) { // We change getISBN for getTitle, and the same with equals()
            return library[i];
        }
    }
    return null;
}
