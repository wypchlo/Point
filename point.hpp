class Point
{
    float x, y; //I am unsure as to whether this should be public or not

    public: 
        Point();
        Point(float _x, float _y);

        float GetX();
        float GetY();

        void SetX(float _x);
        void SetY(float _y);

        void Set(float _x, float _y);
};
