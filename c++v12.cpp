/*How to use showpoint,noshowpoint ,fixde,precision(),setw().....

*/

#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"Enter two numbers:"<<endl;
cin>>num1>>num2;

cout<<showpoint;        /*If we want to see the point then we have to write 
                          cout<<shpwpoint; but its only going to write up to 6 point */
cout<<fixed;
cout<<pricision(2);      /*if we want to see two numbers after the point then we are going to writre this*/
//cout<<precision(10);  
                          /*If we want to see more then 6 point then we have to use 
                          cout<<precision; Now if we want to see 10 points then we 
                          are going to write cout<<setpocision(10); and we also have 
                           use a heder file include<iomanip>   */

float sum=num1+num2;
cout<<setw(20)<<"Sum is:"<<sum<<endl;    //We can use setw() if we want to limit the space for caracter...
cout<<noshowpoint;      //If we dont want to see the point then we habve to write cout<<noshowpoint;
float sub=num1-num2;
cout<<setw(20)<<"Substraction is :"<<sub<<endl;

float mul=num1*num2;
cout<<setw(20)<<"Multiplaction is :"<<mul<<endl;     //

double div=(float)num1/num2;      //type cdasting
cout<<setw(20)<<"Division is :"<<div<<endl;

/*int rem=num1%num2;
cout<<"Reminder is :"<<rem<<endl;
*/

return 0;
}
