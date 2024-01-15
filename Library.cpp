#include <iostream>
#include <string>
#include <vector>
#include "person.cpp"
#include "Librarian.h"
#include<limits>
#include "Member.h"
#include "Book.h"
#include <fstream>
#include <sstream>
#include <iomanip>

std::string SearchBooks(std::string g)
{
    std::ifstream libraryBooks("library_books.csv");
    
    std::string line="";
    std::string preName = "";
    
    std::vector<std::string> names;

    while(getline(libraryBooks,line))
    {
        std::string id;
        std::string name;
        std::string pageCount;
        std::string authorFirstName;
        std::string authorLastName;
        std::string genre;
        int num;
        std::stringstream InputString(line);

        
        
        

        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(id);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, id, ',');
        }


        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(name);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, name, ',');
        }

        


        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(pageCount);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, pageCount, ',');
        }

        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(authorFirstName);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, authorFirstName, ',');
        }

        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(authorLastName);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, authorLastName, ',');
        }

         

        genre = line;

        if(genre.find(g) != std::string::npos){

          
          names.push_back(preName);


        }

        preName = name;








        
        
        
        //std::cout<<names.size();
        
        
        

        
    }
    libraryBooks.close();
    int bookIndex;

    for(int i=0;i<names.size();i++){
          std::cout<<"("<<i<<") "<<names[i]<<"\n \n";
        }


        while (!(std::cin >> bookIndex)||bookIndex<0||bookIndex>=names.size())
      {

              std::cin.clear();

              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

              std::cout << "This field only accepts numbers betwwen 0 and"<<names.size()<<" \n \n";
      }

      std::cout << names[bookIndex]<<" \n \n";
      
    
      return names[bookIndex];

      

}



Book GetBook(std::string bookname ,std::string genre){

    std::ifstream libraryBooks("library_books.csv");
    
    std::string line="";
    std::string preName = "";
    
    std::vector<std::string> names;

    while(getline(libraryBooks,line))
    {
        std::string id;
        std::string name;
        std::string pageCount;
        std::string authorFirstName;
        std::string authorLastName;
        
        std::stringstream InputString(line);

        
        
        

        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(id);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, id, ',');
        }


        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(name);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, name, ',');
        }

        


        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(pageCount);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, pageCount, ',');
        }

        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(authorFirstName);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, authorFirstName, ',');
        }

        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(authorLastName);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, authorLastName, ',');
        }

         

        
      
        preName = name;


        if(name.find(bookname) != std::string::npos){

          
          std::cout<<name<<" "<<id<<" "<<pageCount<<" "<<authorFirstName<<" "<<authorLastName<<" "<<genre;


        }





        
        
        
        Book book(id,name,authorFirstName, authorLastName);
        book.setDueDate(3);
        return book;
        
        

        
    }
}



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






      std::cout<<"New member was created id:"<<id<<"  name:"<<name <<"  address:"<<address<<"  email:"<<email<<"\n \n";




      
      return Member( id, name, address , email);

      



}





int main()
{

 
  
  std::vector<Member> members;

  

  Librarian librarian(0,"","","",0);

  

  enum Page {Start, Home, AddMember, IssueBook, ReturnBook, DisplayBorrowed, Quit};

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


    else if(page == Home)//Home page
    {
      
      
      
      std::cout<<"Welcome "<<librarian.getName()<<"\n \n";



      std::cout<<"This is the Home page choose what you wish to do \n \n";


      std::cout<<"(1) Add a new member                 (2) Issue a book to a member\n \n";
      std::cout<<"(3) Return a book                    (4) Display all books a member has borrowed\n \n";
      std::cout<<"(5) Quit\n \n";   

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

        
        //quit = true;
        page = Home;
    }





    else if(page==IssueBook)
    {

      std::cout <<"Which member do you want to issue to\n \n";

      for (int i =0;i<members.size();i++){

        std::cout<<"("<<i+1<<")  Member:"<<members[i].getName()<<"    ID:"<<members[i].getMemberID()<<"\n \n";
      }

      int memberChoice=-1;

      while (!(std::cin >> memberChoice)||memberChoice<1||memberChoice>members.size()) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 1 and "<<members.size()<<" \n \n";
      }

      


      


      

      int genreIndex;

      std::cout <<"What is the type of book you are looking for\n \n";


      std::vector<std::string> bookTypes = {"Science fiction", "Satire", "Drama", "Action and Adventure", "Romance", 
      "Mystery", "Horror", "Health", "Guide", "Diaries", "Comics", "Journals", "Biographies", "Fantasy", "History", "Science", "Art"};

      for (int i=0; i<bookTypes.size(); i++){

        std::cout <<"("<<i<<") "<<bookTypes[i]<<"\n \n";
      }

      std::cin>>genreIndex;


      


      members[memberChoice-1].setBooksBorrowed(GetBook(SearchBooks(bookTypes[genreIndex]), bookTypes[genreIndex]));//assign book
      

      
      page = Home;

    }

    else if(page==ReturnBook){
      
        std::cout <<"Choose a member to return\n \n";//choose member

      for (int i =0;i<members.size();i++){

        std::cout<<"("<<i+1<<")  Member:"<<members[i].getName()<<"    ID:"<<members[i].getMemberID()<<"\n \n";
      }

      int memberChoice=-1;

      while (!(std::cin >> memberChoice)||memberChoice<1||memberChoice>members.size()) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 1 and "<<members.size()<<" \n \n";
      }

      std::cout <<"Which book do you want to return\n \n";//choose member

      std::vector<Book> temp =  members[memberChoice-1].GetBooksBorrowed();//get books

      int bookChoice=-1;

      for(int i= 0; i<temp.size();i++){

          std::cout<<"("<<i<<")  "<<temp[i].getbookName()<<"\n \n";
      }

      while (!(std::cin >> bookChoice)||bookChoice<0||bookChoice>temp.size()-1) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 0 and "<<temp.size()-1<<" \n \n";
      }

      members[memberChoice-1].GetBooksBorrowed().erase(temp.begin()+bookChoice);

      std::cout<<members[memberChoice-1].GetBooksBorrowed().size();







    }






    else if(page==DisplayBorrowed){


      std::cout <<"Display the borrowed books of a member\n \n";//choose member

      for (int i =0;i<members.size();i++){

        std::cout<<"("<<i+1<<")  Member:"<<members[i].getName()<<"    ID:"<<members[i].getMemberID()<<"\n \n";
      }

      int memberChoice=-1;

      while (!(std::cin >> memberChoice)||memberChoice<1||memberChoice>members.size()) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 1 and "<<members.size()<<" \n \n";
      }



      std::vector<Book> temp =  members[memberChoice-1].GetBooksBorrowed();//get books

      for(int i= 0; i<temp.size();i++){

          std::cout<<"("<<i+1<<")  Name:"<<temp[i].getbookName()<<"\n \n";
      }

      page =Home;

      

    }
    else if(page == Quit){
      quit = true;
      return 1;
    }

    
    

    

  }
}



