class Shape
{
public:
	Shape(){}
	virtual ~Shape(){}
	void GetInfo()
    {
        cout<<"这是一个 ";  
		Show();
        cout << endl << "它的面积是";
		Area();
		cout << endl << "它的周长是"<<Perimeter()<<endl;
	}
    
	virtual void Show() =0;
	virtual double Area() = 0;
	virtual double Perimeter () = 0;
};
