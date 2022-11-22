#include<iostream>


class Number{
    float n1;
    float n2;
    //刚开始以为是整数部分和小数部分，，，

    public:
    
    Number(float a=0.0,float b=0.0){
        n1=a;
        n2=b;
    }


    double add(){
        return n1+n2;
    }

    double sub(){
        return n1-n2;
    }

    double mul(){
        return n1*n2;
    }

    double div(){
        if(n2==0){
            throw "division 0 error";
        }
        else{
            return n1/n2;
        }
    }

};


int main(){
    int a;
    int b;
    int cont=0;
    char ans;
    while(cont==0){
        std::cin>>a>>b;
        Number n=Number(a,b);
        std::cout<<n.add()<<" "<<n.sub()<< " "<<n.mul()<<" "<<n.div()<<std::endl;
        std::cout<<"Continue？（Y/N）:”时输入'N'或'n'"<<std::endl;
        std::cin>>ans;
        if(ans=='N' || ans=='n'){
            cont==1;
        }
    }
    

}