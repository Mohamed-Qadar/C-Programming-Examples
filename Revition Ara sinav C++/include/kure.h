#ifndef KURE_H
#define KURE_H
#include <iostream>
using namespace std;


class kure
{
   public:
    float PI = 3.14159;
       int x,y;
       kure(int);
       int sethacim(int);
       int gethacim();
       int setalan(int);
       int getalan();
       void display();
};

#endif // KURE_H
