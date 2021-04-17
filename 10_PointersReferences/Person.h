// Person.h
#include <iostream>
#include <string>

class Person {
private:
  std::string first_name;
  std::string last_name;
  int age;
  int id;

  //This could be a free function as well; in such case, id can be accessed only via getter function.
  friend bool operator<(int n, Person const& p); //Something < MyClassObject

public:
  Person();
  ~Person();
  Person(std::string, std::string, int);
  std::string getName() const;
  int getAge() const { return age; }
  void setAge(int newAge) { age = newAge; }
  bool operator<(Person const& p) const; //MyClassObject < Something
  bool operator<(int n) const; //Something < Something
};
