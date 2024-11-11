#include <iostream>
using namespace std;
int main() {
    int check;
    int count=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        check = a[i];
        for(int j=0;j<n;j++) {
            if (a[j]==check) {
                count++;
            }
        }
        if (count<2) {
            cout<<check;
            break;
        }
        count = 0;
    }
}?"LK