#include <iostream>

using namespace std;

int main()
{
    cout << "            Arithmetic In C++                  "<<endl;
    cout << endl;
    // Division Method
    double value = (double)5/3 ;
    cout << "5/3 = "<<value << endl;

    int value1 = (int)4.4;// Rounding Numbers uses special mathematics to do that!
    cout << "Next Value: " << value1 <<endl;

    int num = 7;
    num += 8 ; //num++
    cout << "Next Value>> 7 + 8 = " <<num <<endl;

    int num1 = 9;
    num1 /= 3; // num1= num1/3
    cout << "Next value>> 9 divided by 3 is " <<num1 <<endl;

    int num2 = 50%5;//modulus of a number
    cout << "Next Value>> 50 mod 5 = " <<num2 <<endl;

    cout << "-------------Hours To Days converter-------------------"<<endl;
    int input;
    long double converter;
    cout << "Enter Your Hours>>";
    cin >> input ;
    converter = ((long double)(input)/24)*1;
    cout <<input << " hrs gives >> " <<converter << " day(s)"<<endl;


    return 0;


}
