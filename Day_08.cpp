#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    string name;
    int num;
    cin>>n; cin.ignore();
    map<string, int> defter;
    for(int i=0; i<n; ++i){
        cin>>name; 
        cin>>num;
        defter.insert(pair<string,int>(name,num));
    }

    while(cin>>name){
        if(defter.find(name)!=defter.end())
            cout<<name<<"="<<defter.find(name)->second<<endl;
        else cout<<"Not found" << endl; 
    }




    return 0;
}

