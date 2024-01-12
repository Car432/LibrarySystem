#include "Member.h"
#include "Book.h"

Member::Member(int memberID, std::string name,  std::string address , std::string email)
{
    this->memberid = memberID;
    this->setName(name);
    this->setAddress(address);
    this->setEmail(email);

}

std::string Person::getName()
{

    return name;
}

void Person::setName(std::string name)
{
    this->name = name;
}

std::string Person::getAddress()
{
    return address;
}

void Person::setAddress(std::string address)
{
    this->address = address;
}

std::string Person::getEmail()
{
    return email;
}

void Person::setEmail(std::string email)
{
    this->email = email;
}

std::string Member::getMemberID(){
    return std::to_string(memberid);
};

    
std::vector<Book> Member::GetBooksBorrowed(){
    return booksLoned;
};

void Member::setBooksBorrowed(Book book){
    //this->booksLoned
};
