//
//  main.cpp
//  Books
//
//  Created by Jonathan Raysor on 4/30/18.
//  Copyright © 2018 Jonathan Raysor. All rights reserved.
//

#include <iostream>
#include "Book.hpp"
#include "BookDatabase.hpp"

int main(int argc, const char * argv[]) {
    const string FILE = "bookFile.txt";
    BookDatabase bookDatabase;
    
    bookDatabase.getBooksFromFile(FILE, bookDatabase);
    
    cout << bookDatabase.searchByAuthor("Brown").size() << endl;
    
    cout << bookDatabase;
    return 0;}
