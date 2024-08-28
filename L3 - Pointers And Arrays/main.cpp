#include <iostream>

using namespace std;

int main()
{
    cout << "Q u a y e  C o d e s!" << endl;
    cout <<endl;

    string rgt[] = { "1. Data Register ", "2. Address Register","3. Instruction Register", "4. Programme Counter" };
    string *Nrgt=rgt;

    cout << "\t Types of Register" <<endl;
    for (int i=0; i <4 ;i++)
    {
        cout <<Nrgt[i] <<endl;
    }
    cout <<endl;

    //Using for loop pointers in arrays!
    cout << "\t Types Of Registers" <<endl;
    string *first = &rgt[0];
    string  *last = &rgt[3];

    while(true)
    {
        cout << *first <<endl;

        if(first==last)
        {
            break;
        }
        first++;
    }
    return 0;
}
