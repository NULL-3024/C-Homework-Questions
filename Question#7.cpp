#include <iostream>
using namespace std;

int main() 
{
    const float PI = 3.14f;
    float radius;
    
    cout<<"Enter radius: ";
    cin>>radius;
    
    cout<<"Circumference: "<<2*radius*PI<<endl;
    cout<<"Area is: "<<PI*radius*radius;
}