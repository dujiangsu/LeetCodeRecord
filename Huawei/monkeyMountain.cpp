#include<iostream>
#include<stdio.h>
using namespace std;


int mountainMonkey(const int m){
    int n[m+1] = {0, 1, 1, 2};

    for (int i = 4; i< 51; i++){
        if(i>=4){
            n[i] = n[i-3] + n[i-1];
            cout<<i<<"\t"<<n[i]<<endl;
        }
    }
    return n[m];
}


int main()
{
    int m = 50;
    int times = mountainMonkey(m);
    cout<<times<<endl;
}