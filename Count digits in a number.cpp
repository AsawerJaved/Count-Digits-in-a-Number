#include <iostream>
using namespace std;
int main()
{
    int num, count=0;
    cout<<"Enter a number: ";
    cin>>num;
    while (num!=0)
    {
        num=num/10;       // separates the last digit i.e. 345/10 = 34 as both operands are integers
        count++;
    }
    cout<<"Number has "<<count<<" Digits";
    
    return 0;
}
