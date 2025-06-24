#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> num, vector<vector<int>> &ans, vector<int> output, int index)
{
    if (index >= num.size())
    {
        ans.push_back(output);
        return;
    }

    // ex
    solve(num, ans, output, index + 1);
    // in
    int element = num[index];
    output.push_back(element);
    solve(num, ans, output, index + 1);
}

void print(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> num{1, 2, 3};

    vector<int> output;
    vector<vector<int>> ans;
    cout << "{";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << ",";
    }
    cout << "}" << endl;
    int index = 0;
    solve(num, ans, output, index);
    print(ans);
}

// Level 0 : index = 0 → num[0] = 1
// → Exclude 1 Level 1 : index = 1 → num[1] = 2
//     → Exclude 2 Level 2 : index = 2 → num[2] = 3
//         → Exclude 3 index = 3 → push output : []
//         → Include 3 index = 3 → push output : [3]
//     → Include 2 Level 2 : output = [2]
//         → Exclude 3 index = 3 → push : [2]
//         → Include 3 index = 3 → push : [ 2, 3 ]

// → Include 1 Level 1 : output = [1]
//     → Exclude 2 Level 2 : output = [1]
//         → Exclude 3 index = 3 → push : [1]
//         → Include 3 index = 3 → push : [ 1, 3 ]
//     → Include 2 Level 2 : output = [ 1, 2 ]
//         → Exclude 3 index = 3 → push : [ 1, 2 ]
//         → Include 3 index = 3 → push : [ 1, 2, 3 ]