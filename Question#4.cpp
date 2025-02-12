#include <iostream>
using namespace std;

int main() 
{
    float sides[2];
    
    for(int i = 0; i < 2; i++)
    {
        cout<<"Enter the lenght of a side: ";
        cin>>sides[i];
    }
    
    cout<<"Area is: "<<sides[0]*sides[1];
    return 0;
}