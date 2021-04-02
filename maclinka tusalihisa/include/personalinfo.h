#ifndef PERSONALINFO_H
#define PERSONALINFO_H
#include <string>
#include <iostream>
#include "persontype.h"
#include "datatype.h"
using namespace std;

class personalinfo
{
    public:
        personalinfo();
        void setpersonalInfo(string first, string last, int month, int day, int year, int ID);
        void printpersonalInfo() const;
        personalInfo(string first="",string last="",int month=1,int day=1,int year=1900, int ID=0);

    private:
      persontype name;
      datatype bDay;
      int personID;

};

#endif // PERSONALINFO_H
