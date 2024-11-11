#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int profit =0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int min = a[0];
    for(int i=1;i<n;i++) {
        if(a[i]<min) {
            min = a[i];
        }else if(profit <= a[i] - min){
            profit = a[i]-min;
        }
    }
    cout<<profit;
}
