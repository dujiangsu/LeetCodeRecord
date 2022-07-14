#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int executionTime(vector<int>& vec, int ability){
    int stk = 0;
    int sec = 0;
    for(int task: vec){
        stk += task;
        if(stk - ability > 0){
            stk -= ability;
        }else{
            stk = 0;
        }
        sec += 1;
    }

    while(1){
        if(stk - ability > 0){
            stk -= ability;
            sec += 1;
        }else{
            sec += 1;
            break;
        }
        
    }
    return sec;
}

int main(){
    vector<int> vec = {1,2,3,4,5};
    int ability = 3;
    int time = executionTime(vec, ability);
    cout<<time<<endl;
}