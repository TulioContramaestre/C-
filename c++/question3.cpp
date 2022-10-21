#include <stdio.h>
#include <iostream>

class TEST
{
    private:
        int testCode;
        char description[100];
        int noCandidate;
        int centerReqD;
        int CALCNTR()
        {
            return (noCandidate / 100 + 1);
        }
    public:
        void SCHEDULE()
        {
            std::cout<<"testcode: \n";
            std::cin>> testCode;
            std::cin.ignore();
            std::cout<<"description: \n";
            std::cin.getline(description, 100);
            std::cout<< "noCondidates: \n";
            std::cin>>noCandidate;


            centerReqD=CALCNTR();
        }
        void DISPTEST()
        {
            std::cout<<"Test code "<<testCode<<"\nDescripton "<<description<<"\nNo of candidate "<<noCandidate<<"\nCenterReq: "<<centerReqD << "\n";
        }
};

int main()
{
    TEST test;
    test.SCHEDULE();
    test.DISPTEST();

    return 0;
}