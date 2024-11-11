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
