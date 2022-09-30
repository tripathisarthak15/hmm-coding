#include <iostream>
using namespace std;

int main()
{
    int a[100],s,p,i;
    cout<<"Enter number of elements in array: ";
    cin>>p;
    cout<<"Enter Elements: ";
    for(i=0; i<p; i++) {
        cin>>a[i];
    }

    printf("\narray is: ");
    for(i=0; i<p; i++) {
        cout<<" "<<a[i];
    }
    p=p-1;
    int t;
    while(s<p) {
        t=a[s];
        a[s]=a[p];
        a[p]=t;
        s++;
        p--;
    }

    printf("\nreversed array is: ");
    for(i=0; i<s; i++) {
        cout<<" "<<a[i];
    }
#include <iostream>
#include <stdlib.h>
using namespace std;

class Student
{
    int age,stnd; string fname,lname;
    public:
    void send(int age,string lname,string fname,int stnd)
    {
        cout<<age<<"\n"<<lname<<", "<<fname<<"\n"<<stnd<<"\n\n";
        cout<<age<<","<<fname<<","<<lname<","<<stnd;
        
    }
};

int main() {
    int _age,_stnd; string _fname,_lname;
    cin>>_age>>_fname>>_lname>>_stnd;
    Student s1;
    s1.send(_age,_lname,_fname,_stnd);
    
    return 0;
}