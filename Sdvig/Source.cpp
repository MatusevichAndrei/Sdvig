#include <iostream>

using namespace std;

void move(int* array, int size, int diff) {
    int tmp;
    diff = diff % size;
    while (diff > 0) {
        tmp = array[0];
        for (int i = 0; i < size - 1; i++)
            array[i] = array[i + 1];
        array[size - 1] = tmp;
        diff--;
    }
    while (diff < 0) {
        tmp = array[size - 1];
        for (int i = size - 1; i > 0; i--)
            array[i] = array[i - 1];
        array[0] = tmp;
        diff++;
    }
}

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;
    int left, right;

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << "enter left and right: ";
    cin >> left >> right;
    move(array, size, left - right);

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
