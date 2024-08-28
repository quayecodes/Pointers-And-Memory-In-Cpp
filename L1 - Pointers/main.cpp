#include <iostream>

using namespace std;

void education(string *school)
{

    *school = "Ghana Communication Technology University";
    cout << "Current School: " << *school <<endl;

}

int main()
{
    string name = "Management Information System(MIS)" ;
    string* Nname = &name;
    cout << " Portal: " << *Nname <<endl;

    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    string pschool= "Accra Academy" ;
    cout << "previews School: " <<pschool <<endl;
    education(&pschool);
    cout << "Confirmed School: " <<pschool <<endl;

    return 0;
}
