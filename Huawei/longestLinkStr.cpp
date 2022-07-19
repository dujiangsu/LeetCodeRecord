#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;


int findNext(vector<string>& vec, char last){
    map<string, int> candidate;
    int maxlen = 0;
    for(int i = 0; i < vec.size(); i++){
        
        if(vec[i][0] == last){
            if(vec[i].size() > maxlen)
            {
                candidate.clear();
                candidate[vec[i]] = i;
                maxlen = vec[i].size();
            }else if(vec[i].size() == maxlen)
            {
                candidate[vec[i]] = i;
            }   
        }
    }



    if(candidate.size() == 0){
        return -1;
    }

    return candidate.begin()->second;
}

int main(){

    int pos = 0;
    int num = 6;
    string str;
    vector<string> vec_s;
    for(int i = 0; i < num; i++){
        getline(cin, str);
        vec_s.push_back(str);
    }
    
    vector<string> candidate;
    string sum;

    while(true){
        sum += vec_s[pos];
        vec_s.erase(vec_s.begin()+pos); // 返回的是删除元素的下一个
        char last = sum.back();        
        pos = findNext(vec_s, last);

        if(pos == -1){
            break;
        }
    }

    cout<<sum<<endl;
}