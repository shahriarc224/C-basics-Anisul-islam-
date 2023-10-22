//conditional operator...

#include <iostream>
using namespace std;
int main()
{

    int num1,num2;

    num1=20;
    num2=30;

    int max = (num1>num2) ? num1:num2;   //if the condition is correct then it will print num1 and if it s not then it will print num2.....
    cout<<max;


    return 0;

}

//even and odd numbers with conditional operator...

#include <iostream>
using namespace std;
int main()
{

    int num;

    cout<<"Enteger any integer:"<<endl;
    cin>>num;
    (num%2==0) ?cout<<"is even"<<num:cout<<"is odd"<<num;

    return 0;

}

