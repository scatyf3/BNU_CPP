

class Rectangle:public Shape{
    point p1;
    point p2;
    public:
    Rectangle(double x1,double y1,double x2,double y2){
        p1=point(x1,y1);
        p2=point(x2,y2);
    }
    virtual ~Rectangle(){}
    virtual void Show(){
        cout<<"矩形";
    }
    virtual double Area(){
        cout<<(p2.x-p1.x)*(p2.y-p1.y);
        return (p2.x-p1.x)*(p2.y-p1.y);
    }
    virtual double Perimeter (){
        //cout<<2*(p2.x-p1.x+p2.y-p1.y);
        return 2*(p2.x-p1.x+p2.y-p1.y);
    }
};