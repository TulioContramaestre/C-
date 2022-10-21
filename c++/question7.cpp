#include<iostream>
#include<stdio.h>

class Rectangle
{
    private:
        float length;
        float width;
    public:
        void setlength(float N)
        {
            length = N;
        }
        void setwidth(float N)
        {
            width = N;
        }
        float perimeter()
        {
            return ((length * 2) + (width * 2));
        }
        float area()
        {
            return length * width;
        }
        void show()
        {
            std::cout<<"length: " << length << " width: " << width;
        }
        int sameArea(Rectangle temp)
        {
            if (temp.area() == area())
            {
                return 1;
            }
            return 0;
        }
};

int main()
{
    Rectangle first;
    Rectangle second;

    first.setlength(5);
    first.setwidth(2.5);
    second.setlength(5);
    second.setwidth(18.9);

    std::cout<<"First rectangle: " << "\n\t";
    first.show();
    std::cout<<"\n\tArea: "<< first.area() << "\n";
    std::cout<<"\tPerimeter: "<<first.perimeter()<<"\n";

    std::cout<<"Second rectangle: " << "\n\t";
    second.show();
    std::cout<<"\n\tArea: "<< second.area() << "\n";
    std::cout<<"\tPerimeter: "<<second.perimeter()<<"\n";

    if (first.sameArea(second) == 1)
    {
        std::cout<<"rectangles had the same area\n\n";
    }
    else
    {
        std::cout<<"areas are not the same\n\n";
    }

    first.setlength(15);
    first.setwidth(6.3);

    std::cout<<"First rectangle: " << "\n\t";
    first.show();
    std::cout<<"\n\tArea: "<< first.area() << "\n";
    std::cout<<"\tPerimeter: "<<first.perimeter()<<"\n";

    std::cout<<"Second rectangle: " << "\n\t";
    second.show();
    std::cout<<"\n\tArea: "<< second.area() << "\n";
    std::cout<<"\tPerimeter: "<<second.perimeter()<<"\n";

    if (first.sameArea(second) == 1)
    {
        std::cout<<"rectangles have the same area\n";
    }
    else
    {
        std::cout<<"areas are not the same\n";
    }

    return 0;
}