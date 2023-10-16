//use of logical and && and logical or ||

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Write the value of x and y"<<endl;
    cin>>x,y;
    if (x>15&&y<2)
    {
        cout<<"YES"<<endl;
    }
    if (x>11&&y<2)
    {
        cout<<"YES"<<endl;
    }
    if (x>11&&y>2)
    {
        cout<<"YES"<<endl;
    }

    return 0;
}

//Use of or...........


#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Write the value of x and y"<<endl;
    cin>>x,y;
    if (x>15||y<2)
    {
        cout<<"YES"<<endl;
    }
    if (x>11||y<2)
    {
        cout<<"YES"<<endl;
    }
    if (x>11||y>2)
    {
        cout<<"YES"<<endl;
    }

    return 0;
}
