#include <iostream>
using namespace std;

float product(float x, float y, float z)
{
    return x*y*z;
}

int main() 
{
    float nums[3];
    
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter a number: ";
        cin>>nums[i];
    }
    
    cout<<"Product is: "<<product(nums[0], nums[1], nums[2]);
    
    return 0;
}