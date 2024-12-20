#include<iostream>
using namespace std;
 
//Develop a Program to find the sum of a number's first and last digits
int main()
{
    int num, sum, firstDigit, lastDigit;
    sum = 0;
    cout << "Enter any number:";
    cin >> num;

    lastDigit = num%10;
     
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    cout << "The sum of first and the last digit:" << sum << endl;

    return 0;
}