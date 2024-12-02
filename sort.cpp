// this is the file for my sor algorithm.
#include <vector>
#include <iostream>
using namespace std;
void InsertionSort(vector<int>& seq) {
	int n = seq.size();
	for (int i = 2; i < n; i++) {
		int k = seq[i]; int p = i - 1;
		while (p > 1 && seq[p] > k) {
			seq[p + 1] = seq[p];
			p--;
		}
		seq[p + 1] = k;
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 关于冒泡排序的优化：不难发现每次终止的位置后面的序列都是已经排好序的。
void goodBubbleSort(vector<int>& seq) {
	int bound = seq.size();
	while (bound > 0) {
		int t = 0;
		for (int i = 0; i < bound; i++) {
			if (seq[i] > seq[i + 1]) {
				swap(seq[i], seq[i + 1]);
				t = i;
			}
		}
		bound = t;
	}
}

void selectionSort(vector<int>& seq) {
	int n = seq.size();
	for (int i = n; i > 1; i--) {
		int max = 0;
		for (int j = 0; j <= i; j++) {
			if (seq[j] > max) {
				// max = seq[j];
				max = j;
			}
		}
		swap(seq[max], seq[i]);
	}
}

int main() {
    cout << "hello" << endl;
}