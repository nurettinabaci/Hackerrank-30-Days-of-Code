#include <bits/stdc++.h>

using namespace std;
void bubbleSort(vector<int>& a)
{   
    int countt=0;
      bool swapp = true;
      while(swapp){
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                countt++;
                swapp = true;
            }
        }
    }

    printf("Array is sorted in %d swaps.\n",countt);
    printf("First Element: %d\n",a.front());
    printf("Last Element: %d\n",a.back());
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    // Write Your Code Here

   bubbleSort(a);
    return 0;
}

