#include <iostream>

using namespace std;

int main()
{
    char grade = 'A';  /* char - single character */
    string Phrase = "Learning C++";
    int value = 100; /* int - whole numbers */
    float decimal = 2.5; /* float - decimal numbers */
    double decNumber = 2.156; /*double - float more precise */
    bool isSomething = true; /* bool - true or false*/

    cout << Phrase.length() << endl;
    cout << Phrase[9] << value << endl;
    cout << Phrase.find("C++", 0); /* return first index where it start*/
    string word;
    word = Phrase.substr(9, 3); /* substr( index, many )*/
    cout << word << endl;
    
} 