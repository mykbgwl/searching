#include<bits/stdc++.h>
using namespace std;

int jumpsearch(int arr[],int n,int key)
{
    int i,l=0;
    int h=sqrt(n);
    while(key>=arr[h] && h < n)
    {
        l=h;
        h+=sqrt(n);
        if(h>n)
        {
            h=n;
        }
    }
    for(i=l;i<h;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
    }
    return 0;
}

int main()
{
    int i,n;
    cout << "Enter the no. of elements=";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter the key to be searched=";
    cin >> key;
    int x=jumpsearch(a,n,key);
    if(x==0)
    {
        cout << "Key Not Found";
    }
    else
        cout << "Key is at position=" << x;
}