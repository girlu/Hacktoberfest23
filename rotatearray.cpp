
#include <iostream>
using namespace std;

void rotate_array_left(int arr[], int n, int d) {
    d = d % n; // adjust d if it's greater than n
    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for(int i = n - d; i < n; i++) {
        arr[i] = temp[i - n + d];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    rotate_array_left(arr, n, d);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
