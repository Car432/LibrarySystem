#include "Librarian.h"


Librarian::Librarian(int staffid, std::string name, std::string address, std::string email, int salary)
{
    this->setName(name);
    this->setAddress(address);
    this->setEmail(email);
    this->setStaffID(staffid);
    this->setSalary(salary);
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

