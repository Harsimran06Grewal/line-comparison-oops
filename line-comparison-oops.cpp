#include <iostream>
#include <cmath>

using namespace std;

class Point{
public:
    int x;
    int y;
};

class Line{
public: 
    Point *p1;
    Point *p2;
    float length;

    float calculateLength(){
        length = round(sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2)));
        return length;
    }

    bool operator==(Line& other){
        return this->length == other.length;
    }
    bool operator>(Line& other){
        return this->length > other.length;
    }
};

int main(){
    cout << "Welcome to OOPS" << endl;

    Line* l1 = new Line();
    Point* p1 = new Point();
    Point* p2 = new Point();
    l1->p1 = p1;
    l1->p2 = p2;

    l1->p1->x = 10;
    l1->p1->y = 20;
    l1->p2->x = 30;
    l1->p2->y = 40;

    Line* l2 = new Line();
    Point* p3 = new Point(); 
    Point* p4 = new Point();
    l2->p1 = p3;
    l2->p2 = p4;

    l2->p1->x = 5;
    l2->p1->y = 10;
    l2->p2->x = 20;
    l2->p2->y = 30;

    float length1 = l1->calculateLength();
    float length2 = l2->calculateLength();

    cout << "length of l1 is : " << length1 << endl;
    cout << "length of l2 is : " << length2 << endl;

    if(length1 == length2){
        cout << "both l1 and l2 length is equal";
    }
    else if(length1 > length2){
        cout << "l1 is greater than l2";
    }
    else{
       cout << "l2 is greater than l1"; 
    }

    return 0;
}