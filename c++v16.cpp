//How to use  unary operator +,-,++,--...

#include<iostream>
using namespace std;
int main()
{

    int x=6;

    int result =+x;

    cout<<result<<endl;  //result +6

    retrun 0;
}


#include<iostream>
using namespace std;
int main()
{

    int x=6;

    int result =-x;

    cout<<result<<endl;   //result -6

    retrun 0;
}

/*Incriment 
++x pre incriment 
x++ post incriment

*/ 
#include<iostream>
using namespace std;
int main()
{
    
    int x=3;
    
    int y=x--;    //post decrement
    
    cout<<x<<endl;  //output 2
    cout<<y<<endl;  //output 3
    
    
       
   // int x=3;
    
    int y=--x;    //pre decrement
    
    cout<<x<<endl;  //output 2
    cout<<y<<endl;  //output 2
    
    
    
    
   // int x=3;
    
    int y=x++;    //post increment
    
    cout<<x<<endl;  //output 4
    cout<<y<<endl;  //output 3
    
    
       
    //int x=3;
    
    int y=++x;    //pre increment
    
    cout<<x<<endl;  //output 2
    cout<<y<<endl;  //output 4
    
    
    
    
    retrun 0;
