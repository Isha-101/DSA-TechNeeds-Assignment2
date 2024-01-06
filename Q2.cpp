#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<"Enter height of pattern: \n";
    cin>>h;
    for(int i=1; i<=h; i++)
    {
        for(int j=0; j<=h-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
