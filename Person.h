#ifndef _Person_H_
#define _Person_H_
#include <string>

class Person {

 public:

   
   Person(std::string newName, std::string newAddress, std::string NewEmail);

   std::string GetName();
   
   void SetName(std::string newName);

   std::string GetAddress();
   void SetAddress(std::string newAddress);

   std::string GetEmail();
   void SetEmail(std::string NewEmail);
 
 private:

   std::string name;
   std::string address;
   std::string email;




};
#endif
