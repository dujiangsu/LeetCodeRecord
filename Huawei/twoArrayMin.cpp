#include<iostream>
#include<vector>
#include<algorithm>
// #include<cstl>
using namespace std;

void solution(vector<int>& v_1, vector<int>& v_2, int k){
    vector<int> sums;
    for(int num_1 : v_1){
        for(int num_2 : v_2){
            sums.push_back(num_1 + num_2);
        }
    }
    sort(sums.begin(), sums.end());
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += sums[i];
    }
    cout<<sum<<endl;
}

int main(int argc, char** argv){
    vector<int> v_1 = {1,1,2};
    vector<int> v_2 = {1,2,3};
    int k = 2;
    solution(v_1, v_2, k);
}