class Rectangle
{
    private :
        double mHeight;
        double mWidth;
    
    public : 
        Rectangle();
        Rectangle(double height, double width);

        double getHeight();
        double getWidth();
        double getArea();
        bool isSquare();
};
