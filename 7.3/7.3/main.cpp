#include <memory>
#include <iostream>
using namespace std;

class Mytest {
public:
    Mytest(int num=0): number(num)
    {
        std::cout << "Construct Mytest:" << number << std::endl;
    }
    ~Mytest() {

        std::cout << "~Discontruct Mytest: " << number << std::endl;
    }
    void PrintSomething() {

        std::cout << "mynumber: "<<number <<" "<< teststring.c_str() << std::endl;
    }
    std::string teststring;
private:
    int number;
};
void TestAutoPtr() {

    std::auto_ptr<Mytest> ptr1(new Mytest());   

    if (ptr1.get()) {                            // 判断智能指针是否为空

        ptr1->PrintSomething();                    // 使用 operator-> 调用智能指针对象中的函数

        ptr1.get()->teststring = "Automation";      // 使用 get() 返回裸指针，然后给内部对象赋值

        ptr1->PrintSomething();                    // 再次打印，表明上述赋值成功

        (*ptr1).teststring += " pointer";           // 使用 operator* 返回智能指针内部对象，然后用“.”调用智能指针对象中的函数

        ptr1->PrintSomething();                    // 再次打印，表明上述赋值成功

    }

}
void TestsharedPtr1() {

    auto ptr1 = std::make_shared<Mytest>();
    {
        auto ptr2 = ptr1; // create ptr2 using copy initialization of ptr1

        std::cout << "Killing one shared pointer\n";
    } // ptr2 goes out of scope here, but nothing happens

    std::cout << "Killing another shared pointer\n";
}

int main()
{
    {
        TestsharedPtr1();
    }

    cin.ignore(10);
    return 0;
}

