#include<math.h>
#include <iostream>

#define PI acos(-1)
//在cpp中使用Π的库是这个

using namespace std;

class Circle{
    float m_r;

    public:
        Circle(){
            setR(10);
        }

        Circle(float r){
            setR(r);
        }

        void setR(float r){
            m_r=r;
        }

        float Circum(){
            return 2*PI*m_r;
        }

        float Area(){
            return PI*m_r*m_r;
        }

        void Show(){
            cout<<"半径是"<<m_r<<endl;
            cout<<"周长为"<<this->Circum()<<endl;
            cout<<"面积为"<<this->Area()<<endl;
        }

};

int main (){
    Circle* c1=new Circle();
    Circle* c2=new Circle(15);
    c1->Show();
    c2->Show();
    system("pause");
}