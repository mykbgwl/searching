#include<bits/stdc++.h>

using namespace std;

int linearsearch(int arr[],int n,int key)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=i+1;
            return flag;
        }
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
    int x=linearsearch(a,n,key);
    if(x==0)
    {
        cout << "Key Not Found";
    }
    else
    {
        cout << "Key is found at position= " << x;
    }
    return 0;
}