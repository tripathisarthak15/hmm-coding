#include <iostream>
using namespace std;

class schs{
    int m1,m2,m3;

    public:
    int sum(int m1,int m2, int m3){
        int pcnt=(m1+m2+m3)/3;
           return pcnt;
    }

    int sum(int tf, int df){
        cout<<"\nTotal Fees W/0 Schloarship for the Semester is: ₹"<<tf+df<<endl;
        return tf+df;
    }

    void fc(int _dis){
        if(_dis<10)
            {cout<<sum(37480,5541);}
        else{
        int fees=sum(37480,5541);
        fees= fees-(fees*_dis/100);
        cout<<"\nFees after applying Scholarship Discount is: ₹"<<fees;}

    }
};

int main(){
    string name; int marks[3],  dis;
    schs stu;
    stu.sum(37480,5541);
    
    cout<<"\n\nEnter Canditate Name: "; getline(cin>>ws,name);
    cout<<"\nEnter Physics marks: "; cin>>marks[0];
    cout<<"\nEnter Chemistry marks: "; cin>>marks[1];
    cout<<"\nEnter Mathematics marks: "; cin>>marks[2];

    auto pcs=stu.sum(marks[0],marks[1],marks[2]);

    if(pcs>=95 && pcs<=100)
    {cout<<"\n50 Percent Scholarship Awarded to "<<name; dis=50; }

    else if(pcs>=85 && pcs<=94)
    {cout<<"\n20 Percent Scholarship Awarded to "<<name; dis=20;}

    else if(pcs>=75 && pcs<=84)
    {cout<<"\n10 Percent Scholarship Awarded to "<<name; dis=10;}

    else
    {cout<<"\nNO Scholarship Awarded to "<<name; dis=0;}

    stu.fc(dis);
}