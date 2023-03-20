#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

void func()
{
    std::vector<int> vector_1(4);

    for(int e:vector_1){
        std::cout<<e<<std::endl;
    }
    int r=2322;
    int t=33;
    int& i=r;
    int * pInt=&r;
    i=t;
    std::cout<<i<<std::endl;
    std::cout<<&i<<endl<<&r<<std::endl<<&t<<std::endl<<&pInt<<std::endl;
    std::cout<<r<<std::endl;
}

int main(int argc, char **argv)
{
    func();
}
