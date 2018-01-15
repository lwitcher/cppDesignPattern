/*单例原型，使用方式是新建的类型参考该类构造&析构函数写法
 * 从C++11起编译器保证局部静态变量构造是线程安全的
 *
 * */
class Singleton {
public:
	static Singleton& Instance() {
		static Singleton _inst;
		return _inst;
	}
private:
	Singleton() {
		//your code
	}

	//拷贝构造&移动拷贝构造设置为private
	Singleton(const Singleton&) {
		//your code
	}
};

/*
 * 模板实现的单例，用法是将需要实现单例的类用该模板包装
 * 需要注意的是这种实现没有严格限制仅能创建一份实例，还是可以通过
 * 被包装类创建新的实例
 */
template<typename T>
class SingletonT {
public:
	static T& Instance() {
		static T _inst;
		return _inst;
	}
};

/*
 * 单例基类，用法是需要作为单例的类继承自该类，子类自行
 * 实现Instance()方法
 */
class SingletonBase {
	/*
	 public:
	 static YOURCLASS& Instance() {
	 static YOURCLASS _inst;
	 return _inst;
	 }
	 */
protected:
	SingletonBase() {
		//your code
	}

	//拷贝构造&移动拷贝构造设置为protected
	//析构无需为虚函数
	SingletonBase(const SingletonBase&) {
		//your code
	}
};
