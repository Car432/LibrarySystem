#ifndef _Book_H_
#define _Book_H_
#include <string>

#include <ctime>

class Member;
class Book{

    public:

    Book(int bookID, std::string bookName, std::string authorFirstName, std::string authorLastName);

    std::string getbookID();

    std::string getbookName();

    std::string getAuthorFirstName();

    std::string getAuthorLastName();

    time_t getDueDate();

    void setDueDate(time_t dueDate);

    void returnBook();

    void borrowBook(Member borrower, time_t dueDate);

    private:

    int bookID;
    std::string bookName;
    std::string authorFirstName;
    std::string authorLastName;
    std::string bookType;

    time_t dueDate;

    Member borrower;

};
#endif