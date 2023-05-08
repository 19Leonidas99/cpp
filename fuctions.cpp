#include <iostream>

using namespace std;

double cube()
{
    double num;
    cout << "Number to cube: ";
    cin >> num;
    double result = num * num * num;
    return result;
}
void SayHi(string name) /* doesn't return anything*/
{
    cout << "hi, trainee!!" << name << endl;
} 

void Greetings(string name);

int main()
{

    SayHi("Leonidas");
    cout << "Answer: " << cube() << endl;
    Greetings("Maycon");
    return 0;
}

void Greetings(string name)
{
    cout << "Welcome back, " << name << endl;
}