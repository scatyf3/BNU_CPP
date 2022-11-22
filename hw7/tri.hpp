class Triangle:public Shape{
    point p1;
    point p2;
    point p3;
    public:
        Triangle(double x1,double y1,double x2,double y2,double x3,double y3){
            p1=point(x1,y1);
            p2=point(x2,y2);
            p3=point(x3,y3);
        }
        ~Triangle(){}
        virtual void Show(){
            cout<<"三角形";
        }
        virtual double Area(){
            /*       |  x1 y1 1|
            面积=det |  x2 y2 1 |=(x2y3-y2x3)-(x1y3-x3y1)+(x1y2-y1x2)
                     |  x3 y3 1|
            */ 
            double ans=abs(((p2.x*p3.y-p2.y*p3.x)-(p1.x*p3.y-p3.x*p1.y)+(p1.x*p2.y-p1.y*p2.x))/2);
            cout<<ans;
            return ans;
        }
        virtual double Perimeter (){
            double ans=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y))+sqrt((p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y))+sqrt((p2.y-p3.y)*(p2.y-p3.y)+(p2.x-p3.x)*(p2.x-p3.x));
            //cout<<ans;
            return ans;
        }
    };