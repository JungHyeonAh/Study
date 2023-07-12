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
시간복잡도 계산

나의 계산 
주요 로직 : a += i + j;

for(int i = 0; i < n; i++){ -> i는 n반복(i=n) => n * i => n * n
	for(int j = 0; j < i; j++){ -> j는 i만큼 반복 -> j(=i)

시간복잡도 = n * n = n^2
빅오표기법 = O(n^2)


정답
Tip! 시간복잡도를 처음 계산해볼 때는 cnt와 같이 임시변수에 ++을 해주고 어떻게 커지는지 확인하기.
사진 첨부. 
*/
