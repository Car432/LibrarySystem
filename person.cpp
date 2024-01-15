/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

#include "Person.h"

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