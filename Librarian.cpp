#include "Librarian.h"

Librarian::Librarian(std::string newName, std::string newAddress, std::string newEmail, int newstaffid, int newSalary)
{
    this->setName(newName);
    this->setAddress(newAddress);
    this->setEmail(newEmail);
    this->setStaffID(newstaffid);
    this->setSalary(newSalary);
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

int Librarian::getStaffID()
{
    return staffid;

}

void Librarian::setStaffID(int staffID)
{
    staffid = staffID;

}

int Librarian::getSalary()
{
    return salary;

}

void Librarian::setSalary(int salary)
{
    this->salary=salary;

}

