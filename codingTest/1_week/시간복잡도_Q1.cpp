#include<bits/stdc++.h>
using namespace std;

int n, cnt;

int main(){
	cin >> n; 
	int a = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			a += i + j; 
			cnt++;
		}
	}
	cout << a << '\n';
	cout << "cnt : " << cnt << "\n";
	return 0;
}

/*
�ð����⵵ ���

���� ��� 
�ֿ� ���� : a += i + j;

for(int i = 0; i < n; i++){ -> i�� n�ݺ�(i=n) => n * i => n * n
	for(int j = 0; j < i; j++){ -> j�� i��ŭ �ݺ� -> j(=i)

�ð����⵵ = n * n = n^2
���ǥ��� = O(n^2)


����
Tip! �ð����⵵�� ó�� ����غ� ���� cnt�� ���� �ӽú����� ++�� ���ְ� ��� Ŀ������ Ȯ���ϱ�.
���� ÷��. 
*/
