#define _CRT_SECURE_NO_WARNINGS 1
#if 0
// public
// 基类/父类
class Base
{
public:
	void SetBase(int pub, int pro, int pri)
	{
		_pub = pub;
		_pro = pro;
		_pri = pri;
	}

	void PrintBase()
	{
		cout << _pub << " " << _pro << " " << _pri << endl;
	}

public:
	int _pub;
protected:
	int _pro;
private:
	int _pri;
};


// 派生类/子类---一定要对基类进行扩展
// protected继承方式：基类中被public修饰的成员在子类中的权限降为protected
//                  基类中被protected修饰的成员在子类中的权限不变
//                  基类中private修饰的成员在子类中不能直接访问 || 不可见---已经被继承到子类中
class Derived : protected Base
{
public:
	void SetDerived(int pubD, int proD, int priD)
	{
		_pub = pubD;
		_pro = proD;

		//_pri = priD;
	}
};

class D : public Derived
{
public:
	void TestFunc()
	{
		_pro = 10;
		_pub = 20;
	}
};


int main()
{
	Derived d;
	//d._pub = 10;
	return 0;
}
#endif


class Base
{
public:
	void SetBase(int pub, int pro, int pri)
	{
		_pub = pub;
		_pro = pro;
		_pri = pri;
	}

	void PrintBase()
	{
		cout << _pub << " " << _pro << " " << _pri << endl;
	}

public:
	int _pub;
protected:
	int _pro;
private:
	int _pri;
};


// 派生类/子类---一定要对基类进行扩展
// private继承方式：基类中被public和protected修饰的成员在子类中的权限降为private
//                  基类中private修饰的成员在子类中不能直接访问 || 不可见---已经被继承到子类中
class Derived : private Base
{
public:
	void SetDerived(int pubD, int proD, int priD)
	{
		_pub = pubD;
		_pro = proD;

		//_pri = priD;
	}
};

class D : public Derived
{
public:
	void TestFunc()
	{
		//_pub = 10;
		//_pro = 10;
	}
};

