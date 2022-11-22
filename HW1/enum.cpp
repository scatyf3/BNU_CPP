#include<iostream>
using namespace std;
//红、黄、蓝、白、黑
enum colors {red,yello,blue,white,black};
int main(){
    colors color_one;
    colors color_two;
    colors color_three;
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            for(int k=0;k<=4;k++){
                if(i<j&&j<k){
                    color_one=(colors)i;
                    color_two=(colors)j;
                    color_three=(colors)k;
                    cout<<color_one<<color_two<<color_three<<endl;
                }
            }
        }
    }
}