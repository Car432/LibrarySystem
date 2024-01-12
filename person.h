#ifndef _Person_H_
#define _Person_H_
#include <string>

class Person {

 public:

   

   std::string getName();
   
   void setName(std::string newName);

   std::string getAddress();
   void setAddress(std::string newAddress);

   std::string getEmail();
   void setEmail(std::string NewEmail);
 
 
 private:

   std::string name;
   std::string address;
   std::string email;




};
#endif
