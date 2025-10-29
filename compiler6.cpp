#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &minValue, int &maxValue) {

    minValue = arr[0];
    maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}
int main() {
    int n;

    cout << "Enter : ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int minValue, maxValue;

    findMinMax(arr, n, minValue, maxValue);

    cout << "minimum value : " << minValue << endl;
    cout << "maximum value : " << maxValue << endl;

    return 0;
}
