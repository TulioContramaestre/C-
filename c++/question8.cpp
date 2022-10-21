#include<iostream>
#include<stdio.h>

class complex
{
    private:
        float n;
        float m;
    public:
        void set(float temp1, float temp2)
        {
            n = temp1;
            m = temp2;
        }
        void disp()
        {
            std::cout<<n<<" + "<<m<<"i"<<"\n";
        }
        complex sum(complex second)
        {
            complex temp;
            temp.n = n + second.n;
            temp.m = m + second.m;

            return temp; 
        }
};

int main()
{
    complex complex1;
    complex complex2;
    complex complex3;

    complex1.set(2, 4);
    complex2.set(5, 8);

    complex3 = complex1.sum(complex2);

    std::cout<<"complex1: ";
    complex1.disp();
    std::cout<<"complex2: ";
    complex2.disp();
    std::cout<<"complex3: ";
    complex3.disp();
}