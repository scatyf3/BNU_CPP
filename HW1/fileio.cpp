#include<iostream>
#include <fstream>
#include<string>
#include<vector>
using namespace std;

const int NUM_LINES=5;

int main(){
    struct lines
    {
        int size;
        vector<string> s; //如何创造一个string数组——vector
    };
    
    ifstream aFile("name.txt");
    ofstream out("out.txt");
    for(int i=0;i<NUM_LINES;i++){
        lines line;
        aFile>>line.size;
        for(int j=0;j<line.size;j++){
            string tmp;
            aFile>>tmp;
            line.s.push_back(tmp);
        }
        /*
        line.size=buffer[0]-'0';//char to int
        int tmp=2;
        for(int i=0;i<line.size;i++){
            int pretmp=tmp;
            while(1){
                if (buffer[tmp]==' '){
                    break;
                }
                tmp++;
            }
            line.s.push_back(buffer.substr(pretmp,tmp-1));//一个是string，一个是char?
        }
        */
        //TODO:从小到大排序
        
        for(int j=0;j<line.size;j++){
            int r=1;
            int l=0;
            for(int i=0;i<line.size-1;i++){
                if(line.s[r]<line.s[l]){
                    string tmp=line.s[r];
                    line.s[r]=line.s[l];
                    line.s[l]=tmp;
                    cout<<"交换"<<line.s[l]<<"与"<<line.s[r]<<"的位置"<<endl;
                }
                r++;
                l++;
            }
        }
        string buffer="";
        for(int i=0;i<line.s.size();i++){
            buffer=buffer+line.s[i]+" ";
        }
        out<<line.size<<" "<<buffer<<endl;
    }
   
    
} 

