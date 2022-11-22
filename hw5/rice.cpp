#include<string>
#include<iostream>




class Rice{
    double Weight;
    std::string Place;
    static int TotalWeight;
    
    public:
    Rice(double weight=0, std::string place="XXX"){
        Weight=weight;
        Place=place;
        TotalWeight=TotalWeight+weight;
        std::cout<<"通过普通构造函数初始化"<<std::endl;    
    }

    Rice(const Rice& obj){
        Place=obj.Place;
        Weight=obj.Weight;
        TotalWeight=TotalWeight+obj.Weight;    
        std::cout<<"通过拷贝构造函数初始化"<<std::endl;    
    }
    ~Rice(){
        TotalWeight=TotalWeight-Weight;
        std::cout<<"通过析构函数删除"<<std::endl;    
    }

    static double GetTotal(){
        return TotalWeight;
    }

};

int Rice::TotalWeight=0;

int main(){
    Rice r1=Rice();
    std::cout<<Rice::GetTotal()<<std::endl;
    Rice r2=Rice(114514,"下北泽");
    std::cout<<Rice::GetTotal()<<std::endl;
    Rice r3=Rice(r2);
    std::cout<<Rice::GetTotal()<<std::endl;

    system("pause");

}