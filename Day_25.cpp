#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime( int in_numb )
{
    if( in_numb == 0 || in_numb == 1 )
    {
        return false;
    }
    
    //  If a number is divisable by another number less or equal to the square root of the first number... it is NOT prime.
    int sq = sqrt( in_numb );
    for (int i = 2; i <= sq; i++)
    {
        //if divisible
        if (in_numb % i == 0)
        {
            return false;
        }
    }
    
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int no;
    cin>>no;
    vector<int> a(no);
    for(int i=0; i<no; ++i){ 
        cin>>a[i];
        if(isPrime(a[i])) cout<<"Prime\n";
        else cout<<"Not prime\n";
    }
    return 0;
}
