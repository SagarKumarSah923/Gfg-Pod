#include <iostream>
using namespace std;

class Solution {
public:
    char nthCharacter(string s, int r, int n) {
        string temp = "";
        while (r--) {
            for (auto x : s) {
                if (x == '1')
                    temp += "10";
                else
                    temp += "01";
                if (temp.length() > n)
                    break;
            }
            s = temp;
            temp = "";
        }
        return s[n];
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N; // Fix: Corrected the typo "NL" to "N"
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}

