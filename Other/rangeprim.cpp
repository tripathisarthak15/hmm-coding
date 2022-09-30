#include <iostream>
using namespace std;
void print(int x,int y)
{   
    int i,j,flag=0;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i/2;j++)
        {
        if(i%j!=0)
        cout<<i<<" ";
        
        }
    }
}

int main()
{   int _x,_y;
    cout<<"ER: \n"; cin>>_x>>_y;
    print(_x,_y);
}