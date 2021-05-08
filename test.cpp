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

// static 成员变量属于类，不属于某个具体的对象，即使创建多个对象，也只为 m_total 分配一份内存，
// 所有对象使用的都是这份内存中的数据。当某个对象修改了 m_total，也会影响到其他对象。
// class Student {
// public:
//     Student(char *name, int age, float score);
//     void show();
// public:
//     static int m_total; // 静态成员变量
// private:
//     char *m_name;
//     int m_age;
//     float m_score;
// };

// int Student::m_total = 0; // static 成员变量必须在类声明的外部初始化
// // static 成员变量的内存既不是在声明类时分配，也不是在创建对象时分配，而是在（类外）初始化时分配。

// Student::m_total = 10; // 通过类访问static成员变量

// // 通过对象来访问static成员变量
// Student stu("Karl", 15, 93.5f); 
// stu.m_total = 20;

// // 通过对象指针来访问static成员变量
// Student *pStu = new Student("Lee", 17, 90);
// pStu->m_total = 20;

// static 成员变量不占用对象的内存，而是在所有对象之外开辟内存，即使不创建对象也可以访问。
// 具体来说，static 成员变量和普通的 static 变量类似，都在内存分区中的全局数据区分配内存.

// #include <iostream>
// #include <cstdlib>
// #include <string>
// using namespace std;

// class Student {
// public:
//     Student(string name, int age, float score);
//     void show();
// private:
//     static int m_total; // 静态成员变量
// private:
//     string m_name;
//     int m_age;
//     float m_score;
// };

// // 初始化静态成员变量
// int Student::m_total = 0;

// Student::Student(string name, int age, float score): m_name(name), m_age(age), m_score(score) {
//     m_total++; // 操作静态成员变量
// }

// void Student::show() {
//     cout << m_name << " age is " << m_age << ", score is " << m_score << "(Total " << m_total << " students)" << endl;
// }

// int main() {
//     // 创建匿名对象
//     (new Student("Tim", 15, 90))->show();
//     (new Student("Tony", 16, 92))->show();
//     (new Student("Tom", 17, 93))->show();

//     system("pause");
//     return 0;
// }

// 之所以使用匿名对象，是因为每次创建对象后只会使用它的 show() 函数，不再进行其他操作。
// 不过使用匿名对象无法回收内存，会导致内存泄露，在中大型程序中不建议使用。

// 1) 一个类中可以有一个或多个静态成员变量，所有的对象都共享这些静态成员变量，都可以引用它。

// 2) static 成员变量和普通 static 变量一样，都在内存分区中的全局数据区分配内存，到程序结束时才释放。
// 这就意味着，static 成员变量不随对象的创建而分配内存，也不随对象的销毁而释放内存。
// 而普通成员变量在对象创建时分配内存，在对象销毁时释放内存。

// 3) 静态成员变量必须初始化，而且只能在类体外进行。例如：
// int Student::m_total = 10;

// 初始化时可以赋初值，也可以不赋值。如果不赋值，那么会被默认初始化为 0。全局数据区的变量都有默认的初始值 0，
// 而动态数据区（堆区、栈区）变量的默认值是不确定的，一般认为是垃圾值。

// 4) 静态成员变量既可以通过对象名访问，也可以通过类名访问，但要遵循 private、protected 和 public 关键字的访问权限限制。
// 当通过对象名访问时，对于不同的对象，访问的是同一份内存。

// 在类中，static 除了可以声明静态成员变量，还可以声明静态成员函数。普通成员函数可以访问所有成员（包括成员变量和成员函数），
// 静态成员函数只能访问静态成员。

// 静态成员函数与普通成员函数的根本区别在于：普通成员函数有 this 指针，可以访问类中的任意成员；
// 而静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。

//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    Student(char *name, int age, float score);
//    void show();
//public: // 声明静态成员函数
//    static int getTotal();
//    static float getPoints();
//private:
//    static int m_total; // 总人数
//    static float m_points; // 总成绩
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
//
//int Student::m_total = 0;
//float Student::m_points = 0.0;
//
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    m_total++;
//    m_points += score;
//}
//
//void Student::show() {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//}
//
//// 定义静态成员函数
//int Student::getTotal() {
//    return m_total;
//}
//
//float Student::getPoints() {
//    return m_points;
//}
//
//int main() {
//    (new Student("J", 15, 90.5))->show();
//    (new Student("K", 18, 90.5))->show();
//
//    int total = Student::getTotal();
//    float points = Student::getPoints();
//    cout << "当前共有" << total << "名学生，总成绩是" << points << ", 平均分是" << points/total << endl;
//
//    return 0;
//}

// 和静态成员变量类似，静态成员函数在声明时要加 static，在定义时不能加 static。
// 静态成员函数可以通过类来调用（一般都是这样做），也可以通过对象来调用

//class Student {
//public:
//    Student(char *name, int age, float score);
//    void show();
//
//    // 声明常成员函数
//    char *getname() const;
//    int getage() const;
//    float getscore() const;
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
//
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    // TODO
//}
//
//void Student::show() {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//}
//
//// 定义常成员函数
//char * Student::getname() const {
//    return m_name;
//}
//
//int Student::getage() const {
//    return m_age;
//}
//
//float Student::getscore() const {
//    return m_score;
//}
//
//区分一下 const 的位置：
//函数开头的 const 用来修饰函数的返回值，
//表示返回值是 const 类型，也就是不能被修改，例如const char * getname()。
//函数头部的结尾加上 const 表示常成员函数，这种函数只能读取成员变量的值，
//而不能修改成员变量的值，例如char * getname() const。

// 由于常量一旦被创建后其值就不能再改变，所以常量必须在定义的同时赋值（初始化），
// 后面的任何赋值行为都将引发错误。一如既往，初始化常量可以使用任意形式的表达式，如下所示：

//#include <stdio.h>
//
//int getNum() {
//    return 100;
//}
//
//int main() {
//    int n = 90;
//    const int MaxNum1 = getNum(); // 运行时初始化
//    const int MaxNum2 = n; // 运行时初始化
//    const int MaxNum3 = 80; // 编译时初始化
//
//    printf("%d, %d, %d \n", MaxNum1, MaxNum2, MaxNum3);
//    return 0;
//}

//const int *p1;
//int const *p2;
//int * const p3;
// 在最后一种情况下，指针是只读的，也就是 p3 本身的值不能被修改；在前面两种情况下，
// 指针所指向的数据是只读的，也就是 p1、p2 本身的值可以修改（指向不同的数据），
// 但它们指向的数据不能被修改。

// 指针本身和它指向的数据都有可能是只读的，下面的两种写法能够做到这一点：
//const int * const p4;
//int const * const p5;

// 在C语言中，单独定义 const 变量没有明显的优势，完全可以使用#define命令代替。const 通常用在函数形参中，
// 如果形参是一个指针，为了防止在函数内部修改指针指向的数据，就可以用 const 来限制。

//#include <stdio.h>
//#include <string.h>
//
//// 查找字符串中某个字符出现的次数
//// size_t是一种无符号的整型数，它的取值没有负数，在数组中也用不到负数，而它的取值范围是整型数的双倍。
//size_t strnchr(const char *str, char ch) {
//    int i, n = 0, len = strlen(str);
//
//    for (i = 0; i < len; i++) {
//        if (str[i] == ch) {
//            n++;
//        }
//        // printf("%c, %c, %d\n", ch, str[i], n);
//    }
//
//    return n;
//}
//
//int main() {
//    char *str = "hello";
//    char ch = 'o';
//
//    int n = strnchr(str, ch);
//    printf("%d\n", n);
//
//    return 0;
//}

// const char *和char *是不同的类型，不能将const char *类型的数据赋值给char *类型的变量。
// 但反过来是可以的，编译器允许将char *类型的数据赋值给const char *类型的变量。

// 这种限制很容易理解，char *指向的数据有读取和写入权限，而const char *指向的数据只有读取权限，
// 降低数据的权限不会带来任何问题，但提升数据的权限就有可能发生危险。


//#include <stdio.h>
//
//void func(char *str) {}
//
//int main() {
//    const char *str1 = "hello";
//
//    // 通过赋值、传参（传参的本质也是赋值）将 const 类型的数据交给了非 const 类型的变量，
//    // 编译器不会容忍这种行为，会给出警告，甚至直接报错。
//    char *str2 =str1;
//    func(str1);
//
//    return 0;
//}

//int a[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
//int (*p)[4] = a;
// 括号中的*表明 p 是一个指针，它指向一个数组，数组的类型为int [4]，这正是 a 所包含的每个一维数组的类型。
// [ ]的优先级高于*，( )是必须要加的，如果赤裸裸地写作int *p[4]，那么应该理解为int *(p[4])，
// p 就成了一个指针数组，而不是二维数组指针

// 对指针进行加法（减法）运算时，它前进（后退）的步长与它指向的数据类型有关，p 指向的数据类型是int [4]，
// 那么p+1就前进 4×4 = 16 个字节，p-1就后退 16 个字节，这正好是数组 a 所包含的每个一维数组的长度。
// 也就是说，p+1会使得指针指向二维数组的下一行，p-1会使得指针指向数组的上一行。

// *(p+1)表示取地址上的数据，也就是整个第 1 行数据。
// *(p+1)+1表示第 1 行第 1 个元素的地址。
// *(p+1)单独使用时表示的是第 1 行数据，放在表达式中会被转换为第 1 行数据的首地址，也就是第 1 行第 0 个元素
// 的地址，因为使用整行数据没有实际的含义，编译器遇到这种情况都会转换为指向该行第 0 个元素的指针；就像一维
// 数组的名字，在定义时或者和 sizeof、& 一起使用时才表示整个数组，出现在表达式中就会被转换为指向数组第 0 个
// 元素的指针。
// *(*(p+1)+1)表示第 1 行第 1 个元素的值。
// 数组名 a 在表达式中也会被转换为和 p 等价的指针

//a+i == p+i
//a[i] == p[i] == *(a+i) == *(p+i)
//a[i][j] == p[i][j] == *(a[i]+j) == *(p[i]+j) == *(*(a+i)+j) == *(*(p+i)+j)

//#include <stdio.h>
//
//int main() {
//    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//    int (*p)[4];
//    p = a;
//    printf("%d, %d\n", a+2, p+2); // 输出6422016, 6422016
//
//    int i, j;
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%2d ", *(*(p+i)+j));
//        }
//        printf("\n");
//    }
//    return 0;
//}

// 指针数组和二维数组指针在定义时非常相似，只是括号的位置不同：
//int *(p1[5]); // 指针数组，可以去掉括号直接写作 int *p1[5];
//int (*p2)[5]; // 二维数组指针，不能去掉括号

// 指针数组和二维数组指针有着本质上的区别：指针数组是一个数组，只是每个元素保存的都是指针，
// 以上面的 p1 为例，在32位环境下它占用 4×5 = 20 个字节的内存。
// 二维数组指针是一个指针，它指向一个二维数组，以上面的 p2 为例，它占用 4 个字节的内存。

// 指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。
// 定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。
// int **var; // 声明了一个指向int类型指针的指针

//#include <stdio.h>
//
//int main() {
//    int v;
//    int *p1;
//    int **p2;
//
//    v = 100;
//    p1 = &v; // 获取v的地址
//    p2 = &p1; // 获取p1的地址
//
//    printf("v = %d\n", v);
//    printf("p1 = %p\n", p1);
//    printf("*p1 = %d\n", *p1);
//    printf("p2 = %p\n", p2);
//    printf("*p2 = %p\n", *p2);
//    printf("**p2 = %d\n", **p2);
//
//    return 0;
//}

// 一个函数总是占用一段连续的内存区域，函数名在表达式中有时也会被转换为该函数所在内存区域的首地址，
// 这和数组名非常类似。我们可以把函数的这个首地址（或称入口地址）赋予一个指针变量，使指针变量指向
// 函数所在的内存区域，然后通过指针变量就可以找到并调用该函数。这种指针就是函数指针。
//函数指针的定义形式为：
//returnType (*pointerName)(param list);
//注意( )的优先级高于*，第一个括号不能省略，
//如果写作returnType *pointerName(param list);
//就成了函数原型，它表明函数的返回值类型为returnType *。

//#include <stdio.h>
//
//int max(int a, int b) {
//    return a > b ? a : b;
//}
//
//int main() {
//    int x, y, maxval;
//
//    // 定义函数指针
//    int (*pmax)(int, int) = max; // 可写作int (*pmax)(int a, int b)
//
//    printf("Input two numbers:");
//    scanf("%d %d", &x, &y);
//
//    maxval = (*pmax)(x, y); // 可写作maxval = pmax(x, y);
//
//    printf("Max value: %d\n", maxval);
//
//    return 0;
//}

// 函数指针是指向函数的指针变量。
//#include <stdio.h>
//
//int max(int x, int y) {
//    return x > y ? x : y;
//}
//
//int main() {
//    // p是函数指针
//    int (*p)(int, int) = &max; // &可以省略
//    int a, b, c, d;
//
//    printf("请输入三个数字：");
//    scanf("%d %d %d", &a, &b, &c);
//
//    d = p(p(a, b), c);
//    // 等价于 d = max(max(a, b), c)
//
//    printf("最大的数字是：%d\n", d);
//    return 0;
//}


// 函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。

//#include <stdlib.h>
//#include <stdio.h>
//
//void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
//    for (size_t i = 0; i < arraySize; i++) {
//        array[i] = getNextValue();
//    }
//}
//
//// 获取随机值
//int getNextRandomValue(void) {
//    return rand();
//}
//
//int main() {
//    int marray[10];
//
//    // getNextRandomValue不能加括号，否则无法编译，
//    // 因为加上括号后相当于传入此参数时传入了int，而不是函数指针
//    populate_array(marray, 10, getNextRandomValue);
//
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", marray[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

//#include <stdio.h>
//
//int callback1(int x) {
//    printf("This is callback1: x = %d\n", x);
//    return 0;
//}
//
//int callback2(int x) {
//    printf("This is callback2: x = %d\n", x);
//    return 0;
//}
//
//int callback3(int x) {
//    printf("This is callback3: x = %d\n", x);
//    return 0;
//}
//
//int handle(int y, int (*callback)(int)) {
//    printf("Entering handle function.\n");
//    callback(y);
//    printf("Leaving handle function.\n");
//}
//
//int main() {
//    int a = 1;
//    int b = 2;
//    int c = 3;
//    printf("Entering main function.\n");
//    handle(a, callback1);
//    handle(b, callback2);
//    handle(c, callback3);
//    printf("Leaving main function.\n");
//
//    return 0;
//}

//// 需要预先强调的是没有指向引用的指针!
//// 因为引用是对象的别名，引用不是对象，没有地址
//int v = 1;
//int &r = v; // r为引用
//// int &*p = &r; // 由于引用并不存在地址，因此将会报错。
//// 从右往左读，*表明p是一个指针，余下的&说明了p指向的引用类型。
//// 上面介绍的指向引用的指针，现在来说指针的引用
//int v = 1;
//int *p = &v;
//int *&r = p; // &说明r是一个引用。*确定r引用的类型是一个指针。
//
//// 因为引用不是对象，故无引用的数组，无指向引用的指针，无到引用的引用：
//int& a[3]; // 错误，有指针数组，无引用数组
//int&* p; // 错误，有指针的引用，无引用的指针
//int& &r; // 错误，有指针的指针，无引用的引用


//int **pp; // 指向指针的指针
//int *&rp; // 指针的引用
//
//typedef int * LPINT;
//LPINT *pp;
//LPINT &rp;
//
//// 指针的指针和指针的引用作为传递参数时，
//// 如下面的两个函数在被调用时，编译器编译的二进制代码都将传递一个双重指针，只不过两者的调用方法不同
//void func1(int **p) {
//    **p = 100;
//    *p = nullptr;
//}
//
//void func2(int *&r) {
//    *r = 100;
//    r = nullptr;
//}
//// 碰到*&，就应该想到**，也就是说这个函数修改或可能修改调用者的指针

//typedef int (*PTR_TO_ARR)[4];
//// 表示 PTR_TO_ARR 是类型int * [4]的别名，它是一个二维数组指针类型。
//// 接着可以使用 PTR_TO_ARR 定义二维数组指针：
//PTR_TO_ARR p1, p2;
//// 按照类似的写法，还可以为函数指针类型定义别名：
//typedef int (*PTR_TO_FUNC)(int, int);
//PTR_TO_FUNC pfunc;

//#include <stdio.h>
//
//typedef char (*PTR_TO_ARR)[30];
//typedef int (*PTR_TO_FUNC)(int, int);
//
//int max(int a, int b) {
//    return a > b ? a : b;
//}
//
//char str[3][30] = {
//    "hello",
//    "test",
//    "c/c++"
//};
//
//int main() {
//    PTR_TO_ARR parr = str;
//    PTR_TO_FUNC pfunc = max;
//
//    int i;
//
//    printf("max: %d\n", (*pfunc)(10, 20));
//    for (i = 0; i < 3; i++) {
//        printf("str[%d]: %s\n", i, *(parr+i));
//    }
//
//    return 0;
//}

// typedef 在表现上有时候类似于 #define，但它和宏替换之间存在一个关键性的区别。
// 正确思考这个问题的方法就是把 typedef 看成一种彻底的“封装”类型，声明之后不能再往里面增加别的东西。
//1) 可以使用其他类型说明符对宏类型名进行扩展，但对 typedef 所定义的类型名却不能这样做。如下所示：
//#define INTERGE int
//unsigned INTERGE n;  //没问题
//
//typedef int INTERGE;
//unsigned INTERGE n;  //错误，不能在 INTERGE 前面添加 unsigned
//
//2) 在连续定义几个变量的时候，typedef 能够保证定义的所有变量均为同一类型，而 #define 则无法保证。例如：
//#define PTR_INT int *
//PTR_INT p1, p2;
//
//经过宏替换以后，第二行变为：
//int *p1, p2;
//这使得 p1、p2 成为不同的类型：p1 是指向 int 类型的指针，p2 是 int 类型。
//
//相反，在下面的代码中：
//typedef int * PTR_INT
//PTR_INT p1, p2;
//p1、p2 类型相同，它们都是指向 int 类型的指针。

// 在 C++ 中，const 也可以用来修饰对象，称为常对象。
// 将对象定义为常对象之后，就只能调用类的 const 成员（包括 const 成员变量和 const 成员函数）。
//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    Student(char *name, int age, float score);
//public:
//    void show();
//    char *getname() const;
//    int getage() const;
//    float getscore() const;
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
//
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    //TODO
//}
//
//void Student::show() {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//}
//
//char * Student::getname() const {
//    return m_name;
//}
//
//int Student::getage() const {
//    return m_age;
//}
//
//float Student::getscore() const {
//    return m_score;
//}
//
//// stu、pStu 分别是常对象以及常对象指针，它们都只能调用 const 成员函数。
//int main() {
//    const Student stu("Jane", 16, 90.5); // 常对象
//    // stu.show() // error
//
//    cout << stu.getname() << "的年龄是" << stu.getage() << ", 成绩是" << stu.getscore() << endl;
//
//    const Student *pStu = new Student("Lee", 17, 90.5);
//    // pStu->show() // error
//    cout << pStu->getname() << "的年龄是" << pStu->getage() << ", 成绩是" << pStu->getscore() << endl;
//
//    return 0;
//}

// 在 C++ 中，一个类中可以有 public、protected、private 三种属性的成员，
// 通过对象可以访问 public 成员，只有本类中的函数可以访问本类的 private 成员
// 借助友元（friend），可以使得其他类中的成员函数以及全局范围内的函数访问当前类的 private 成员。
// 在当前类以外定义的、不属于当前类的函数也可以在类中声明，但要在前面加 friend 关键字，这样就构成了友元函数。
// 友元函数可以是不属于任何类的非成员函数，也可以是其他类的成员函数。
// 友元函数可以访问当前类中的所有成员，包括 public、protected、private 属性的。

//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    Student(char *name, int age, float score);
//public:
//    friend void show(Student *pStu); // 将show()声明为友元函数
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
//
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    //TODO
//}
//
//// 非成员函数, show() 是一个全局范围内的非成员函数，它不属于任何类
//// 友元函数不同于类的成员函数，在友元函数中不能直接访问类的成员，必须要借助对象。
//void show(Student *pStu) {
//    cout << pStu->m_name << "的年龄是" << pStu->m_age << ", 成绩是" << pStu->m_score << endl;
//}
//
//int main() {
//    Student stu("Jane", 12, 90.5);
//    show(&stu); // 调用友元函数
//
//    Student *pStu = new Student("Jack", 15, 90.5);
//    show(pStu);
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Address; // 提前声明Address类
//
//// 声明Student类
//class Student {
//public:
//    Student(char *name, int age, float score);
//public:
//    void show(Address *addr);
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
//
//// 声明Address类
//class Address {
//private:
//    char *m_province; // 省份
//    char *m_city; // 城市
//    char *m_district; // 区（市区）
//public:
//    Address(char *province, char *city, char *district);
//    // 将Student类中的成员函数show()声明为友元函数
//    friend void Student::show(Address *addr);
//};
//
//// 实现Student类
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    // TODO
//}
//
//// 将 Student 类的成员函数 show() 声明为 Address 类的友元函数，
//// 由此，show() 就可以访问 Address 类的 private 成员变量
//void Student::show(Address *addr) {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//    cout << "家庭住址：" << addr->m_province << "省" << addr->m_city << "市" << addr->m_district << "区" << endl;
//}
//
//// 实现Address类
//Address::Address(char *province, char *city, char *district) {
//    m_province = province;
//    m_city = city;
//    m_district = district;
//}
//
//int main() {
//    Student stu("Jane", 19, 90.5f);
//    Address addr("陕西", "西安", "雁塔");
//    stu.show(&addr);
//
//    Student *pStu = new Student("Lee", 19, 91.5f);
//    Address *pAddr = new Address("河北", "衡水", "桃城");
//    pStu->show(pAddr);
//
//    return 0;
//}


// 友元类中的所有成员函数都是另外一个类的友元函数。
// 例如将类 B 声明为类 A 的友元类，那么类 B 中的所有成员函数都是类 A 的友元函数，
// 可以访问类 A 的所有成员，包括 public、protected、private 属性的。

//#include <iostream>
//using namespace std;
//
//class Address; // 提前声明Address类
//
//// 声明Student类
//class Student {
//public:
//    Student(char *name, int age, float score);
//public:
//    void show(Address *addr);
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
//
//// 声明Address类
//class Address {
//private:
//    char *m_province; // 省份
//    char *m_city; // 城市
//    char *m_district; // 区（市区）
//public:
//    Address(char *province, char *city, char *district);
//public:
//    friend class Student; // 将Student类声明为Address类的友元类
//};
//
//// 实现Student类
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
//    // TODO
//}
//
//// 将 Student 类的成员函数 show() 声明为 Address 类的友元函数，
//// 由此，show() 就可以访问 Address 类的 private 成员变量
//void Student::show(Address *addr) {
//    cout << m_name << "的年龄是" << m_age << ", 成绩是" << m_score << endl;
//    cout << "家庭住址：" << addr->m_province << "省" << addr->m_city << "市" << addr->m_district << "区" << endl;
//}
//
//// 实现Address类
//Address::Address(char *province, char *city, char *district) {
//    m_province = province;
//    m_city = city;
//    m_district = district;
//}
//
//int main() {
//    Student stu("Jane", 19, 90.5f);
//    Address addr("陕西", "西安", "雁塔");
//    stu.show(&addr);
//
//    Student *pStu = new Student("Lee", 19, 91.5f);
//    Address *pAddr = new Address("河北", "衡水", "桃城");
//    pStu->show(pAddr);
//
//    return 0;
//}
//
//关于友元，有两点需要说明：
//友元的关系是单向的而不是双向的。如果声明了类 B 是类 A 的友元类，不等于类 A 是类 B 的友元类，
//类 A 中的成员函数不能访问类 B 中的 private 成员。
//友元的关系不能传递。如果类 B 是类 A 的友元类，类 C 是类 B 的友元类，不等于类 C 是类 A 的友元类。

// C++ class和struct的区别
// http://c.biancheng.net/view/2235.html





































































