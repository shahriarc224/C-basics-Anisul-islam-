//how to identify vowel and consonent .....

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any letter :"<<endl;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"VOWEL"<<endl;
    }
    else
    {
        cout<<"CONSONENT"<<endl;
    }


    return 0;
}
