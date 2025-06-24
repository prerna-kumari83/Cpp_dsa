#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countConsecutive(string s) {
    int i = 0;
    char n = s[0];
    int count = 0;
    while (i < s.length()) {
        if (n == s[i]) {
            count++;
        } else {
            break;
        }
        i++;
    }
    return count;
}

int main() {
    string s = "aaaaaabbbbcccddeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    vector<string> v;
    while (!s.empty()) {
        v.push_back(string(1, s[0]));
        int cnt = countConsecutive(s);
        v.push_back(to_string(cnt));
        s.erase(0, cnt);
    }
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    return 0;
}
