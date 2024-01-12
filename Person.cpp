#include "Person.h"
#include <string>



std::string Person::GetName()
{

    return name;
}

void Person::SetName(std::string newName)
{
    name = newName;
}

std::string Person::GetAddress()
{
    return address;
}

void Person::SetAddress(std::string newAddress)
{
    address = newAddress;
}

std::string Person::GetEmail()
{
    return email;
}

void Person::SetEmail(std::string NewEmail)
{
    email = NewEmail;
}
