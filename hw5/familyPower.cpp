#include<iostream>
#include<string>

using namespace std;

class FamliyElecPower
{
    int m_nID;              //用户编号，是从1开始的正整数，由程序自动生成
    string m_strFamliyName; //家庭名称，是一个string型字符串
    int m_array[12];        // 12个月的用电量 
    static int m_nCount;    //用来生成自动编号的计数器
public:
    FamliyElecPower(){
        m_nID=m_nCount;
        FamliyElecPower::m_nCount++;
        m_strFamliyName="李天所";
        for(int i=0;i<12;i++){
            m_array[i]=i;
        }
    }
    FamliyElecPower(int id, string name, int* array); // int* array 表示 整数型 
                                                      // 数组array[12]
    void Show(); // 输出这户人家的所有信息 
    friend double CalTotalEPower(FamliyElecPower f);
    friend double CalAveEPower(FamliyElecPower f);
    
};


int FamliyElecPower::m_nCount=1;

FamliyElecPower::FamliyElecPower(int id,string name,int *array){
    if(id>FamliyElecPower::m_nCount){
       m_nID=id;
    }
    else{
        m_nID=FamliyElecPower::m_nCount;
        FamliyElecPower::m_nCount++;
    }
    
    
    m_strFamliyName=name;
    for(int i=0;i<12;i++){
        m_array[i]=array[i];
    }
}


void FamliyElecPower::Show(){
    cout<<"用户用电信息是: 编号:"<<m_nID<<"名称:"<<m_strFamliyName<<endl;
    cout<<"12个月的用电量:";
    for(int i=0;i<12;i++){
        cout<<m_array[i];
        if(i==11){
            cout<<""<<endl;
        }
    }
    cout<<"年总电量:"<<CalTotalEPower(*this)<<" 月均电量:"<<CalAveEPower(*this)<<endl;

}


double CalTotalEPower(FamliyElecPower f){
    double sum=0;
    for(int i=0;i<12;i++){
        sum=sum+f.m_array[i];
    }
    return sum;
}

double CalAveEPower(FamliyElecPower f){
    return CalTotalEPower(f)/12.0;
}



int main(){
    cout<<"请输入用户名称："<<endl;
    string name;
    cin>>name;
    cout<<"请分别输入12个月的电量"<<endl;
    int ele_array[12];
    for(int i=0;i<12;i++){
        cin>>ele_array[i];
    }
    FamliyElecPower f=FamliyElecPower(1,name,ele_array);
    f.Show();

    system("pause");



}