// Person.h
#include "Resource.h"
#include <iostream>
#include <string>
#include <memory>

class Person {
private:
  std::string first_name;
  std::string last_name;
  int age;
  int id;
  std::shared_ptr<Resource> pResource;

  //This could be a free function as well; in such case, id can be accessed only via getter function.
  friend bool operator<(int n, Person const& p); //Something < MyClassObject

public:
  Person();
  Person(std::string, std::string, int);
  std::string getName() const;
  int getAge() const { return age; }
  void setAge(int newAge) { age = newAge; }
  bool operator<(Person const& p) const; //MyClassObject < Something
  bool operator<(int n) const; //Something < Something
  void AddResource();
  std::string getResourceName() const {return pResource ? pResource->GetName(): "";}
};
