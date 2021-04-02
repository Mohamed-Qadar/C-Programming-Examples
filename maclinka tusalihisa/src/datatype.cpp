#include "datatype.h"

datatype::datatype(int month, int day, int year)
{
   setDate(month,day,year);
}
void datatype:: setDate(int month,int day, int year){
 dMonth=month;
 dDay=day;
 dYear=year;
}
 int getDay() const{
 return dDay;
 }
 int getMonth() const{
 return dMonth;
 }
 int getYear() const{
 return dYear;
 }
 void printDate() const{
  cout << dMonth <<"-" <<dDay << "-" <<dYear;
 }
