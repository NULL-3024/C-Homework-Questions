#include <iostream>
using namespace std;

int main() 
{
    float nums[3];
    
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter a number: ";
        cin>>nums[i];
    }
    
    cout<<"Product is: "<<nums[0]*nums[1]*nums[2];
    
    return 0;
}