#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void main() {
    

    const int SIZE = 10;
    int arr[SIZE] = { 6,9,5,7,3,9,7,2,5,3 };

    
    cout << "Your array: ";

    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }

    int max = arr[0];

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\nThe max element = " << max << endl;

    int x, h = 0;

    for (int i = 0;i < SIZE; i++)
    {
         x = arr[i+1] + arr[i];

          if (x % 3 == 0 || x > max || x > 0)
           {
              h = h + 1;
           }
       
    }
    cout << "Number of elements = " << h << endl;//Кількість елементів

    _getch();
}
