#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /* Basic Operator */
    cout << 7 + 5 << endl;
    cout << 7 - 5 << endl;
    cout << 5 * 5 << endl;
    cout << 15 / 3 << endl;
    /*#######################################*/

    int wnum = 80;
    wnum++; /* increment by 1*/
    cout << wnum << endl;
    wnum += 4; /* increment by 4 */
    cout << wnum << endl;
    wnum--; /* decrease by 1 */
    cout << wnum << endl;
    /*#######################################*/

    cout << 10 / 3 << endl; /* whole number result */
    cout << 10 / 3.0 << endl; /* decimal number result*/
    /*#######################################*/

    cout << pow(3, 3) << endl; /* pow - to the power of */
    cout << sqrt(36) << endl; /* sqrt - square root */
    cout << round(10.5) << endl; /* round - rounds up */
    cout << floor(10.5) << endl; /* floor - round down */
    cout << fmax(7,5) << endl; /* return max umber between 2 arguments */
    cout << fmin(3,-8) << endl; /* return min number between 2 arguments */

}