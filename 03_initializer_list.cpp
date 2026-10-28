#include <initializer_list>
#include <iostream>
#include <vector>

class MagicFoo {
  public:
    std::vector<int> vec;
    // 初始化列表构造函数
    MagicFoo(std::initializer_list<int> list) {
        for (std::initializer_list<int>::iterator it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    }

    // 作为普通函数的参数
    void foo(std::initializer_list<int> list) {
        for (std::initializer_list<int>::iterator it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    };
};

int main() {
    // after C++11
    MagicFoo magicFoo = {1, 2, 3, 4, 5};

    std::cout << "magicFoo: ";
    for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    magicFoo.foo({6, 7, 8, 9, 10});

    std::cout << "magicFoo: ";
    for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}