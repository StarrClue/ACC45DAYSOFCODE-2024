#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string strs[n];

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    if (n == 0) {
        cout << "Longest Common Prefix: " << "" << endl;
        return 0;
    }

    string prefix = strs[0];

    for (int i = 1; i < n; i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) break;
        }
    }
    cout << "Longest Common Prefix: " << prefix << endl;

    return 0;
}
