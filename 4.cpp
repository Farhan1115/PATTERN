#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for( int i=1; i<=N; i++ )
    {
        for( int space=1; space<=N-i; space++ )
        {
            cout<<" ";
        }
        for( int j=1; j<=i; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



