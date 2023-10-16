/*uses of if else ...*/
#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;


    if(num>0)
    {

        cout<<"Positive"<<endl;
    }
   else if(num<0)
    {
        cout<<"Negative"<<endl;
    }
   else if (num==0)
    {

        cout<<"Zero"<<endl;

    }

    return 0;
}
