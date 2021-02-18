// Main

#include "Person.h"

int main() {
  Person p1("Honey", "Sukesan", 34);
  Person p2("Sruthy", "Sukesan", 30);

  // calls member function operator<(Person const& p)
  if (p1 < p2) {
    std::cout << p1.getName() << " is younger than " << p2.getName() << std::endl;
  } else {
    std::cout << p1.getName() << " is older than " << p2.getName() << std::endl;
  }

  // calls member function operator<(int n)
  if (p1 < 39) {
    std::cout << p1.getName() << " is younger" << std::endl;
  } else {
    std::cout << p1.getName() << " is older" << std::endl;
  }

  // calls friend function operator<(int id, Person const& p)
  if (57 < p1) {
    std::cout << p1.getName() << " is older" << std::endl;
  } else {
    std::cout << p1.getName() << " is younger" << std::endl;
  }

  return 0;
}