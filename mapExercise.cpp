#include <map>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    map<int, int> mapTest;
    for (int i = 0; i < 10; i++)
    {
        mapTest[i] = i * 100;
    }
    mapTest[5] = 5000;

    map<int, int>::iterator it;
    for (it = mapTest.begin(); it != mapTest.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    system("pause");
    return 0;
}