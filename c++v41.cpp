//Series...Sum of all numbers ,even numbers, odd numbers...


//Sum of all numbers ...

#include<iostream>
using namespace std;

int main(){

int sum,n;

cout<<"Enter the last number:"<<endl;
cin>>n;

for(int i=0;i<=n;i++){

    sum=sum+i;


}
cout<<sum<<endl;

return 0;

}

//Sum of even numbers .....


#include<iostream>
using namespace std;

int main(){

int sum,n;

cout<<"Enter the last number:"<<endl;
cin>>n;

for(int i=2;i<=n;i=i+2){

    sum=sum+i;


}
cout<<sum<<endl;

return 0;

}


//Sum of odd numbers.......

#include<iostream>
using namespace std;

int main(){

int sum,n;

cout<<"Enter the last number:"<<endl;
cin>>n;

for(int i=1;i<=n;i=i+2){

    sum=sum+i;


}
cout<<sum<<endl;

return 0;

}

//1^2+2^2+3^2+.....+n..

#include<iostream>
using namespace std;

int main(){

int sum,n;

cout<<"Enter the last number:"<<endl;
cin>>n;

for(int i=1;i<=n;i=i+1){

    sum=sum+i*i;


}
cout<<sum<<endl;

return 0;

}

//1^5+2^5+3^5+.....+n..

#include<iostream>
using namespace std;

int main(){

int sum,n;

cout<<"Enter the last number:"<<endl;
cin>>n;

for(int i=1;i<=n;i=i+1){

    sum = sum + i*i*i*i*i;


}
cout<<sum<<endl;

return 0;

}
