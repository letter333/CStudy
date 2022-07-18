#include <stdio.h>
int main() {
	char arr1[2048] = { NULL };
	char arr2[2048] = { NULL };
	arr1[0] = '1';
	int cnt = 1;

	for (int i = 0; i < 20; i++) {
		int j = 0;
		while (arr1[j] != NULL) {
			if (arr1[j] == arr1[j + 1]) {
				cnt++;
			}
			else if(arr1[j] != arr1[j + 1]) {
				arr2[j] = arr1[i];
				arr2[j + 2] = cnt + '0';
			}
		}

	}

	return 0;
}