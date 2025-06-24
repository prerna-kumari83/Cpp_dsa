#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string digit, vector<string> &ans, string output, int index, string mapping[])
{
    if (digit.length() == 0)
    {
        return;
    }
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, ans, output, index + 1, mapping);
        output.pop_back();
    }
}

int main()
{

    string digit = "";
    vector<string> ans;

    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;

    solve(digit, ans, output, index, mapping);

    if (ans.size() == 0)
    {
        cout << "{ ";
        return 0;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}