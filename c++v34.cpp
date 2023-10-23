//identifying vowel using switch case ....

#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter any letter :"<<endl;
cin>>ch;

ch=tolower(ch);
switch(ch){

case1:
    cout<<"a"<<endl;
break;

case2:
    cout<<"e"<<endl;
break;

case3:
    cout<<"i"<<endl;
break;

case4:
    cout<<"o"<<endl;
break;

case5:
    cout<<"u"<<endl;
break;

default:
    cout<<"Consonent."<<endl;

}
return 0;
}
