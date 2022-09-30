#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    long rev=0;
    bool isPalindrome(int x) {
        string str= to_string(x);
        string temp=str;
        reverse(str.begin(), str.end()); 
        if(str==temp)
        return true;
        else
            return false;
        
        
        }
            
    }
    ; 

int main()
{   Solution s1;
    int _x;
    cout<<"\nEnter no. : "; cin>>_x;
    if(s1.isPalindrome(_x)==1)
    cout<<"Palindrome h bruh ";
    else
    cout<<"Palindrome teri gf ki tarah nahi h bruh";
    
    return 0;
}