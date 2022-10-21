#include<iostream>
#include<stdio.h>


class BOOK
{
    private:
        int bookNum;
        char book[20];
        float price;
        float TOTAL_COST(int N)
        {
            return price * N;
        }
    public:
        void INPUT()
        {
            std::cout<<"bookNum: \n";
            std::cin>> bookNum;
            std::cin.ignore();
            std::cout<<"bookName: \n";
            std::cin.getline(book, 100);
            std::cout<< "price per copy: \n";
            std::cin>>price;

        }
        void PURCHASE()
        {
            int copies;
            std::cout<<"How many copies are you buying: \n";
            std::cin>>copies;
            std::cout<<"The cost of the copies is: \n" << TOTAL_COST(copies) << "\n";

        }
};

int main()
{
    BOOK books;
    books.INPUT();
    books.PURCHASE();

    return 0;
}