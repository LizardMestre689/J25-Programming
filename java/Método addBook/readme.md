## Método addBook

---

In this code we had to follow this steps to cread the code:

In this case we're going to implement the method addBook(Book b) that will add a book in the first empty position of the array library and return the position (ie the index of the array) at which the book has been added. If it's not possible to fit the book into the library, then it should return -1.

To do that first we need to work on the signature of the method. This is to have clear
a) the access of the method. By default the methods are public unless stated otherwise.
b) the return type (or if there is not): int (since is the index of an array or -1)
c) the name of the method: addBook
d) the parameters (if any) of the method: Book b

And we ended up with a method that adds a book to the library array at the first available position (wherever it finds a "null" slot) and returns the index where it added the book. If the library is full (i.e., there are no "null" slots), it returns "-1" to indicate failure.
