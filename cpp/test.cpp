#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

void func()
{
    throw std::invalid_argument("hehheheh");
}

int main(int argc, char **argv)
{
    cout << "heh" << endl;
    func();
    cout << 1223 << endl;
}
