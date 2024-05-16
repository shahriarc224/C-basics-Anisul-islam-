/*How to use arethmetic operators ......
the use of +,-,*,/,%........
*/

#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"Enter two numbers:"<<endl;
cin>>num1>>num2;
//num1=10,num2=20;          //We can initialige the vatriable

int sum=num1+num2;
cout<<"Sum is:"<<sum<<endl;

int sub=num1-num2;
cout<<"Substraction is :"<<sub<<endl;

int mul=num1*num2;
cout<<"Multiplaction is :"<<mul<<endl;

double div=(float)num1/num2;      //type cdasting
cout<<"Division is :"<<div<<endl;

int rem=num1%num2;
cout<<"Reminder is :"<<rem<<endl;

return 0;
}
