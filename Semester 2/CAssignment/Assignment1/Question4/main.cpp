#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x,y,x1,y1;
    cout<<"Enter X and Y";
    cin>>x>>y;
    cout<<"Enter X1 and Y1";
    cin>>x1>>y1;
    double X=x1-x;
    double Y=y1-y;

    double diameter=pow((pow(X,2)-pow(Y,2)),1/2);
    double area=3.14*pow((diameter/2),2);
    cout<<"The area of circle of diameter "<<diameter<<"is "<<area<<endl;
    return 0;
}
