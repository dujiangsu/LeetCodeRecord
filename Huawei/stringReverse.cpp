#include<iostream>
#include<string>
#include <algorithm>  
using namespace std;

string solution(string& s, int count){
    int end = 0;
    int ws_count = 0;
    for(char i : s){
        if(i == ' '){
            ws_count++;
            if(ws_count == count){
                break;
            }            
        }
        end++;
    }
    cout<<end<<endl;
    reverse(s.begin()+end+1, s.end());
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return s;
}

// = "I am a developer."
int main(){
    string str;
    int count;
    getline(std::cin, str);
    cin>>count;
    
    solution(str, count);
}