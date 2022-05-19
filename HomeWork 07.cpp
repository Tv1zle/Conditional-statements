
#include <iostream>
int main()
{
    //Task 1
    int Width;
    std::cout << "Width = ";
    std::cin >> Width;


    int Height;
    std::cout << "Height = ";
    std::cin >> Height;


    int N;
    std::cout << "On 1m2 of wall have to = ";
    std::cin >> N;


    int M;
    std::cout << "Occupy windows and doors = ";
    std::cin >> M;


    int R;
    std::cout << "One liter of paint = = ";
    std::cin >> R;


    int CorrectSizeOfRoom = (Width * Height - M) / N;
    std::cout << "The paint will go away = " << CorrectSizeOfRoom << "\nTotal paint cost = " << CorrectSizeOfRoom * R << "\n";



    //Task 2
    int FirstNumber;
    std::cout << "First number = ";
    std::cin >> FirstNumber;


    int SecondNumber;
    std::cout << "Second number = ";
    std::cin >> SecondNumber;


    int ThirdNumber;
    std::cout << "Third number = ";
    std::cin >> ThirdNumber;


    if (FirstNumber < SecondNumber && FirstNumber < ThirdNumber) {
        std::cout << FirstNumber << "\n";
    }
    else if (SecondNumber < FirstNumber && SecondNumber < ThirdNumber) {
        std::cout << SecondNumber << "\n";
    }
    else {
        std::cout << ThirdNumber << "\n";
    }



    //Task 3
    int Number;
    std::cout << "Number = ";
    std::cin >> Number;


    if (Number == 0) {
        std::cout << "Equals zero \n";
    }
    else if (Number < 0) {
        std::cout << "Negative number \n";
    }
    else {
        std::cout << "Positive number \n";
    }



    //Task 4
    int OneBebra;
    std::cout << "First number = ";
    std::cin >> OneBebra;


    int TwoBebra;
    std::cout << "Second number = \n";
    std::cin >> TwoBebra;


    int Choice;
    std::cout << "1) a + b \n2) a - b \n3) a * b \n4) a / b \n5) a % b";
    std::cin >> Choice;


    if (Choice == 1) {
        std::cout << OneBebra + TwoBebra << "\n";
    }
    else if (Choice == 2) {
        std::cout << OneBebra - TwoBebra << "\n";
    }
    else if (Choice == 3) {
        std::cout << OneBebra * TwoBebra << "\n";
    }
    else if (Choice == 4) {
        if (TwoBebra == 0) {
            std::cout << "You can't divide by zero! \n";
        }
        else {
            std::cout << OneBebra / TwoBebra << "\n";
        }
    }
    else if (Choice == 5) {
        std::cout << OneBebra % TwoBebra << "\n";
    }
}