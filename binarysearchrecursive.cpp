#include<bits/stdc++.h>
using namespace std;

int recursivebinary(int arr[],int l,int h,int key)
{
    if(l==h)
    {
        if(arr[l]==key)
        {
            return l;
        }
        else
            return 0;
    }
    else
        {
            int mid=(l+h)/2;
            if(key==arr[mid])
                return mid+1;
            if(key<arr[mid])
                return recursivebinary(arr,l,mid-1,key);
            else
                return recursivebinary(arr,mid+1,h,key);
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
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int l=0,h=n-1,key;
    cout << "Enter the key to be searched=";
    cin >> key;
    int x=recursivebinary(a,l,h,key);
    if(x==0)
    {
        cout << "Key Not Found";
    }
    else
        cout << "Key is at Position " << x;
    return 0;
}