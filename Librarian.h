/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

#ifndef _Librarian_H_
#define _Librarian_H_
#include <string>
#include "Person.h"

class Librarian : public Person {

    public:

    Librarian(int newstaffid, std::string newName, std::string newAddress, std::string NewEmail,  int newSalary);

    
    int calcFine(int current,int due);


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