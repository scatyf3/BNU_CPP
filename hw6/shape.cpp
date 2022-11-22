#include<iostream>
#include<math.h>
using namespace std;

class Shape{
    int x;
    int y;

    protected:
    int getX(){return x;}
    int getY(){return y;}

    public:
    Shape(){
        x=0;
        y=0;
    }
    Shape(const Shape& s){
        x=s.x;
        y=s.y;
    }
    ~Shape(){}


    void move(int xOff,int yOff){
        x=x+xOff;
        y=y+yOff;
    }
     
    void set(int xx,int yy){
        x=xx;
        y=yy;
    }
    void display(){
        cout<<"Shape("<<x<<","<<y<<")"<<endl;
    }
};

class Rectangle:public Shape{
    int w;
    int h;

    public:
    Rectangle(){
        w=0;
        h=0;
        
    }
    Rectangle(const Rectangle& r):Shape(r){
        w=r.w;
        h=r.h;

    }
    ~Rectangle(){}

    Rectangle(int xx,int yy,int ww, int hh){
        w=ww;
        h=hh;
    }

    void Set(int xx,int yy,int ww,int hh){
        w=ww;
        h=hh;
    }

    float Area(){
        return w*h;
    }

    float Circum(){
        return 2*w+2*h;
    }

    void Display(){
        cout<<"Rectangle(("<<getX()<<","<<getY()<<"),"<<w<<","<<h<<")"<<endl;
    }
};

class Circle:public Shape{
    int r;

    public:
    Circle(){
        r=0;
        set(0,0);
    }
    Circle(int xx,int yy,int rr){
        set(xx,yy);
        r=rr;
    }
    Circle(const Circle& c):Shape(c){
        r=c.r;
    }
    ~Circle(){}

    float Area(){
        return M_PI*r*r;
    }

    float Circum(){
        return 2*M_PI*r;
    }

    void Display(){
        cout<<"Circle(("<<getX()<<","<<getY()<<"),"<<r<<")"<<endl;
    }
};

int main(){
    //test Rectangle
    Rectangle R1=Rectangle(2,2,3,4);
    R1.Display();
    R1.move(3,4);
    R1.Display();

    //test Circle
    Circle C1=Circle(1,2,3);
    C1.Display();
    Circle C2=Circle(C1);
    C2.move(3,4);
    C2.Display();
    Circle Cs[3] ;
    Cs[0]=Circle(0,0,1);
    Cs[1]=Circle(1,1,2);
    Cs[2]=Circle(5,5,5);
    for(int i=0;i<3;i++){
        Cs[i].Display();
    }

    system("pause");
}