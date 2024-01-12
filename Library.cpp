#include <iostream>
#include <string>
#include "Librarian.h"
#include<limits>
#include "Member.h"
#include "Book.h"



int main()
{


  int userID;
  std::string userName;
  std::string userAddress;
  std::string userEmail;
  int userSalary;

  

  
  //Member member(3, "Jim", "11" , "ii@gone");
  //Member member()

  std::cout<<"Welcome to the Library System Librian\n \n";

  std::cout<<"Please enter your user details\n \n";

  //name

  std::cout<<"Name: ";

  std::cin>>userName;

  std::cout<<"\n \n";

  //adress

  std::cout<<"Address: ";

  std::cin>>userAddress;

  std::cout<<"\n \n";

  //email

  std::cout<<"Email: ";

  std::cin>>userEmail;

  std::cout<<"\n \n";


  //staff id

  std::cout<<"Staff id: ";


    while (!(std::cin >> userID)) {

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "This field only accepts numbers: ";
    }

  std::cout<<"\n \n";

  //salary

  std::cout<<"Salary: ";

  while (!(std::cin >> userSalary)) {

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "This field only accepts numbers: ";
    }

  std::cout<<"\n \n";

  Librarian librarian( userID, userName, userAddress , userEmail, userSalary);

  std::cout<<"Welcome "<<librarian.getName()<<"\n \n";

std::cout<<"Welcome "<<librarian.getSalary();
}
