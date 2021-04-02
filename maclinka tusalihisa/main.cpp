#include <iostream>
#include "persontype.h"
#include <personalInfo.h>
#include "datatype.h"
using namespace std;
int main()
{
    personalInfo student("abc","def",3,5,2000,123456);
    student.printpersonalInfo();

    return 0;
}
