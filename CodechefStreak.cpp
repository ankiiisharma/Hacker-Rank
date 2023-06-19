#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    int x; //count of a[n]
	    int y; //count of b[n]
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=0)
	        {
	            x=x+1;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	       if(b[i]!=0)
	       {
	           y=t+1;
	       }
	    }
	    
	    if(x>y)
	    {
	        cout<<"Addy"<<endl;
	    }
	    else if(y>x)
	    {
	        cout<<"Om"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	    
	}
	return 0;
}