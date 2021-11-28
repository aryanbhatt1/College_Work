#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<<"Enter X Coordinate :";
    cin>>x;
    cout<<"Enter Y Coordinate :";
    cin>>y;
    if (x>0 && y>0)
    {
        cout<<"First Quadrant";
    }
    if (x<0 && y>0)
    {
        cout<<"Second Quadrant";
    }
    if(x<0 && y<0)
    {
        cout<<"Third Quadrant";
    }
    if (x>0 && y<0)
    {
        cout<<"Fourth Quadrant";
    }
    return 0;
}
