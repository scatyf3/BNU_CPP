#include<iostream>

class CMoney{
    int yuan;
    int jiao;
    int fen;

    public:

    Setvalue(int y,int j,int f){
        yuan=y;
        jiao=j;
        fen=f;

    }
    CMoney(){
        Setvalue(0,0,0);
    }
    CMoney(int y,int j,int f){
        if(f>=10){
            int tmp=f%10;
            f=f-tmp;
            j=j+tmp;
        }
        if(j>=10){
            int tmp=j%10;
            j=j=tmp;
            y=y+tmp;
        }
        Setvalue(y,j,f);
    }

    ~CMoney(){
        std::cout<<"析构函数被调用"<<std::endl;
    }

    CMoney(CMoney &obj){
        std::cout<<"拷贝构造函数被调用"<<std::endl;
        Setvalue(obj.yuan,obj.fen,obj.jiao);
    }
};

int main(){
    CMoney m=CMoney();
    CMoney* pm=new CMoney(1,15,20);
    CMoney money[10];
}