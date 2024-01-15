#include <iostream>
#include <string>
#include <vector>
#include "person.cpp"
#include "Librarian.h"
#include<limits>
#include "Member.h"
#include "Book.h"


Librarian SetLibrarianDetails(){
  
  int userID;
  std::string userName;
  std::string userAddress;
  std::string userEmail;
  int userSalary;

      


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


        while (!(std::cin >> userID)||userID<0) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts positive numbers \n \n";
        }


      std::cout<<"\n \n";


      //salary

      std::cout<<"Salary: £";

      while (!(std::cin >> userSalary)||userSalary<0) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts positive numbers \n \n";
        }

      std::cout<<"\n \n";

      return Librarian( userID, userName, userAddress , userEmail, userSalary);

      

}


Member SetMemberDetails()
{
  int id;
  std::string name;
  std::string address;
  std::string email;

  

      //name

      std::cout<<"Name: ";

      std::cin>>name;

      std::cout<<"\n \n";


      //adress

      std::cout<<"Address: ";

      std::cin>>address;

      std::cout<<"\n \n";


      //email

      std::cout<<"Email: ";

      std::cin>>email;

      std::cout<<"\n \n";



      //staff id

      std::cout<<"Member id: ";


        while (!(std::cin >> id)||id<0) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts positive numbers \n \n";
        }


      std::cout<<"\n \n";


      
      return Member( id, name, address , email);

      



}





int main()
{


  std::vector<Member> members;

  

  Librarian librarian(0,"","","",0);

  enum Page {Start, Home, AddMember, IssueBook, ReturnBook, DisplayBorrowed, Fine};

  Page page = Start;
  bool quit=false;
  
  while (quit==false)
  {
    if(page == Start)
    {
      std::cout<<"Welcome to the Library System Librian\n \n";

      std::cout<<"Please enter your user details\n \n";

      librarian = SetLibrarianDetails();

      page = Home;

      



    }


    else if(page = Home)//Home page
    {
      
      
      
      std::cout<<"Welcome "<<librarian.getName()<<"\n \n";



      std::cout<<"This is the Home page choose what you wish to do \n \n";


      std::cout<<"(1) Add a new member                 (2) Issue a book to a member\n \n";
      std::cout<<"(3) Return a book                    (4) Display all books a member has borrowed\n \n";
      std::cout<<"(5) Calculate a fine for late books\n \n";   

      int tempPage;

      while (!(std::cin >> tempPage)||tempPage<1||tempPage>5) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 1 and 5 \n \n";
      }

      page = static_cast<Page>(tempPage+1);

      
      
      
      
      
    }
    else if (page==AddMember){

        std::cout <<"Add member\n \n";
        members.push_back(SetMemberDetails());

        std::cout<<members[0].getName();

    }
    //quit = true;

    

  }
}



