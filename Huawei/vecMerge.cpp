#include<iostream>
#include<vector>
using namespace std;


int main(){

    int fixedLen = 0;
    int vecNum = 0;
    cin>>fixedLen;
    cin>>vecNum;

    vector<string> vec;
    string line;

    for(int i=0; i<vecNum; ++i){
        cin>>line;        
        vec.push_back(line);
    }

    int sumlen=0;
	for (int i = 0; i < vec.size(); i++)
	{
        sumlen += vec[i].length();
	} 

    string res;
    int count = 0;
    int l = 0;
    while(sumlen){
        for(int i = 0; i<vec.size(); i++){
            l = 0;
            count = 0;
            
            for(int j = 0; j<vec[i].size();j++)
            {   
                l++;
                if(vec[i][j] == ','){
                    count++;
                }
                
                if(count == fixedLen){
                    break;
                }
            }

            if(count==fixedLen){
                res += vec[i].substr(0, l);
                vec[i].erase(0, l);
            }else{
                res += vec[i];
                res += ',';
                vec[i].erase();
            }
            
        }
        sumlen = 0;
        for (int i = 0; i < vec.size(); i++)
		{
		    sumlen += vec[i].size(); 
		}

    }

    cout << res << endl;
    
}