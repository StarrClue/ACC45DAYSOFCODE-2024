#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin>>testCase;

    while(testCase--) {
    int n;
    cin>>n;

    int arr[n];
    int freq[100] = {0};

    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    for(int i = 0; i<n; i++) {
        if (maxFreq < freq[arr[i]]) {
            maxFreq = freq[arr[i]];
        }
    }

    int minOper = n - maxFreq;
    cout<<minOper<<endl;

    for(int i = 0; i<n; i++) {
        freq[arr[i]] = 0;
    }
    }
    return 0;
}