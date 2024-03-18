// In this case we're going to get introduced to a method that you will need to use in the final method.
// In this case startsWith(string test) is a method that will return true if the string starts with that test string and false otherwise.
// findStartingAuthor is a method that is going to return if there is at least one book with the name or the start of the name that you wrote as a parameter.

public boolean findstartsWith(string test){
    for(int i = 0; i < length.library){
      if(library[i].getAuthor().startsWith(author)){
        return true;
        }
     }
        return false;
  }
