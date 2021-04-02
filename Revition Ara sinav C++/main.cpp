#include <iostream>
#include "kure.h"
using namespace std;

int main()
{
    kure ob(4);
    ob.sethacim(4);
    ob.setalan(4);
    cout<<ob.gethacim()<<endl;
     cout<<ob.getalan()<<endl;
     ob.display();
    return 0;
}
