#include <iostream>
using namespace std;

double hitungipk(int sks, double total)
{
    return total / sks;
}

string predikat (double ipk)
{
    if (ipk < 10){
        return "memuaskan";
    }
    else{
        return"cumlaude";
    }
}