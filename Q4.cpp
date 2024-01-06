#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<"Enter height\n";
    cin>>h;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=h+1-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}
