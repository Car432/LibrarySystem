#include "Book.h"
#include "Member.h"


Book(int bookID, std::string bookName, std::string authorFirstName, std::string authorLastName)
{
    this->bookID = bookID;
    this->bookName = bookName;
    this->authorFirstName=authorFirstName;
    this->authorLastName=authorLastName;



}



std::string getbookID(){
    return bookID;
};

std::string getbookName(){
    return bookName;
};

std::string getAuthorFirstName(){
    return authorFirstName;
};

std::string getAuthorLastName(){
    return authorLastName
};

Date getDueDate(){
    return dueDate;
};

void setDueDate(time_t dueDate){

    this->dueDate = dueDate;
};

void returnBook(){};

void borrowBook(Member borrower, time_t dueDate){

};


