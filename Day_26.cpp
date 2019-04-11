#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int eday, emon, eyear;
    int aday, amon, ayear;

    cin >> aday >> amon >> ayear;
    cin >> eday >> emon >> eyear;
    int dyear = ayear - eyear;
    int dmon = amon - emon;
    int dday = aday - eday;
    int fine=0;
    if (ayear>eyear) fine = 10000;
    else if(amon>emon && ayear==eyear) fine=500*dmon;
    else if(aday>eday && amon==emon && ayear==eyear) fine=15*dday;
    cout<<fine;

    return 0;
}
