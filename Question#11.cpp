#include <iostream>
using namespace std;

int main() 
{
    float nums[3], sum, prod, avg;
    
    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter a number: ";
        cin>>nums[i];
    }
    
    prod = nums[0] * nums[1] * nums[2];
    sum = nums[0] + nums[1] + nums[2];
    avg = sum/3;
    
    cout<<"Product: "<<prod<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
    
    return 0;
}