//

#include<iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter any letter :"<<endl;
    cin>>ch;
    ch=tolower(ch);       //we use this library function to make capital letter small letter

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
