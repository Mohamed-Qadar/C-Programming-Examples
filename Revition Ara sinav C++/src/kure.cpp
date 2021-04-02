#include <iostream>
#include "kure.h"
using namespace std;
kure::kure(int a){
setalan(a);
}
int kure::setalan(int a){
x=a;
}
int kure::getalan(){
return x*x*PI;
}
int kure::sethacim(int b){
y=b;
}
int kure::gethacim(){
return (y*y*y*PI)/3;
}
void kure::display(){
cout<<"kurenin alani="<<getalan()<<endl;
cout<<"kurenin hacimin="<<gethacim()<<endl;
}
