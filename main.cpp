#include <stdio.h>
#include <iostream>
using namespace std;

void say_hello(int timesToRepeat) 
    {
    for(int i=0;i<timesToRepeat;i++) 
        {
            cout << "Test Condition #1: "<< "Hello World\n";
        }
    }

void sumOfTwoValues(int a, int b)
    {
    int sumOfTwoValues = a*b;
    cout << "Sum of Two Values is: " << sumOfTwoValues; 
    }

int main()
    {
    say_hello(5);
    sumOfTwoValues(4,5);
    return 0;
    }

