#include<iostream>

using namespace std;

void print(int n)
{
	if (n == 0)
		return;
	cout << "hello" << endl;
	print(n - 1);

}
void number(int n)
{
	if (n == 0)
		return;
	cout << "Hii" << endl;
	number(n - 1);
	cout << "Bye" << endl;
}
int main()
{
	//print(10);
	number(10);
	cin.get();
	return 0;
}