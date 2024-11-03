#include<iostream>
using namespace std;
class Point{
    //data members
    private:
        int x,y;

    //member function
    public:
        Point(){
            this->x=this->y=0;
        }//constructor
        Point(int xx,int yy){
            this->x=xx;
            this->y=yy;
        } //parametrize constructor
        ~Point(){
            //clean up code to called before object is removed from memory
        }
        //getter and setter
        void setx(int xx){
            this->x=xx;
        }
        int getx(){
            return this->x;
        }
        void sety(int yy){
            this->y=yy;
        }
        int gety(){
            return this->y;
        }
};

int main(){
    Point startPoint;
    Point endPoint(45,56);
    cout << startPoint.getx() << ","<<startPoint.gety() <<"\n";
    cout << endPoint.getx()<< ","<<endPoint.gety() <<"\n";
    
    Point * ptrPoint = new Point(100,200);
    cout << ptrPoint->getx() << "," <<ptrPoint->gety()<<"\n";
    return 0;
}