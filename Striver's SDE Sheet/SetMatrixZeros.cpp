#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100][100],m,n,i,j;
    cout<<"Enter the order of the matrix:\n";
    cin>>m>>n;
    cout<<"Enter the matrix:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                for ( i = 0; i < m; i++)
                {
                    a[i][j]=0;
                }
                for ( j = 0; j < n; j++)
                {
                    a[j][i]=0;
                }
            }
        }
        
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;

    }

    return 0;
}
