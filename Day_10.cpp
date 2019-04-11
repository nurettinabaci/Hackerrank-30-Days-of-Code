#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int cnt = 0, max = 0;
    while (n)
    {
        if (n & 1)
        {
            if (++cnt > max)
                max = cnt;
        }
        else
            cnt = 0;
        n >>= 1;
    }
    
    cout << max << endl;
    return 0;
}
