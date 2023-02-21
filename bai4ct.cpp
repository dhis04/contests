#include<iostream>
using namespace std;
int main()
{
    int n ;
    int a[50];
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<max<<endl;
    int k =0;
    for(int i = 0; i < n; i++)
    {
        if(max==a[i])
        {
            k=k+1;
        }
    }
    cout<<k<<endl;
    
}