#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int i,l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(key==arr[mid])
            return mid+1;
        if(key<arr[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return 0;
}

int main()
{
    int i,n;
    cout << "Enter the number of elements=";
    cin >> n;
    int a[n];
    cout << "Enter the elements=";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter the key to be searched=";
    cin >> key;
    int x=binarysearch(a,n,key);
    if(x==0)
    {
        cout << "Key Not Found";
    }
    else
    {
        cout << "Key is at Position " << x;
    }
    return 0;
}