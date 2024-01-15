/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

#ifndef _Book_H_
#define _Book_H_
#include <string>

#include <ctime>

class Member;
class Book{

    public:

    Book(std::string bookID, std::string bookName, std::string authorFirstName, std::string authorLastName);

    std::string getbookID();

    std::string getbookName();

    std::string getAuthorFirstName();

    std::string getAuthorLastName();

    int getDueDate();

    void setDueDate(int dueDate);

    void returnBook();

    

    private:

    std::string bookID;
    std::string bookName;
    std::string authorFirstName;
    std::string authorLastName;
    std::string bookType;

    int dueDate;

    

};
#endif