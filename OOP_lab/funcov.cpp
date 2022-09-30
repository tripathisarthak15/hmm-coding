#include <iostream>
using namespace std;

class area
{   double a,b,side;
    public:
    void ar()
    {           cout<<"\nArea of theCircle is ";        
    }

    void ar(double a,double b)
    {   cout<<"\nEnter length and breadth:\n";
        cin>>a>>b;
        cout<<"\nArea of the rectangle is "<<a*b<<" square units.";
    }

    void ar(double side)
    {   cout<<"Enter side: ";
        cin>>side;
        cout<<"\nArea of the square is "<<side*side<<" square units.";
    }
};

int main()
{
    area ar1;
    int ch; double x,y,s,rad;
    while(1)
    {
        cout<<"\n\n1. Rectangle\n2. Circle\n3. Square\n4. Exit\nEnter Choice to find area: "; cin>>ch;
        switch(ch)
        {
            case 1: ar1.ar(x,y); break;
            case 2: 
                    cout<<"Enter Radius: "; cin>>rad; ar1.ar();
                    cout<<3.14*rad*rad<<" square units.";
                    break;
            case 3: ar1.ar(s); break;
            case 4: exit(0);
            default: cout<<"\nInvalid Input!"; break;

        }
    }
return 0;

}




