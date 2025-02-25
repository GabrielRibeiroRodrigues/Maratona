#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    
    cin >> n;
    cin >> s;
    
    int count_a = 0;
    int i = 0;
    
    while (i < n) {
        if (s[i] == 'a') {
            int start = i;
            while (i < n && s[i] == 'a') {
                i++;
            }
            int length = i - start;
            if (length >= 2) {
                count_a += length;
            }
        } else {
            i++;
        }
    }
    
    cout << count_a << endl;
    
    return 0;
}