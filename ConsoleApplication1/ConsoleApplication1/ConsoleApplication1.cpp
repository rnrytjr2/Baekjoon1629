// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int A = 2147483646, B = 2147483647, C = 2147483647;
unsigned long long answer;
int SquaredAndRemainder(int size)
{
	if (size == 1)
	{
		return A%C;
	}
	unsigned long long temp = SquaredAndRemainder(size / 2);


	if (size % 2 == 1)
	{
		return temp = ((temp*temp) % C * (A % C))%C;
	}
	else
	{
		return temp = (temp*temp) % C;
	}
}
int main()
{
	cin >> A >> B >> C;

	cout << SquaredAndRemainder(B);
}