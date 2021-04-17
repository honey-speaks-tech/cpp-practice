#include <iostream>

int main()
{
 int i = 10;

 //Pointer to const
 const int* ptr = &i;
 int const* ptr1 = &i;
 //*ptr = 20; //can't be done as pointer to const
 // *ptr1 = 20; //can't be done as pointer to const
 
 int j = 30;
 ptr = &j;
 ptr1 = &j; 

 //const pointer
 int* const ptr2 = &i;
 *ptr2 = 20;
 //ptr2 = &j; //can't be done as pointer is const

 //const pointer to const
 const int* const ptr3 = &i;
 //*ptr3 = 20; //can't be done as pointer to const
 // ptr3 = &j; //can't be done as pointer is const

 //const reference
 const int& ri = i;
 //ri = 30; //can't be done as constant reference

}
