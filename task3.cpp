#include <iostream>
using namespace std;
void nestedfor(int row);

main()
{
    int row;
    cout << "Enter desired number of rows : ";
    cin >> row;
    nestedfor(row);
}
void nestedfor(int row)
{
    for(int i=1; i<=row ; i++)
    {
        for (int j=0;j<=row-i-1;j++) 
        { 
            cout << " "; 
        } 
        for(int j=1; j<=i ; j++)
        {
            cout << "*";
        }
        cout << endl ;
    }
    for(int i=row; i>=1 ; i--)
    {
        for (int j=0;j<=row-i-1;j++) 
        { 
            cout << " "; 
        } 
        for(int j=1; j<=i ; j++)
        {
            cout << "*";
        }
        
        cout << endl ;
    }
}