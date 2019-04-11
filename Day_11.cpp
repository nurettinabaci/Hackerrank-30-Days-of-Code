#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    
    vector<int> sum;
    int h = 0;
    int a=0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a = arr[i][j] + arr[i][j+1] + arr[i][j+2]+ arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1]+ arr[i+2][j+2];
            sum.push_back(a);
            h++;
        }
    }
    std::sort(std::begin(sum), std::end(sum));
    cout<<sum.at(15);

    return 0;
}

