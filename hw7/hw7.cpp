#include <iostream>
#include "math.h"
#include<vector>
using namespace std;
#include"Shape.hpp"
#include"point.hpp"
#include"circle.hpp"
#include"rec.hpp"
#include"tri.hpp"



int getNumber(){
    cout<<"你打算建立几个形状："<<endl;
    int number;
    cin>>number;
    return number;
}

Shape* constructShape(){
    //写三个分支，分别建立
    
    char type;
    cin>>type;
    switch (type)
    {
    case 'C':{
        double xx,yy,rr;
        cout<<"请输入圆心的坐标和半径：";
        cin>>xx>>yy>>rr;
        Shape* c=new Circle(xx,yy,rr);
        cout<<endl<<"圆已经建立。"<<endl;
        return c;
        break;

    }
    case 'R':{
        double x1,x2,y1,y2;
        cout<<"请输入矩形对角的两个顶点的坐标：";
        cin>>x1>>y1>>x2>>y2;
        Shape* r=new Rectangle(x1,y1,x2,y2);
        cout<<endl<<"矩形已经建立。"<<endl;
        return r;
        break;
    }
    case 'T':{
        double x1,x2,x3,y1,y2,y3;
        cout<<"请输入三角形三个顶点的坐标：";
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        Shape* t=new Triangle(x1,y1,x2,y2,x3,y3);
        cout<<endl<<"三角形已经建立"<<endl;
        return t;
        break;
    }
    }
}
    


int main (){
    int number=getNumber();
    vector<Shape*> buffer=vector<Shape*>();

    for(int i=0;i<number;i++){
        cout<<"请输入形状"<<i+1<<"（C--圆、R--矩形、T--三角形）："<<endl;
        Shape* cur=constructShape();
        buffer.push_back(cur);
    }
    for(int i=0;i<number;i++){
        buffer[i]->GetInfo();
    }
    system("pause");
}