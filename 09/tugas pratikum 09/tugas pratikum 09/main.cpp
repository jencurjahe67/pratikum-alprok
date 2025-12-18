#include <iostream>
using namespace std;

void pyramid(int height, int level);
void printSpace(int count);
void printBlock(int count);


int main()
{
	int height = 5;
	pyramid(height, 1); 

	system("pause");
	return 0;
}


void pyramid(int height, int level)
{
	if (level > height)
		return;

	printSpace(height - level);
	printBlock(2 * level - 1);
	cout << endl;

	pyramid(height, level + 1);
}
	void printSpace(int count)
{
	if (count == 0)
		return;

	cout << " ";
	printSpace(count - 1);
}
	void printBlock(int count)
{
		if (count == 0)
			return;

		count << char(178);
		printBlock(count - 1);

}