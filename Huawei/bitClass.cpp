#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int bitSum(int num){
    int sum = 0;
    // for(int i = 0; i<4; i++){
    //     sum += (num >> 2*i);
    // }
    int a = num & 0x000000ff ;
    int b = (num>> 8) & 0x000000ff  ;
    int c = (num >> 16) & 0x000000ff ;
    int d =  (num >> 24) & 0x000000ff;
    sum = a + b + c + d;
    // cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\t';
    // cout<< sum << endl;

    // cout<< int(num & 0x00000011) <<endl;
    // cout<< (int(num & 0x00001100) >> 2) <<endl;
    // cout<< (int(num & 0x00110000) >> 4) <<endl;
    // cout<< (int(num & 0x11000000) >> 6) <<endl;
    return sum;
}

void solutin(vector<int>& vec){
    int s = vec[0];
    int m = vec[1];

    map<int, int> mm;

    vector<int>::iterator it;
    int max = 0;

    for(it = vec.begin()+2; it != vec.end(); ++it){
        int res = bitSum(*it);

        // cout<<res<<'\t';

        res = res % m;

        // cout<<res<<'\t';
        if(res < s){
            if(mm.find(res) != mm.end())
            {
                mm[res]++;
                if(mm[res] > max){
                    max = mm[res];
                }
            }
            else{
                mm[res] = 1;
                if(mm[res] > max){
                    max = mm[res];
                }
            }
        }
        
    }
    cout<<max<<endl;
}


int main(){
    vector<int> v;
    
    int input = 0;

    while(cin >> input){
        v.push_back(input);
        if(cin.get() == '\n'){
            break;
        }        
    }
    solutin(v);
}