#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 50; i++){
		if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
		{
			cout << i << " FizzBuzzWoof" << endl;
		}
		else{
			if (i % 3 == 0 && i % 5 == 0){
				cout << i << " FizzBuzz" << endl;
			}
			else if (i % 3 == 0 && i % 7 == 0)
			{
				cout << i << " FizzWoof" << endl;
			}
			else if (i % 5 == 0 && i % 7 == 0)
			{
				cout << i << " BuzzWoof" << endl;
			}
			else if (i % 3 == 0)
			{
				cout << i << " Fizz" << endl;
			}
			else if (i % 5 == 0)
			{
				cout << i << " Buzz" << endl;
			}
			else if (i % 7 == 0)
			{
				cout << i << " Woof" << endl;
			}
		}
	}
	system("pause");
	return 0;
}
