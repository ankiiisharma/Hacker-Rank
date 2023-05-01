#include<stdio.h>
#include<limits.h>

void main()
{
    int n;
    printf("Enter the no. of Elements in the Array\n");
    scanf("%d",&n);
    int i;
    int l=INT_MIN;
    int sl=INT_MIN;

    int arr[n];
    printf("Enter the Array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
     if(l<arr[i])
     {
        sl=l;
        l=arr[i];
    }
    else if(arr[i]<l && arr[i]>sl)
    {
        sl=arr[i];
    }
    }

    printf("The second largest element is : %d" ,sl );
}
  
