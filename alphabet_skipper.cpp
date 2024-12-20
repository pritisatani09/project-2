#include<iostream>
using namespace std;

//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.
int main()
{
    char letter = 'a';
    do{
        cout << letter << " ";
        letter += 4;
    } while (letter <= 'z');

    cout << endl;
    return 0;
}
