/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

#include "Member.h"
#include "Book.h"
#include <string>



Book::Book(std::string bookID, std::string bookName, std::string authorFirstName, std::string authorLastName)
{
    this->bookID = bookID;
    this->bookName = bookName;
    this->authorFirstName=authorFirstName;
    this->authorLastName=authorLastName;



}



std::string Book::getbookID(){
    return bookID;
};

std::string Book::getbookName(){
    return bookName;
};

std::string Book::getAuthorFirstName(){
    return authorFirstName;
};

std::string Book::getAuthorLastName(){
    return authorLastName;
};

int Book::getDueDate(){
    return dueDate;
};

void Book::setDueDate(int dueDate){

    this->dueDate = dueDate;
};






