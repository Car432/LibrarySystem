#ifndef _Librarian_H_
#define _Librarian_H_
#include <string>
#include "Person.h"

class Librarian : public Person {

    public:

    Librarian(std::string newName, std::string newAddress, std::string NewEmail, int newstaffid, int newSalary);

    void addMember();

    void issueBook(int memberID, int bookID);

    void returnBook(int memberID, int bookID);

    void displayBorrowedBooks(int memberID);

    void calcFine(int memberID);
    

    //staff id getter and setter

    int getStaffID();

    void setStaffID(int staffID);

    //salary getter and setter

    int getSalary();

    void setSalary(int salary);

    private:

    int staffid;

    int salary;




};
#endif