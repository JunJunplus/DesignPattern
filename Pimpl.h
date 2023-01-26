#ifndef __DP_PIMPL__
#define __DP_PIMPL__
/*
PIMPL模式 即pointer to implementation,是C++里一种将类的接口与具体实现细节进行分离的技术。

实施方法：通过一个私有的成员指针，将指针所指向的类的内部实现数据进行隐蔽

pimpll模式的优点：
1.提高编译速度
2.实现信息隐蔽
3.减小编译依赖，可以用最小的代价平滑的升级库文件
4.接口的实现进行耦合
5.移动语义好
————————————————
*/
#include <iostream>
#include <memory>

class Myclass {
public:
    Myclass();
    void func1();

    void func2();
private:
    class impl;
    static impl m_impl;
    std::unique_ptr<impl> Pimpl;
};

#endif