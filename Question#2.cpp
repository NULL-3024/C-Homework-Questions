#include <iostream>
using namespace std;

int main() 
{
    int nums[100];
    
    for(int i = 1; i <= 100; i++)
    {
        nums[i] = i*2-1;
        cout<<nums[i]<<endl;
    }
    
    return 0;
}