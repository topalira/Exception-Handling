#include <iostream>

using namespace std;

class Point
{
    int x, y;
public:
    Point(){}
    Point(int a, int b)
    {
        if (a < 0 || b < 0)
        {
            throw "X < 0 || Y < 0";
        }
        x = a;
        y = b;
    }
    void SetX(int a)
    {
        if (x < 0)
        {
            throw - 1;
        }
        x = a;
    }
    void SetY(int b)
    {
        if (y < 0)
        {
            throw - 1;
        }
        y = b;
    }
};

int main()
{
    try
    {
        Point obj1(1, 2);
        Point obj2(-10, 4);

        cout << "After throw\n";
    }
    catch (const char * str)
    {
        cout << "Catch exception " << str << endl;
    }
	//catch (...)
	//{
	//	cout << "Catch exception int "  << endl;
	//}
    catch (int a)
    {
        cout << "res: " << endl;
    }
    return 0;
}