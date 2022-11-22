#include<iostream>
#include <fstream>
#include<string>
#include<vector>
using namespace std;

string cypher(string key,string str){
    int length=key.size();
    for(int i=0;i<str.size();i++){
        str[i]=str[i]^key[i%length];
    }
    return str;
}

int main(){
    //先读取文件
    ifstream school("school.txt");
    vector<string> s;
    string buffer="";
    string tmp;
    while(tmp!="[end]"){
        school>>tmp;
        s.push_back(tmp);//疑似在这里死循环了，，，
    }
    for(int i=0;i<s.size();i++){
        buffer=buffer+s[i];
    }
    school.close();
    //再加密
    string key="ilikecplusplus";
    buffer=cypher(key,buffer);
    //输入文件
    ofstream bnu("mi.txt");
    bnu<<buffer;
}

