#include<iostream>
#include<stdio.h>

class REPORT
{
    private:
        int adno;
        char name[20];
        float marks[5];
        float average;
        void GETAVG()
        {
            average = 0;
            for (int i = 0; i < 5; i++)
            {
                average += marks[i];
            }

            average /= 5;
        }
    public:
        void READINFO()
        {
            std::cout<<"Enter 4 digit admission number: ";
            std::cin>>adno;
            std::cin.ignore();
            std::cout<<"Name: \n";
            std::cin.getline(name, 20);
            std::cout<<"Enter marks: \n";

            for (int i = 0; i < 5; i++)
            {
                std::cout<<"class " << i + 1<< ": ";
                std::cin>>marks[i];
            }

            GETAVG();

        }
        void DISPLAYINFO()
        {
            std::cout<<"Number: "<<adno<<"\nName: "<<name<<"\nMarks: "<< marks[0]<<", "<< marks[1]<<", "<<marks[2]<<", "<< marks[3]<<", "<< marks[4]<<"\nAverage: "<<average << "\n";
        }
};

int main()
{
    REPORT student;
    student.READINFO();
    student.DISPLAYINFO();

    return 0;
}