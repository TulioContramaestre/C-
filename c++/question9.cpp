#include<iostream>
#include<stdio.h>

class Distance
{
    private:
        int feet;
        float inches;
    public:
        void set(int n, float m)
        {
            feet = n;
            inches = m;
        }
        void disp()
        {
            std::cout<<"Feet: "<<feet<<" Inches: "<<inches<<"\n";
        }
        Distance add(Distance temp)
        {
            Distance output;
            
            output.inches = inches + temp.inches;
            output.feet = 0;
            
            while (output.inches > 12)
            {
                if (output.inches > 12)
                {
                    output.feet += 1;
                    output.inches -= 12;
                }

            }

            output.feet = output.feet + (feet + temp.feet);

            return output;
        }

};

int main()
{
    Distance distance1;
    Distance distance2;
    Distance distance3;

    distance1.set(5,10);
    distance2.set(4,11.3);

    distance3 = distance1.add(distance2);

    std::cout<<"distance1: ";
    distance1.disp();
    std::cout<<"distance2: ";
    distance2.disp();
    std::cout<<"distance3: ";
    distance3.disp();
}