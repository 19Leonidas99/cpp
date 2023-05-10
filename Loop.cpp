#include <iostream>

using namespace std;

int main()
{
    int index = 1;
    while(index <= 5) {
        cout << index << endl;
        index ++;
    }

    do {
        cout << index << endl;
        index--;
    }while(index >= 0);

    for(int i=1; i<=5; i++){
        cout << i << endl;
    }
}