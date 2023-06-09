#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s[]={" ", "one ", "two ", "three ", "four ", "five ", "six ", "severn ", "eight ", "nine "};
    
    int a;
    int b;

    cin>>a>>b;
    
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<s[i]<<endl;
        }
        else if(i%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
    
    return 0;
}