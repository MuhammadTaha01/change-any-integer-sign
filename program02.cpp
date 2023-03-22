#include<iostream>
using namespace std;
int main()
{
    int a;
    char choice;
    cout<<"Enter any number: ";
    cin>>a;
    cout<<"Enter +/- sign: ";
    cin>>choice;

    switch(choice)
    {
    case '-':
        cout<<"The positive number is: ";
        cout<<"+"<<a7;
        break;

    case '+':
        cout<<"The negative number is: ";
        cout<<"-"<<a;
        break;
    }

    return 0;
}
