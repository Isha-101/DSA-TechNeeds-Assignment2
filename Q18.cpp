#include <iostream>
using namespace std;

int main() 
{   
    int h;
    cout<<"Enter height \n";
    cin>>h;
    for (int i = 1; i <= h; i++) 
    {
        for (int j = 1; j <= h; j++) 
        {
            if (i == j || i + j == h + 1 || j == (h + 1) / 2) 
            {
                cout << "*";
            } 
            else 
            {
                cout << " ";  
            }
        }
        cout << endl; 
    }
    return 0;
}
