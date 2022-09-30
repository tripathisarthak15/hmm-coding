#include <iostream>
using namespace std;

bool isPrime(int x)
{
    int i,flag=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        flag++;
    }
    if(flag!=0)
    return false;
    else
    return true;
}
int main()
{   int _x;
    cout<<"EN: "; cin>>_x;
    if(isPrime(_x)==1)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}