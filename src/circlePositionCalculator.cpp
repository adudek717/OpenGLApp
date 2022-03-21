#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float numberOfSides = 32.f;
    float radius = 0.8f;
    int numberOfVertices = numberOfSides + 2;

    float doublePi = 2.0f * M_PI;

    float x = 0.0f;
    float y = 0.0f;

    float circleVertX[numberOfVertices];
    float circleVertY[numberOfVertices];

    circleVertX[0] = x;
    circleVertY[0] = y;

    for (int i = 1; i < numberOfVertices; i++)
    {
        circleVertX[i] = x + (radius * cos(i * doublePi / numberOfSides));
        cout << "X[" << i << "] = " << circleVertX[i] << "  ";
        circleVertY[i] = y + (radius * sin(i * doublePi / numberOfSides));
        cout << "Y[" << i << "] = " << circleVertY[i] << endl;
    }

    return 0;
}