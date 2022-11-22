class Circle:public Shape{
    point center;
    double r;
    public:
    Circle(double xx,double yy,double rr){
        center=point(xx,yy);
        r=rr;
    }
    virtual ~Circle(){}
    virtual void Show(){
        cout<<"圆形";
    }
    virtual double Area(){
        cout<<M_PI*r*r;
        return M_PI*r*r;
    }
    virtual double Perimeter (){
        //cout<<M_PI*2*r;
        return M_PI*2*r;
    }
};