/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

#ifndef _Member_H_
#define _Member_H_
#include <string>
#include "Person.h"

#include <vector>


class Book;
class Member : public Person {

    public:

    Member(int memberID, std::string name,  std::string address , std::string email);

    std::string getMemberID();

    std::vector<Book> GetBooksBorrowed();

    void setBooksBorrowed(Book book);

    void RemoveBook(int index);

    private:

    int memberid;

    std::vector<Book> booksLoned;


};
#endif