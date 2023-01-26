#include "Pimpl.h"

class Myclass::impl
{
public:
    void func1(){ std::cout << "Myclass::impl::func1()" << std::endl; }
    void func2();
private:
    void func3();
    void func4();

    int a;
    int b;
};

Myclass::Myclass()
{
    Pimpl = std::make_unique<impl>();
}

void Myclass::func1(){
    Pimpl->func1();
}

int main()
{
    Myclass my;
    my.func1();
    return 0;
}
