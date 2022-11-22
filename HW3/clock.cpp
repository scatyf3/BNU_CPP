#include<iostream>
#include<string>

using namespace std;

class Clock
{ 
private:
    int m_Hour, m_Minute, m_Second;
    string standerize(int myTime){
        string myoutput="";
        if (myTime<10){
            myoutput="0"+to_string(myTime);
        }
        else{
            myoutput=to_string(myTime);
        }
        return myoutput;
    }
public:
    void SetTime (int hour, int minute, int second){
        m_Hour=hour;
        m_Minute=minute;
        m_Second=second;
    }
    void ShowTime(){
        cout<<"时间是"<<standerize(m_Hour)<<":"<<standerize(m_Minute)<<":"<<standerize(m_Second)<<endl;
    }        
    int GetHour();            
    int GetMinute();            
    int GetSecond();      
};           


int main(){
    Clock c=Clock();
    char ifcontinue;
    int hour,minute,second;
    int testTime=0;
    do{
        if(testTime<2){
        cout<<"请输入时间（时 分 秒）："<<endl;
        cin>>hour>>minute>>second;
        c.SetTime(hour,minute,second);
        c.ShowTime();}
        cout<<"还要继续测试吗（Y/N）？"<<endl;
        cin>>ifcontinue;
        if(ifcontinue=='N'){
            cout<<"程序结束了，再见！"<<endl;
        }
        testTime++;
    }
    while(ifcontinue=='Y');
    system("pause");
}