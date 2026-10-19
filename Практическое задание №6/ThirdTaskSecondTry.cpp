#include <iostream>
#include <string>

using namespace std;

int main() {
    string current;
    int n;
    cin >> current >> n;

    for (int step = 1; step < n; ++step) {
        string next_str = "";
        int i = 0;
        
        while (i < current.length()) {
            int count = 0;
            char c = current[i];
            
            while (i < current.length() && current[i] == c) {
                count++;
                i++;
            }
            next_str += to_string(count) + c;
        }
        
        current = next_str;
    }

    cout << current << "\n";
    return 0;
}