#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int upper = 0,lower = 0,j = 0,q = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 97 && word[i] <= 122) {
            lower += 1;
        }else if (word[i] >= 65 && word[i] <= 90) {
            upper += 1;
        }
    }
    char lowers[lower];
    char uppers[upper];
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 97 && word[i] <= 122) {
            lowers[j] = word[i];
            j += 1;
        }else if (word[i] >= 65 && word[i] <= 90) {
            uppers[q] = word[i];
            q += 1;
        }
    }
    cout << upper << " ";
    for (int i = 0; i < upper; i++) {
        cout << uppers[i]<<" ";
    }
    cout << endl;
    cout << lower << " ";
    for (int i = 0; i < lower; i++) {
        cout << lowers[i]<<" ";
    }

    return 0;
}