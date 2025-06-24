#include <iostream>
#include <string>
#include <vector>
using namespace std;

int rev(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

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
    string s = "aaaaaapccddeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    vector<string> v;
    while (s.length() != 0) {
        int cnt = countConsecutive(s);
        v.push_back(string(1, s[0]));
        
        if (cnt == 1) {
            s.erase(0, 1);  // Remove the character and continue
            continue;
        }
        
        if (cnt >= 10) {
            int n = rev(cnt);
            while (n != 0) {
                int a = n % 10;
                v.push_back(to_string(a));
                n = n / 10;
            }
        } else {
            v.push_back(to_string(cnt));
        }
        
        s.erase(0, cnt); // Remove the counted characters from the string
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
