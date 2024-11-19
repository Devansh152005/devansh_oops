#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Cuboid
{
private:
    float length;
    float breadth;
    float height;
    float Volume;
    friend class Cube;

public:
    Cuboid(float l, float b, float h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
        this->Volume = l * b * h;
    }
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << Volume << endl;
    }
};
class Cube
{
private:
    float side;
    float Volume;
    friend class Cuboid;

public:
    Cube(Cuboid c1)
    {
        this->side = cbrt(c1.Volume);
        this->Volume = c1.Volume;
    }
    void display()
    {
        cout << "Side of Cube: " << side << endl;
        cout << "Volume of Cube: " << Volume << endl;
    }
};
int main()
{
    Cuboid c1(1, 4, 2);
    Cube c2(c1);
    cout << "The dimensions of the cuboid: " << endl;
    c1.display();
    cout << "The dimensions of the derived Cube: " << endl;
    c2.display();
    return 0;
}