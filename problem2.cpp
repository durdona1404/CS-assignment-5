#include <iostream>
using namespace std;
int main() {
    int boluvchi ;
    bool isValid = true;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        boluvchi = arr[i];
        for (int j = 0; j < n; j++) {
            if (arr[j]%boluvchi != 0) {
                isValid = false;
            }
        }
        if (isValid) {
            break;
        }
        if (i < n-1) {
            isValid = true;
        }
    }
    if (isValid) {
        cout << boluvchi << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}
