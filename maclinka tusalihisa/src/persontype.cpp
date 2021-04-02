#include "persontype.h"
#include <iostream>
using namespace std;
persontype::persontype(string first, string last)
{
 setName(first,last);
}
 void persontype:: setName(string first,string last){
 firstName=first;
 lastName=last;
 }
string persontype:: getFirstName() const{
return firstName;
}
string persontype:: getLastName() const{
return lastName;
}
 void persontype:: print() const{
 cout << firstName<<lastName;
 }
