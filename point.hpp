#include<ostream>
#include<istream>
#include<cmath>

class Point
{
    private: 

        double* coordinates;
        double &x, &y;
        double length;

        inline void CalculateVectorLength(){ length = std::sqrt(x*x + y*y); };

    public:

        Point();
        Point(double _x, double _y);
        Point(Point& point);

        Point& operator=(Point &point);
        Point operator-(Point point);
        Point operator+(Point point);
        double operator*(Point point);
        friend std::ostream& operator<<(std::ostream& os, Point point);
        friend std::istream& operator>>(std::istream& is, Point& point);

        double GetX();
        double GetY();
        double* Get();

        void SetX(double _x);
        void SetY(double _y);
        void Set(double _x, double _y);

        ~Point();
};
