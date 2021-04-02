#ifndef DATATYPE_H
#define DATATYPE_H
#include <iostream>
using namespace std;

class datatype
{
    public:
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    void setDate(int month,int day, int year);

        dateType(int month=1, int day=1, int year=1900);
    private:
        int dMonth;
        int dDay;
        int dYear;
};

#endif // DATATYPE_H
