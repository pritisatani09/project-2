#include<iostream>
using namespace std;

//Develop a Program to count the total number of digits in a number.
int main()
{
    long long num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 0) 
    {
        num = -num;
    }

    do{
        count++;
        num /= 10;
    }while (num != 0);

    cout << "Total number of digits:" << count << endl;
    return 0;
}
