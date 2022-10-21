#include <stdio.h>
#include <iostream>

class batsman
{
    private:
        int bcode;
        char bname[20];
        int innings, notOut, runs;
        float batAvg;
        float calcavg()
        {
            return batAvg = runs/ (innings - notOut);
        }
    public:
        void readData()
        {
            std::cout<<"bcode: \n";
            std::cin>>bcode;
            std::cout<<"bname: \n";
            std::cin>>bname;
            std::cout<<"Enter innings, notOut,runs \n";
            std::cin>>innings>>notOut>>runs;

            batAvg = calcavg();
        }
        void displayData()
        {
            std::cout<<"Bcode: "<<bcode<<"\nBname: "<<bname<<"\nInnings: "<<innings<<"\nnotOUt: "<<notOut<<"\nruns: "<<runs<<"\nBatAvg: "<<batAvg<< "\n";
        }
};

int main()
{
    batsman batter;
    batter.readData();
    batter.displayData();

    return 0;
}