#include <iostream>
using namespace std;

int main() 
{
    int nums[2], sum, prod, avg;
    
    for(int i = 0; i < 2; i++)
    {
        cout<<"Enter a number: ";
        cin>>nums[i];
    }
    
    (nums[0] + nums[1])%2 == 0 ? cout<<"Even" : cout<<"Odd";
    return 0;
}