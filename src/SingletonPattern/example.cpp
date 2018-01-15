#include "Singleton.h"
#include <iostream>
using namespace std;

class wanna_single {
public:
	int i_;
};

class wanna_single2: public SingletonBase {
public:
	static wanna_single2& Instance() {
		static wanna_single2 _inst;
		return _inst;
	}
};

int main() {

	//演示单例原型
	/*
	 * Singleton singleton1 = Singleton::Instance();//error
	 * Singleton singleton1;//error
	 * Singleton singleton1(std::move(Singleton::Instance()));//error
	 */
	{
		cout << "test for Singleton..." << endl;
		Singleton& singleton1 = Singleton::Instance();
		Singleton* singleton2 = &Singleton::Instance();
		cout << "singleton2:" << &singleton1 << endl;
		cout << "singleton2:" << singleton2 << endl;
		cout << "Singleton::Instance():" << &Singleton::Instance() << endl;
	}

	//演示模板类
	{
		cout << "test for SingletonBase..." << endl;
		wanna_single& singleton1 = SingletonT<wanna_single>::Instance();
		wanna_single* singleton2 = &SingletonT<wanna_single>::Instance();
		cout << "singleton2:" << &singleton1 << endl;
		cout << "singleton2:" << singleton2 << endl;
		/*
		 * wanna_single wrong; //还是可以通过这种方式创建实例
		 */
	}

	//演示单例基类
	{
		/*
		 * wanna_single2 singleton1 = wanna_single2::Instance();//error
		 * wanna_single2 singleton1;//error
		 * wanna_single2 singleton1(std::move(wanna_single2::Instance()));//error
		 */
		cout << "test for SingletonT..." << endl;
		wanna_single2& singleton1 = wanna_single2::Instance();
		wanna_single2* singleton2 = &wanna_single2::Instance();
		cout << "singleton2:" << &singleton1 << endl;
		cout << "singleton2:" << singleton2 << endl;
	}
	return 0;
}
