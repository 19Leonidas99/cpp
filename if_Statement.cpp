#include <iostream>

using namespace std;

int getMax(int num1, int num2)
{
    int result;
    

    if (num1 < num2){
        result = num2;
    } else if(num1 == num2){
          result = 0;
    } else {
        result = num1;
    }

    return result;
}

int main()
{
    bool isSomething = true;
    bool isBrave = false;

    if(isSomething || isBrave){    /* && - and operators both need to be true*/
        cout << "TRUE" << endl;            /* || - or operator one has tobe true */
    } else {                       /* else if - more condition to check */
        cout << "FALSE" << endl;           /* ! - negation operator ex.: !isSomething*/
    }

    cout << getMax(5, 5);
}