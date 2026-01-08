#include <iostream>

using namespace std;

int main() 
{
	cout << "masukan angka 1-10 secara acak dan jangan angka dobel";
	int arr[10]{};
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];

	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] > 5) { 
			for (int j = 5; j < 10; j++) {
				if (arr[j] < 5) {

					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					break;

				}
			}

		}
	}

	cout << "hasil dari angka yang diberikan" << endl;

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}