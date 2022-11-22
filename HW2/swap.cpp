#include<sstream>
#include <iostream>
using namespace std;

void swap(int* a,int* b);
void swap(double* a,double* b);
void swap(string* a,string* b);

int main (){
    int ia=114;
    int ib=514;
    double da=11.4;
    double db=51.4;
    string a="114";
    string b="514";
    cout<<ia<<ib<<da<<db<<a<<b<<endl;
    swap(ia,ib);
    swap(da,db);
    swap(a,b);
    cout<<ia<<ib<<da<<db<<a<<b<<endl;
}

void swap(int* a,int* b){//int* a和int *a的区别？ 
    int tmp;
    tmp=*a;
    *b=tmp;
    *a=tmp;
}

void swap(double* a,double* b){
    double tmp;
    tmp=*a;
    *b=tmp;
    *a=tmp;
}

void swap(string* a,string* b){
    string tmp;
    tmp=*a;
    *b=tmp;
    *a=tmp;
}