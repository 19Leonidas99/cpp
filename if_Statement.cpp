#include <iostream>

using namespace std;

int main()
{
    bool isSomething = true;
    bool isBrave = false;

    if(isSomething || isBrave){    /* && - and operators both need to be true*/
        cout << "TRUE";            /* || - or operator one has tobe true */
    } else {                       /* else if - more condition to check */
        cout << "FALSE";           /* ! - negation operator ex.: !isSomething*/
    }
}