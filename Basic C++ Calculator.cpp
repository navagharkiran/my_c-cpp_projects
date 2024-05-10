#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int num1, num2, choice;
    while(1)
    {
        cout<<"\nThis is Simple Calcultor in C++\n";
        cout<<"1.Addition\n";
        cout<<"2.Subtraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"5.Exit\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter Num1 and Num2 Value for Addition of Numbers\n";
            cin >>num1>>num2;
            cout<<"The Addition of Numbers is "<<num1 + num2<<endl;
            break;
            case 2:
            cout<<"Enter Num1 and Num2 Value for Subtraction of Numbers\n";
            cin >>num1>>num2;
            cout<<"The Subtraction of Numbers is "<<num1 - num2<<endl;
            break;
            case 3:
            cout<<"Enter Num1 and Num2 Value for Multiplication of Numbers\n";
            cin >>num1>>num2;
            cout<<"The Multiplication of Numbers is "<<num1 * num2<<endl;
            break;
            case 4:
            cout<<"Enter Num1 and Num2 Value for Division of Numbers\n";
            cin >>num1>>num2;
            if(num2==0)
            {
                cout<<"Invalid you can't Divide it with (0/0)Zero\n";
                break;
            }
            cout<<"The Division of Numbers is "<<(float)num1 / num2<<endl;
            break;
            case 5:
            cout<<"The Program Exitted Successfully \n";
            return 0;
            break;
            default:
            cout<<"Enter the Choice only between 1-5 \n..Try again!\n";
            break;
        }
    }
}