#include <iostream>
using namespace std;
void sequence(int number);
main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    sequence(number);

}
void sequence(int number) 
{
    for (int i = 1; i <= number; i++) 
    {
        if (i % 4 == 0)
        {
            cout << i * 10 << " ";
        } 
        else 
        {
            cout << i << " ";
        }
    }
}

