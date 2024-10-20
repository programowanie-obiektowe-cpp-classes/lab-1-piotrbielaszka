class Wektor2D
{
private:
    double x;
    double y;

public:
    void   setX(double new_x) { x = new_x; }
    void   setY(double new_y) { y = new_y; }
    double getX() { return x; }
    double getY() { return y; }
    Wektor2D()
    {
        x = 0.;
        y = 0.;
    }
    Wektor2D(double new_x, double new_y)
    {
        x = new_x;
        y = new_y;
    }
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D{w1.getX() + w2.getX(), w1.getY() + w2.getY()};
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.getX() * w2.getX() + (w1.getY() * w2.getY());
}