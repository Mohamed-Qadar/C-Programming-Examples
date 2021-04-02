#include "personalinfo.h"

personalInfo::personalInfo(string first,string last,int month,int day,int year, int ID)
             :name(first,last),bDay(month,day,year)
{
    personID=ID;
}
  void personalinfo:: setpersonalInfo(string first, string last, int month, int day, int year, int ID){
  name.setName(first,last);
  bDay.setDate(month,day,year);
  personID=ID;
  }
  void personalInfo::printpersonalInfo() const
{
    name.print();
    cout <<"'s date of birth is ";
    bDay.printDate();
    cout << "and personal ID is " <<personID;
}
