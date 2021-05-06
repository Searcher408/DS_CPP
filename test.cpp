// # include <iostream>
// # include <cstdlib>
// using namespace std;

// int main()
// {
//     cout << "Just a test." << endl;
//     int a;
//     int b;
//     cin >> a >> b;
//     cout << a + b << endl;
//     system("pause");
//     return 0;
// }

//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//    std::unordered_map<std::string, std::string> my_uMap {
//        {"student1", "a"},
//        {"student2", "b"},
//    };
//
//    string str = my_uMap.at("student1");
//    cout << "str = " << str << endl;
//
//    for (auto iter = my_uMap.begin(); iter != my_uMap.end(); iter++) {
//        // pair 类型键值对分为2部分
//        cout << iter->first << " " << iter->second << endl;
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//// 定义结构体 Student
//struct Student {
//    // 结构体包含的成员变量
//    char *name;
//    int age;
//    float score;
//};
//
//// 显示结构体的成员变量
//void display(struct Student stu) {
//    printf("%s 的年龄是 %d, 成绩是 %.2f \n", stu.name, stu.age, stu.score);
//}
//
//int main() {
//    struct Student stu1;
//
//    // 为结构体的成员变量赋值
//    stu1.name = "小明";
//    stu1.age = 12;
//    stu1.score = 92.5;
//
//    // 调用函数
//    display(stu1);
//
//    return 0;
//}

//#include <stdio.h>
//
//// 通过 class 关键字定义类
//class Student {
//public:
//    // 类包含的变量
//    char *name;
//    int age;
//    float score;
//
//    // 类包含的函数
//    void say() {
//        printf("%s 的年龄是 %d, 成绩是 %.2f \n", name, age, score);
//    }
//};
//
//int main() {
//    // 通过类来定义变量，即创建对象
//    class Student stu1; // 也可以省略关键字 class
//
//    // 为类的成员变量赋值
//    stu1.name = "小明";
//    stu1.age = 14;
//    stu1.score = 79.5;
//
//    //调用类的成员函数
//    stu1.say();
//
//    return 0;
//}

//#include <stdio.h>
//
//// 将类定义在命名空间中
//namespace Diy {
//    class Student {
//    public:
//        char *name;
//        int age;
//        float score;
//
//    public:
//        void say() {
//            printf("%s 的年龄是 %d, 成绩是 %f \n", name, age, score);
//        }
//    };
//}
//
//int main() {
//    Diy::Student stu1;
//    stu1.name = "小明";
//    stu1.age = 15;
//    stu1.score = 92.5f;
//    stu1.say();
//
//    return 0;
//}

//#include <cstdio>
//
//int main() {
//    std::printf("test\n");
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//int main() {
//    // 声明命名空间std
//    using namespace std;
//    在 main() 函数中声明命名空间 std，它的作用范围就位于 main() 函数内部，
//    如果在其他函数中又用到了 std，就需要重新声明
//
//    // 定义字符串变量
//    string str;
//
//    // 定义int变量
//    int age;
//
//    // 从控制台获取用户输入
//    cin >> str >> age;
//
//    // 将数据输出到控制台
//    cout << str << "已经成立" << age << "年了" << endl;
//
//    return 0;
//}

//#include <iostream>
//
//void func() {
//    using namespace std;
//    cout << "test" << endl;
//}
//
//int main() {
//    using namespace std;
//
//    cout << "hello" << endl;
//    func();
//
//    return 0;
//}

// scanf printf

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int x;
//    float y;
//
//    cout << "Input an int number and a float number:" << endl;
//    cin >> x >> y;
//
//    cout << "The int number is x = " << x << endl;
//    cout << "The float number is y = " << y << endl;
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//
//    int b;
//    scanf("%d", &b);
//
//    int c = a + b;
//    printf("%d\n", c);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, flag;
//
//    scanf("%d %d", &a, &b);
//    flag = a > b;
//    printf("flag = %d\n", flag);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    bool flag; // 定义布尔变量
//    cin >> a >> b;
//    flag = a > b;
//    cout << "flag = " << flag << endl;
//
//    return 0;
//}

//#include <stdlib.h>
//
//int *p = (int*) malloc (sizeof(int) * 10); // 分配10个int型的内存空间
//free(p)

//int *p = new int; // 分配1个int型的内存空间
//delete p; // 释放内存
//
//int *p1 = new int[10]; // 分配10个int型的内存空间
//delete[] p; // 用new[]分配的内存需要用delete[]释放，它们是一一对应的


//#include <iostream>
//using namespace std;
//
//// 内联函数，交换两个数的值
//inline void swap(int *a, int *b) {
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//
//    cout << m << ", " << n << endl;
//    swap(&m, &n);
//    cout << m << ", " << n << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//// 交换int变量的值
//void Swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 交换float变量的值
//void Swap(float *a, float *b) {
//    float temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 交换char变量的值
//void Swap(char *a, char *b) {
//    char temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 交换bool变量的值
//void Swap(bool *a, bool *b) {
//    bool temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int n1 = 100, n2 = 200;
//    Swap(&n1, &n2);
//    cout << n1 << ", " << n2 << endl;
//
//    float f1 = 1.2, f2 = 3.2;
//    Swap(&f1, &f2);
//    cout << f1 << ", " << f2 << endl;
//
//    char c1 = 'a', c2 = 'b';
//    Swap(&c1, &c2);
//    cout << c1 << ", " << c2 << endl;
//
//    bool b1 = false, b2 = true;
//    Swap(&b1, &b2);
//    cout << b1 << ", " << b2 << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//// 类通常定义在函数外面
//class Student {
//public:
//    // 类包含的变量
//    char *name;
//    int age;
//    float score;
//
//    // 类包含的函数
//    void say() {
//        cout << name << "的年龄是" << age << ", 成绩是" << score << endl;
//    }
//};
//
//int main() {
//    Student stu;
//    stu.name = "Mark";
//    stu.age = 12;
//    stu.score = 93.5f;
//    stu.say();
//
//    Student *pStu = &stu;
//    pStu->name = "Jane";
//    pStu->age = 15;
//    pStu->score = 90.5f;
//    pStu->say();
//
//    // 栈内存是程序自动管理的，不能使用 delete 删除在栈上创建的对象；
//    // 堆内存由程序员管理，对象使用完毕后可以通过 delete 删除。
//    // 在实际开发中，new 和 delete 往往成对出现，以保证及时删除不再使用的对象，防止无用内存堆积。
//    Student * pStu1 = new Student;
//    pStu1->name = "Paul";
//    pStu1->age = 16;
//    pStu1->score = 89.5f;
//    pStu1->say();
//    delete pStu1;
//
//    return 0;
//}

// 在类体中和类体外定义成员函数是有区别的：在类体中定义的成员函数会自动成为内联函数，在类体外定义的不会。
// 当然，在类体内部定义的函数也可以加 inline 关键字，但这是多余的，因为类体内部定义的函数默认就是内联函数。

//class Student {
//public:
//    // 成员变量
//    char *name;
//    int age;
//    float score;
//
//    void say(); // 函数声明
//};
//
//void Student::say() {
//    cout << name << "的年龄是" << age << ", 成绩是" << score << endl;
//}
//
//#include <iostream>
//using namespace std;
//
//// 类的声明
//class Student {
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//
//public:
//    void setname(char *name);
//    void setage(int age);
//    void setscore(float score);
//    void show();
//};
//
//void Student::setname(char *name) {
//    m_name = name;
//}
//
//void Student::setage(int age) {
//    m_age = age;
//}
//
//void Student::setscore(float score) {
//    m_score = score;
//}
//
//void Student::show() {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//}
//
//int main() {
//    // 在栈上创建对象
//    Student stu;
//    stu.setname("Jack");
//    stu.setage(15);
//    stu.setscore(93.5f);
//    stu.show();
//
//    // 在堆上创建对象
//    Student *pStu = new Student;
//    pStu->setname("Jane");
//    pStu->setage(17);
//    pStu->setscore(96.5f);
//    pStu->show();
//
//    return 0;
//}

// 类的声明和成员函数的定义都是类定义的一部分，
// 在实际开发中，我们通常将类的声明放在头文件中，而将成员函数的定义放在源文件中。

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//public:
//    // 声明构造函数
//    Student(char *name, int age, float score);
//    // 声明普通成员函数
//    void show();
//};
//
//// 定义构造函数
//Student::Student(char *name, int age, float score) {
//    m_name = name;
//    m_age = age;
//    m_score = score;
//}
//
//// 定义普通成员函数
//void Student::show() {
//    cout << m_name << "的年龄是" << m_age << "， 成绩是" << m_score << endl;
//}
//
//int main() {
//    // 创建对象时向构造函数传参
//    Student stu("Jack", 18, 93.5f);
//    stu.show();
//
//    Student *pStu = new Student("Jane", 17, 94.5f);
//    pStu->show();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//public:
//    Student();
//    Student(char *name, int age, float score);
//    void setname(char *name);
//    void setage(int age);
//    void setscore(float score);
//    void show();
//};
//
//Student::Student() {
//    m_name = nullptr;
//    m_age = 0;
//    m_score = 0.0;
//}
//
//Student::Student(char *name, int age, float score) {
//    m_name = name;
//    m_age = age;
//    m_score = score;
//}
//
//void Student::setname(char *name) {
//    m_name = name;
//}
//
//void Student::setage(int age) {
//    m_age = age;
//}
//
//void Student::setscore(float score) {
//    m_score = score;
//}
//
//void Student::show() {
//    if(m_name == nullptr || m_age <= 0) {
//        cout << "成员变量还未初始化" << endl;
//    } else {
//        cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//    }
//}
//
//int main() {
//    // 调用构造函数 Student(char *, int, float)
//    Student stu("Karl", 19, 93.5f);
//    stu.show();
//
//    // 调用构造函数 Student()
//    Student *pStu = new Student();
//    pStu->show();
//    pStu->setname("Nane");
//    pStu->setage(15);
//    pStu->setscore(96.5f);
//    pStu->show();
//
//    return 0;
//}

// 默认构造函数 Student(){}

// 成员变量的初始化顺序与初始化列表中列出的变量的顺序无关，它只与成员变量在类中声明的顺序有关。
//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//public:
//    Student(char *name, int age, float score);
//    void show();
//};
//
//// 采用初始化列表
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    // TODO
//}
//
//void Student::show() {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//}
//
//int main() {
//    Student stu("Jane", 18, 90.5f);
//    stu.show();
//    Student *pStu = new Student("Mack", 18, 89.5f);
//    pStu->show();
//
//    return 0;
//}

// 初始化 const 成员变量的唯一方法就是使用初始化列表
//class VLA {
//private:
//    const int m_len;
//    int *m_arr;
//public:
//    VLA(int len);
//};
//
//// 必须使用初始化列表来初始化m_len
//VLA::VLA(int len): m_len(len) {
//    m_arr = new int[len];
//}

// 与C语言中 malloc()、free() 最大的一个不同之处在于：
// 用 new 分配内存时会调用构造函数，用 delete 释放内存时会调用析构函数

//#include <iostream>
//using namespace std;
//
//class VLA {
//public:
//    VLA(int len); // 构造函数
//    ~VLA(); // 析构函数
//public:
//    void input(); // 从控制台输入数组元素
//    void show(); // 显示数组元素
//private:
//    int *at(int i); // 获取第i个元素的指针
//private:
//    const int m_len; // 数组长度
//    int *m_arr; // 数组指针
//    int *m_p; // 指向数组第i个元素的指针
//};
//
//VLA::VLA(int len): m_len(len) { // 使用初始化列表来给m_len赋值
//    if (len > 0) {
//        m_arr = new int[len]; // 分配内存
//    } else {
//        m_arr = nullptr;
//    }
//}
//
//VLA::~VLA() {
//    delete[] m_arr; // 释放内存
//}
//
//void VLA::input() {
//    for (int i = 0; m_p = at(i); i++) {
//        cin >> *at(i);
//    }
//}
//
//void VLA::show() {
//    for (int i = 0; m_p = at(i); i++) {
//        if (i == m_len - 1) {
//            cout << *at(i) << endl;
//        } else {
//            cout << *at(i) << ", ";
//        }
//    }
//}
//
//int * VLA::at(int i) {
//    if (!m_arr || i < 0 || i >= m_len) {
//        return nullptr;
//    } else {
//        return m_arr + i;
//    }
//}
//
//int main() {
//    // 创建一个有n个元素的数组（对象）
//    int n;
//    cout << "Input array length: ";
//    cin >> n;
//    VLA *parr = new VLA(n);
//
//    // 输入数组元素
//    cout << "Input " << n << " numbers: ";
//    parr->input();
//
//    // 输出数组元素
//    cout << "Elements: ";
//    parr->show();
//
//    // 删除数组（对象）
//    delete parr;
//
//    return 0;
//}
//
//在所有函数之外创建的对象是全局对象，它和全局变量类似，位于内存分区中的全局数据区，
//程序在结束执行时会调用这些对象的析构函数。
//在函数内部创建的对象是局部对象，它和局部变量类似，位于栈区，函数执行结束时会调用这些对象的析构函数。
//new 创建的对象位于堆区，通过 delete 删除时才会调用析构函数；如果没有 delete，析构函数就不会被执行。


//#include <iostream>
//#include <string>
//using namespace std;
//
//class Demo {
//public:
//    Demo(string s);
//    ~Demo();
//private:
//    string m_s;
//};
//
//Demo::Demo(string s): m_s(s) {
//
//}
//
//Demo::~Demo() {
//    cout << m_s << endl;
//}
//
//void func() {
//    // 局部对象
//    Demo obj1("1");
//}
//
//// 全局对象
//Demo obj2("2");
//
//int main() {
//    // 局部对象
//    Demo obj3("3");
//
//    // new创建的对象
//    Demo *pObj4 = new Demo("4");
//
//    func();
//
//    cout << "main" << endl;
//
//    return 0;
//}

//1
//main
//3
//2
//
//Process returned 0 (0x0)   execution time : 0.021 s
//Press any key to continue.


// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Student {
// public:
//     void setname(string name);
//     void setage(int age);
//     void setscore(float score);
//     void show();
// private:
//     string name;
// int age;
//     float score;
// };

// void Student::setname(string name) {
//     this->name = name;
// }

// void Student::setage(int age) {
//     this->age = age;
// }

// void Student::setscore(float score) {
//     this->score = score;
// }

// void Student::show() {
//     cout << this->name << "的年龄是" << this->age << "，成绩是" << this->score << endl;
// }

// int main() {
//     Student *pStu = new Student;
//     pStu->setname("Mac");
//     pStu->setage(19);
//     pStu->setscore(88.5f);

//     pStu->show();
//     system("pause");
//     return 0;
// }

//this 是 const 指针，它的值是不能被修改的，一切企图修改该指针的操作，如赋值、递增、递减等都是不允许的。
//this 只能在成员函数内部使用，用在其他地方没有意义，也是非法的。
//只有当对象被创建后 this 才有意义，因此不能在 static 成员函数中使用（后续会讲到 static 成员）。


























































































