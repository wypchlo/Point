class Point
{
    public:
        double x, y; //I am unsure as to whether this should be public or not

        Point();
        Point(double _x, double _y);

        double GetX();
        double GetY();
        double Get();

        void SetX(double _x);
        void SetY(double _y);

        void Set(double _x, double _y);
};
