#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    cout<<"Enter the topics: ";
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>X;
    
    if (X == A || X == B || X == C) {
        cout<<"Yes";
    } 
    else {
        cout<<"No";
    }

    return 0;
}