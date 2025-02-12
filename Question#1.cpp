#include <iostream>
using namespace std;

void calculate(float x, float y, float z)
{
    float sum, avg;
    
    sum = x+y+z;
    avg = sum/3;
    
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<avg<<endl;
}

int main() 
{
    float x,y,z;
    
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;
    
    calculate(x,y,z);
    
    return 0;
}