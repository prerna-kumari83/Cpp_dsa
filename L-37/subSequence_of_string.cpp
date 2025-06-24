#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(string str, vector<string> &ans, string output, int index)
{
    if (index >= str.length())
    {

        ans.push_back(output);
        return;
    }

    // ex
    solve(str, ans, output, index + 1);
    // in

    char el = str[index];
    output = output + el;
    solve(str, ans, output, index + 1);
}

int main()
{
    string str = {"abc"};
    vector<string> ans;
    int index = 0;
    string output = "";
    for (char ch : str)
    {
        cout << ch << "  ";
    }
    cout << endl;
    solve(str, ans, output, index);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
        ;
    }
    cout << endl;
}