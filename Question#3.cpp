#include <iostream>
using namespace std;

int main() 
{
    float marks[3], avg;
    
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter marks: ";
        cin>>marks[i];
    }
    
    avg = (marks[0] + marks[1] + marks[2])/3;
    
    (avg >= 50) ? cout<<avg<<"% PASS " : cout<<avg<<"% FAIL";
    
    return 0;
}