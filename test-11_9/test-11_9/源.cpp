#define _CRT_SECURE_NO_WARNINGS 1
#if 0
// public
// ����/����
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


// ������/����---һ��Ҫ�Ի��������չ
// protected�̳з�ʽ�������б�public���εĳ�Ա�������е�Ȩ�޽�Ϊprotected
//                  �����б�protected���εĳ�Ա�������е�Ȩ�޲���
//                  ������private���εĳ�Ա�������в���ֱ�ӷ��� || ���ɼ�---�Ѿ����̳е�������
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


// ������/����---һ��Ҫ�Ի��������չ
// private�̳з�ʽ�������б�public��protected���εĳ�Ա�������е�Ȩ�޽�Ϊprivate
//                  ������private���εĳ�Ա�������в���ֱ�ӷ��� || ���ɼ�---�Ѿ����̳е�������
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

