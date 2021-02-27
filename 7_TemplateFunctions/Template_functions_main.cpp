// Main

#include "Template_max.h"
#include "Person.h"

int main() {
  Person p1("Honey", "Sukesan", 34);
  Person p2("Sruthy", "Sukesan", 30);
  Person p3("Sambhu", "Dayal", 39);

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

  std::cout << "maxi(20, 30): " << maxi(20, 30) << std::endl;
  std::string s1 = "Honey";
  std::string s2 = "Sruthy";
  std::cout << "maxi of Honey & Sruthy: " << maxi(s1, s2) << std::endl;
  std::cout << "maxi(0, -1): " << maxi(0, -1) << std::endl;
  //std::cout << "maxi(0.5, 30): " << maxi(0.5, 30) << std::endl;
  std::cout << "maxi(p1, p2):" << maxi(p1, p2).getName() << std::endl;
  std::cout << "maxi(p1, p3):" << maxi(p1, p3).getName() << std::endl;
  return 0;
}