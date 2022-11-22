#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Teacher;

class Student{
    string name;
    int credit;
    int totalScore;
    friend class Teacher;
    void init(string name1,int credit1,int totalScore1){
        name=name1;
        credit=credit1;
        totalScore=totalScore1;
    }

    

    public:

    

    Student(){
        init("李华",0,0);
    }

    Student(string name1,int credit1,int totalScore1){
        init(name1,credit1,totalScore1);
    }

    void show(){
        cout<<name<<credit<<totalScore<<endl;
    }

    string getName(){
        return name;
    }

};


class Teacher{
    string name;
    public:

    Teacher(){
        name="unknown";
    }

    Teacher(string tmpname){
        tmpname=name;
    }

    void addCredit(Student s,int credit){
        s.credit=s.credit+credit;
        cout<<"教师"<<name<<"给"<<s.name<<"增加学分，操作成功"<<endl;
    }

    void addScore(Student s,int score){
        s.totalScore=s.totalScore+score;
        cout<<"教师"<<name<<"给"<<s.name<<"增加总成绩，操作成功"<<endl;
    }

    string getName(){
        return name;
    }
};



int main(){
    int M,N;
    cout<<"您需要建立几位学生(M)和几位教师(N):"<<endl;
    cin>>M;
    cin>>N;

    vector<Teacher> t={};
    vector<Student> s={};

    cout<<"请输入"<<M<<"位学生的姓名"<<endl;
    for(int i=0;i<M;i++){
        string tmp;
        cin>>tmp;
        s.push_back(Student(tmp,0,0));
    }


    cout<<"请输入"<<N<<"位老师的姓名"<<endl;
    for(int i=0;i<N;i++){
        string tmp;
        cin>>tmp;
        t.push_back(Teacher(tmp));
    }

    char c='Y';
    while(c='Y'){
        cout<<"请选择一位老师"<<endl;
        string select1;
        cin>>select1;
        Teacher selectT;
        for(int i=0;i<M;i++){
            if(t[i].getName()==select1){
                selectT=t[i];
            }
        }
        cout<<"请选择一位学生"<<endl;
        string select2;
        cin>>select2;
        Student selectS;
        for(int i=0;i<M;i++){
            if(s[i].getName()==select2){
                selectS=s[i];
            }
        }

        cout<<"请输入要增加的学分:"<<endl;
        int credit;
        cin>>credit;
        selectT.addCredit(selectS,credit);

        cout<<"请输入要增加的总成绩"<<endl;
        int score;
        cin>>score;
        selectT.addScore(selectS,score);

        cout<<"还要继续吗?(Y/N)"<<endl;
        cin>>c;

        for(int i=0;i<M;i++){
            s[i].show();
        }

    }
    
    system("pause");
    
}