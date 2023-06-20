#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    int a[n],b[n];
	    
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d%d",&a[i],&b[i]);
	    }
	    int c1,c2;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=0)
	        {
	            c1=c1+1;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]!=0)
	        {
	            c2=c2+1;
	        }
	    }
	    
	    if(c1>c2)
	    {
	        printf("Addy\n");
	    }
	    else if(c2>c1)
	    {
	        printf("Om\n");
	    }
	    else
	    {
	        printf("Draw\n");
	    }
	    
	}
	return 0;
}