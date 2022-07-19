#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1,2,34,5,6,7,876,2,35};

    vector<int>::iterator max = max_element(vec.begin(), vec.end());
    vector<int>::iterator min = min_element(vec.begin(), vec.end());

    cout<<*max<<'\t'<<*min<<'\t'<<endl;

    int a = 0x24;
    cout<<a<<endl;
}
