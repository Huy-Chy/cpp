#include<iostream>
using namespace std;
class Rectangle{
    private :
        double width,hight;
    public :
        void setDimensions(double w, double h){
            w=width;
            h=hight;
        }
        double getArea() const {
            return width*hight;
        }
        double getPerimeter() const {
            return (2*(width+hight));
        }

};
int main(){
    Rectangle r1,r2;
    int a,b;
    int c,d;

    cout << "Rectangle 1:" << endl;
    cout<<"Enter width of R1 : "; cin>>a;
    cout<<"Enter hight of R1 : "; cin>>b;
    r1.setDimensions(a,b);
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    cout<<"Enter width of R2 : "; cin>>c;
    cout<<"Enter hight of R2 : "; cin>>d;
    r2.setDimensions(c, d);
    cout << "Area: " << r2.getArea() << endl;
    cout << "Perimeter: " << r2.getPerimeter() << endl;


}