#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int*, int arr[n], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    int i,j,temp;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"SORTED Array is: "<<endl;

    bubbleSort(int*, int n, int arr[n]);

return 0;
}