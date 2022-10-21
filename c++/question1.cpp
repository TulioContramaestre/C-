#include <stdio.h>
#include <iostream>
// using namespace std; 


class student
{
    private:
        int admno;
        char sname[20];
        float eng,math,science;
        float total;
        float ctotal()
        {
            return eng + math + science;
        }
    public:
        void takeData()
        {
            std::cout<<"admno number: \n";
            std::cin>> admno;
            std::cout<<"student name: \n";
            std::cin>> sname;

            std::cout<<"Enter grades for eng math science \n";
            std::cin>>eng>>math>>science;

            total = ctotal();
        }
        void showData()
        {
            std::cout<<"admo: "<<admno<<"\nStudent name: "<<sname<<"\nEng: "<<eng<<"\nMath: "<<math<<"\nScience: "
            <<science<<"\nTotal: "<<total<< "\n";
        }

    

};

int main()
{
    student student;
    student.takeData();
    student.showData();

    return 0;
}