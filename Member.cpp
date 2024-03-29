/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

#include <string>
#include "Member.h"
#include "Book.h"

Member::Member(int memberID, std::string name,  std::string address , std::string email)
{
    this->memberid = memberID;
    this->setName(name);
    this->setAddress(address);
    this->setEmail(email);

}


std::string Member::getMemberID(){
    return std::to_string(memberid);
};

    
std::vector<Book> Member::GetBooksBorrowed(){
    return this->booksLoned;
};

void Member::setBooksBorrowed(Book book){
    this->booksLoned.push_back(book);
};

void Member::RemoveBook(int index){
    booksLoned.erase(booksLoned.begin()+index);
}


