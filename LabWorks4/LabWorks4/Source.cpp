#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void main() {

    const int SIZE = 10;
    int arr[SIZE];
    cout << "Vvedit elementy: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "max element = " << max << endl;

    int i = 0, j, x, h = 0;

    for (int g = 0; g < SIZE; g++)
    {
        j = g + 1;
        if (i < SIZE and j < SIZE)
        {
            x = arr[g] + arr[j];

            if (x % 3 == 0 and x > max and x > 0)
            {
                h = h + 1;
            }
        }
    }
    cout << "kilkist elementiv = " << h << endl;

    _getch();
}
