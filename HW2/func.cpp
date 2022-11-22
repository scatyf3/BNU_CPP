#include<string.h>
#include<iostream>
#include<sstream>
using namespace std;

typedef struct Student
{    
    string department;       //系别
    char gender;             //性别: 男-‘m’,女-‘f’
    int num;                 //学号
    string name;             //姓名
} STUDENT;

STUDENT InputStudent(string name1="xxx",int num1=2017001,char g='m',string de="computer"){
    //TODO：系别的默认值是`"Computer"`, 性别的默认值是`m` ，学号的默认值是`2017001`，姓名的默认值是`"XXX"`.
    Student s;
    s.num=num1;
    s.department=de;
    s.name=name1;
    return s;
}

void ShowStudent(STUDENT s){
    cout<<s.department<<s.gender<<s.num<<s.name<<endl;
}

int main(){
    STUDENT stu[6];
    stu[0]=InputStudent("王伟");
    stu[1]=InputStudent("刘海华",2017012,'f',"Mathematics");
    stu[2]=InputStudent("赵天瑞",2017012);
    stu[3]=InputStudent("胡文明",2016085);
    stu[4]=InputStudent("于冬梅",2017009,'f');
    stu[5]=InputStudent("岳海山",2016007,'m',"Computer");
    for(int i=0;i<6;i++){
        ShowStudent(stu[i]);//但是似乎输出有问题 
    }
  
}