#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"enter size"<<endl;
    int *arr=new int[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete arr;
    return 0;
    
}