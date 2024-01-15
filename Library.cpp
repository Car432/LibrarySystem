/*Author Carlos Bacchus<cb1521@live.mdx.ac.uk*/

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

        
        
        
        //search for id
        if (libraryBooks.peek() == '"') 
        {
            libraryBooks >> std::quoted(id);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, id, ',');
        }

        //search for bookname
        if (libraryBooks.peek() == '"') {//
            libraryBooks >> std::quoted(name);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, name, ',');
        }

        

        //search for pagecount
        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(pageCount);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, pageCount, ',');
        }


        //search for firstname
        if (libraryBooks.peek() == '"') {
            libraryBooks >> std::quoted(authorFirstName);
            std::string remove;
            std::getline(libraryBooks, remove, ',');
        }
        else {
            std::getline(libraryBooks, authorFirstName, ',');
        }
        

        //search for last
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








        
        
        
        
        
        
        

        
    }
    libraryBooks.close();
    int bookIndex;

    std::cout <<"Some books from the "<<g<<" genre are:\n \n";

    for(int i=0;i<names.size();i++){
          std::cout<<"("<<i<<") "<<names[i]<<"\n \n";
        }


        while (!(std::cin >> bookIndex)||bookIndex<0||bookIndex>=names.size())
      {

              std::cin.clear();

              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

              std::cout << "This field only accepts numbers betwwen 0 and "<<names.size()-1<<" \n \n";
      }

      std::cout <<"Member has borrowed "<< names[bookIndex]<<" \n \n";
      
    
      return names[bookIndex];

      

}



Book GetBook(std::string bookname ,std::string genre, int dDate){

    std::ifstream libraryBooks("library_books.csv");
    
    std::string line="";
    std::string preName = "";
    
    std::vector<std::string> names;
    bool found = false;
    std::string id;
        std::string name;
        std::string pageCount;
        std::string authorFirstName;
        std::string authorLastName;
    while(getline(libraryBooks,line))
    {
        
        
        
        std::stringstream InputString(line);

        
        
        if(found == false){

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

          

        }
      
        


        if(name.find(bookname) != std::string::npos){

          found = true;
          std::cout<<"Name:"<<name<<"  Id:"<<id<<"  Page count:"<<pageCount<<"  Author's name:"<<authorFirstName<<" "<<authorLastName<<" Type:"<<genre<<"\n \n";
          
          
          break;
        }

        
    }
    libraryBooks.close();
    Book book(id,name,authorFirstName, authorLastName);
    book.setDueDate(dDate+3);
    return book;
}



Librarian SetLibrarianDetails()
{
  
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

  int currentDay = 0;
  
  std::vector<Member> members;

  

  Librarian librarian(0,"","","",0);

  

  enum Page {Start, Home, AddMember, IssueBook, ReturnBook, DisplayBorrowed, Quit, PassDay};

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
      std::cout<<"(5) Quit                             (6) Pass day  \n \n";   

      int tempPage;

      while (!(std::cin >> tempPage)||tempPage<1||tempPage>6) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 1 and 6 \n \n";
      }

      page = static_cast<Page>(tempPage+1);

      
      
      
      
      
    }


    else if (page==AddMember)
    {

        std::cout <<"Add member\n \n";
        members.push_back(SetMemberDetails());

        
        
        page = Home;
    }





    else if(page==IssueBook)
    {
      if(members.size()>0)//if there are any members
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

        


        int genreIndex;//search by book type

        std::cout <<"What is the type of book you are looking for\n \n";


        std::vector<std::string> bookTypes = {"Science fiction", "Satire", "Drama", "Action and Adventure", "Romance", 
        "Mystery", "Horror", "Health", "Guide", "Diaries", "Comics", "Journals", "Biographies", "Fantasy", "History", "Science", "Art"};

        for (int i=0; i<bookTypes.size(); i++)
        {

          std::cout <<"("<<i<<") "<<bookTypes[i]<<"\n \n";
        }

        while (!(std::cin >> genreIndex)||genreIndex<0||genreIndex>16)
        {

              std::cin.clear();

              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

              std::cout << "This field only accepts numbers betwwen 0 and 16\n \n";
        }


        


        members[memberChoice-1].setBooksBorrowed(GetBook(SearchBooks(bookTypes[genreIndex]), bookTypes[genreIndex], currentDay));//assign book
        
        std::cout <<"Currently day "<<currentDay<<"\n \n";

        std::cout <<"Due Date is day "<<currentDay+3<<"\n \n";
      
      }
      else{
        std::cout <<"There are no members\n \n";
      }
      page = Home;

    }





    else if(page==ReturnBook)
    {
      if(members.size()>0)//if there are any members
      {
      
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



        std::cout <<"Which book do you want to return\n \n";

        std::vector<Book> temp =  members[memberChoice-1].GetBooksBorrowed();//get books
        
        
        if(temp.size()>0)//if there are any books
        {
          int bookChoice=-1;

          for(int i= 0; i<temp.size();i++){

              std::cout<<"("<<i<<")  "<<temp[i].getbookName()<<"\n \n";
          }


          while (!(std::cin >> bookChoice)||bookChoice<0||bookChoice>temp.size()-1) {

                std::cin.clear();

                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "This field only accepts numbers between 0 and "<<temp.size()-1<<" \n \n";
          }

          if(temp[bookChoice].getDueDate()<currentDay)//if the book is overdue
          {

            std::cout <<"Currently day "<<currentDay<<"\n \n";

            std::cout <<"Due Date is day "<<temp[bookChoice].getDueDate()<<" book is overdue by "<<currentDay-temp[bookChoice].getDueDate()<<" days\n \n";

            std::cout<<"Members fine is £"<<librarian.calcFine(currentDay, temp[bookChoice].getDueDate())<<"\n \n";

          }
          else
          {

              members[memberChoice-1].RemoveBook(bookChoice);
          }
        }
        else{
          std::cout <<"None available\n \n";//no books
        }

      }
      else{
        std::cout <<"There are no members\n \n";
      }

      

      page=Home;

    }






    else if(page==DisplayBorrowed){
      if(members.size()>0)//if there are any members
      {


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

        if(temp.size()>0)//if there are any books
        {
          for(int i= 0; i<temp.size();i++){

              std::cout<<"("<<i+1<<")  Name:"<<temp[i].getbookName()<<"\n \n";
          }
        }
        else{
          std::cout <<"This member has no books to display\n \n";
        }

      }
      else{
        std::cout <<"There are no members\n \n";
      }

      page =Home;

      

    }


    else if(page == Quit){
      std::cout << "Application has ended\n \n";
      quit = true;
      return 1;

      
    }


    else if(page ==PassDay)//pass time;
    {
        std::cout << "Current day is day "<<currentDay<<" \n \n";
        std::cout << "How many days should pass (0-10)\n \n";
        int days = 0;

        while (!(std::cin >> days)||days<0||days>10) {

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "This field only accepts numbers between 1 and 10\n \n";
      }
      currentDay+=days;

      std::cout << "Current day is day "<<currentDay<<" \n \n";
      page = Home;

    }

  }
}



