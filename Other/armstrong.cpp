#include <iostream>
#include <string>
using namespace std;

bool isArm(int x)
{   int p=x;
    int sum=0,n;
    while(x!=0)
{
    n=x%10;
    x=x/10;
    sum=n*n*n+sum;


    }
    cout<<"bhai "<<sum;
    if(sum==p)
    return true;
    else
    return false;
}

int main()
{   int _x;
    cout<<"EN: "; cin>>_x;
    if(isArm(_x)==1)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}