#include<bits/stdc++.h>
using namespace std;

void toh(int n,int S,int A,int D)
{
        if(n>0)
        {
            toh(n-1,S,D,A);
            cout << S <<"->"<< D << endl;
            toh(n-1,A,S,D);
        }
}

int main()
{
    int n;
    cout << "Enter the number of disc=";
    cin >> n;
    int S=1,A=2,D=3;
    toh(n,S,A,D);
    return 0;
}