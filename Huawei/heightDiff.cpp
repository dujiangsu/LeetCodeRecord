#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int height = 0;

bool function(int a, int b){
    return (abs(a-height) > abs(b-height));
}


int main(){
    vector<int> heights = {95, 96, 97, 98, 99, 101, 102, 103, 104, 105};
    int h = 100;
    height = h;

    sort(heights.begin(), heights.end(), function);

    for(int i : heights){
        cout<<i<<endl;
    }
}