#include <iostream>
#include <string>

using namespace std;

int main() {
    string current;
    int n;
    if (!(cin >> current >> n)) return 0;

    for (int step = 1; step < n; ++step) {
        string next_str = "";
        int count = 1;
        
        for (int i = 1; i < current.length(); ++i) {
            if (current[i] == current[i - 1]) {
                count++;
            } else {
                next_str += to_string(count) + current[i - 1];
                count = 1;
            }
        }

        next_str += to_string(count) + current.back();
        
        current = next_str;
    }

    cout << current << "\n";
    return 0;
}