#include <iostream>
using namespace std;
int noofdots(int number);
main()
{
    int number;
    int answer;
    cout << "Enter number : ";
    cin >> number ;
    answer=noofdots(number);
    cout << "No of dots : " << answer << endl ;


}
int noofdots(int number)
{
    int flag;
    flag=(number*(number+1))/2;
    return flag;
}