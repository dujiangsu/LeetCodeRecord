#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;




void solution(string& s1, string& s2){
    map<char, int> m;
    for(char c:s1){
        m[c] = 0;
    }

    for(char c:s2){
        if(m.count(c) != 0){
            m[c]++;
        }
    }
    string res;
    map<char, int>::iterator it;

    for(it = m.begin(); it!=m.end(); ++it){
        if(it->second > 0){
            res += it->first;
        }        
    }
    
}

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);

    solution(s1, s2);
}