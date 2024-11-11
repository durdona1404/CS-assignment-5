#include <iostream>
using namespace std;
int sum(int array1[], int array2[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        array1[i] *= array2[i];
        sum+=array1[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int array1[n];
    int array2[n];
    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> array2[i];
    }
    cout << sum(array1, array2, n);
}