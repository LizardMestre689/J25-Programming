
// To do that first we need to work on the signature of the method. This is to have clear
// a) the access of the method. By default the methods are public unless stated otherwise.
// b) the return type (or if there is not): int (since is the index of an array or -1)
// c) the name of the method: addBook
// d) the parameters (if any) of the method: Book b


public int addBook(Book b) {  // a) c)
    for (int i = 0; i < library.length ;i ++) {  
         if (library[i] == null) {  // d)
             library[i]=b;
             return i;
          }            
       }   
       return -1;  // b)
     }
