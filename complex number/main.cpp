#include <iostream>
using namespace std;
class complexNumber{
private:
int real;
double imagenary;
public:
complexNumber(){
}
complexNumber(int r,double i ){
    real =r;
    imagenary=i;

}
void display(){
cout<<"the complex number is ="<<real<<" + "<<imagenary<<"i"<<endl;
}
int getrealpart(){
return real;
}
double getimagenarypart(){
return imagenary;
}
};
complexNumber add2number(complexNumber n1,complexNumber n2){
int r;
double i;
r=n1.getrealpart()+n2.getrealpart();
i=n1.getimagenarypart()+n2.getimagenarypart();
complexNumber temp(r,i);
return temp;
}
int main()
{
    complexNumber comp1(4,6),comp2(3,2),comp3;
    comp1.display();
    comp2.display();
    cout<<"yhis is a complex number addionaly:"<<endl;
    comp3=add2number(comp1,comp2);
    comp3.display();
    return 0;
}
