#include<ostream>
#include<istream>

class Point
{
    double* coordinates; //I am unsure as to whether this should be public or not
    double &x, &y;

    public:

        Point();
        Point(double _x, double _y);

        Point& operator=(Point &point);
        friend std::ostream& operator<<(std::ostream& os, Point& point);
        friend std::istream& operator>>(std::istream& is, Point& point);

        double GetX();
        double GetY();
        double* Get();

        void SetX(double _x);
        void SetY(double _y);
        void Set(double _x, double _y);

        ~Point();
};
