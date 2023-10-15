/* Use of special operator  */

include<iostream>
using namespace std;
int main(){
int a;
float f;
double d;
char ch;
char name(20);

int c=sizeof(a);
cout<<c<<endl;    //its going to show the size of integer

int c=sizeof(f);
cout<<c<<endl;

int c=sizeof(d);
cout<<c<<endl;

int c=sizeof(ch);
cout<<c<<endl;


sum=(x=20,y=30,sum=x+y)//use of the comma(,)....
cout<<sum;


 return 0;

}
