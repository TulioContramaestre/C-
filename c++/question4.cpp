#include <stdio.h>
#include <iostream>

class flying
{
    private:
        int flightNumber;
        char destination[100];
        float distance;
        float fuel;
        void CALFUEL()
        {
            if (distance <= 1000)
            {
                fuel = 500;
            }
            else if (1000 < distance <= 2000)
            {
                fuel = 1100;
            }
            else if (distance >= 2000)
            {
                fuel = 2200;
            }
        }
    public:
        void FEEDINFO()
        {
            std::cout<<"flightNumber: \n";
            std::cin>> flightNumber;
            std::cin.ignore();
            std::cout<<"destination: \n";
            std::cin.getline(destination, 100);
            std::cout<< "distance: \n";
            std::cin>>distance;


            CALFUEL();
        }
        void SHOWINFO()
        {
            std::cout<<"flightNumber: "<<flightNumber<<"\ndestination: "<<destination<<"\ndistance "<<distance<<"\nfuel: "<<fuel << "\n";
        }
};

int main()
{
    flying flight;
    flight.FEEDINFO();
    flight.SHOWINFO();

    return 0;
}

