#include<iostream>
using namespace std;
int main(){
    for ( int i = 0; i < 4; i++)
    {
        if(i==1)
        {
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}