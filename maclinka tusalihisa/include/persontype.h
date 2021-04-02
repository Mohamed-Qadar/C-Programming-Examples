#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
using namespace std;

class persontype
{
    public:
        void print() const;
        void setName(string first,string last);
        string getFirstName() const;
        string getLastName() const;
        personType(string first="", string last="");
    private:
        string firstName;
        string lastName;
};

#endif // PERSONTYPE_H
