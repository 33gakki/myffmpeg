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

    if (ptr1.get()) {                            // �ж�����ָ���Ƿ�Ϊ��

        ptr1->PrintSomething();                    // ʹ�� operator-> ��������ָ������еĺ���

        ptr1.get()->teststring = "Automation";      // ʹ�� get() ������ָ�룬Ȼ����ڲ�����ֵ

        ptr1->PrintSomething();                    // �ٴδ�ӡ������������ֵ�ɹ�

        (*ptr1).teststring += " pointer";           // ʹ�� operator* ��������ָ���ڲ�����Ȼ���á�.����������ָ������еĺ���

        ptr1->PrintSomething();                    // �ٴδ�ӡ������������ֵ�ɹ�

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

