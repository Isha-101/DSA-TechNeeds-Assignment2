#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number\n";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
