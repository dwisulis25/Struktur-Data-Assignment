#include<iostream>
using namespace std;
///Main program
int main()
{
    char op;
    float num1, num2;
    //it allows user to enter operator i.e. +,- ,*, /
    cout<<"Masukan Operator: " << endl;
    cin >> op;
    cout << "Masukkan Angka 1 dan 2: ";
    cin>>num1>>num2;

    switch(op)
    {
    case'+':
        cout<<num1+num2;
        break;
    case'_':
        cout<<num1 - num2;
        break;
    case '*':
        cout<<num1 * num2;
        break;
    case '/':
        cout<<num1 / num2;
        break;
    default:
        cout<<"Eror!operator is not correct";
    
    }//switch statement ends
    return 0;
}


