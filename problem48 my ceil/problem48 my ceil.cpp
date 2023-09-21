#include <iostream>
using namespace std;



float readNumber()
{
    float num;
    cout << "\nEnter a Number? ";
    cin >> num;
    cout << "\n";
    return num;
}

int myCeil(float num)
{
    float fractionPart = num - int(num);

    if (fractionPart == 0 || num < 0)//10
        return int(num);
    else if(num > 0)
        return int(++num);

}

void printResult(string msg, float res)
{
    cout << msg << res << endl;
}



int main()
{
    float num = readNumber();

    printResult("My ceil result is: ", myCeil(num));
    printResult("C++ ceil result is : ", ceil(num));



    return main();
}