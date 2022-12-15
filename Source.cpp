#include <iostream>

using namespace std;

void f1(const int* v) {
	int* tmp;
	tmp = const_cast<int*>(v);
	*tmp = (*v) * (*v);
}

class B {
public:
	virtual void f2() {
		cout << "Function_2_B" << endl;
	}
};

class D : public B{
public:
	virtual void f2() {
		cout << "Function_2_D" << endl;
	}
};

int main() {

	/*double num;
	num = 10 / 3;
	cout << (double)num << endl;*/

	// const_cast - оператор явного переропределения модификатора const
	// dynamic_cast - проверка на приведение типа (можно ли привести один тип к другому)
	// static_cast - неполиморфное приведение типа, не происходит никаких проверок
	// reinterpret_cast - приводит один тип в совершенно другой

	//int num = 10;
	//cout << " Before changes " << num << endl;
	//f1(&num);
	//cout << " After changes " << num << endl;

	B* ptr_b, obj_b;
	D* ptr_d, obj_d;

	// 1 obj -> *B
	/*ptr_b = dynamic_cast<B*>(&obj_b);
	if (!ptr_b) {
		cout << "Error" << endl;
	}
	else {
		ptr_b->f2();
	}*/

	// 2 objD -> B*
	/*ptr_b = dynamic_cast<B*>(&obj_b);
	if (!ptr_b) {
		cout << "Error" << endl;
	}
	else {
		ptr_b->f2();
	}*/

	// 3 objB -> *D
	/*ptr_d = dynamic_cast<D*>(&obj_b);
	if (!ptr_d) {
		cout << "Error" << endl;
	}
	else {
		ptr_d->f2();
	}*/

	for (int i  = 0; i < 10; i++)
	{
		cout << static_cast<float> (i) / 3 << endl;
	}

	int num;
	const char* str = "Hello C++!";
	cout << str << endl;
	num = reinterpret_cast<int>(str);
	cout << num << endl;

	return 0;
}