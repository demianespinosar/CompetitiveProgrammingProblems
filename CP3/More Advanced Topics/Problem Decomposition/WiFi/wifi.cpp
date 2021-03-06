#include <cstdio>
#include <algorithm>
using namespace std;

int T, N, M, a[100005];

int abz(int x){
	if(x >= 0)
		return x;
	else
		return -1*x;
	
	}

double solve(){
	int lo, mid, hi, j, k, current;
	lo = 0;
	hi = 10000000;
	mid = (lo + hi)/2;
	while(lo != hi){
		current = 0;
		for(j = 1; j <= N; j++){
			for(k = current; k < M && (abz(mid + a[current] - a[k]) <= mid) ; k++){
			}
			current = k;
		}
		if(current >= M){
			hi = mid;
			}
		else{
			lo = mid + 1;
			}
		mid = (lo + hi)/2;
		}
	return (double)mid/10;
	}

int main() {
	int i,t;
	scanf("%d", &T);
	for(t = 1; t <= T; t++){
		scanf("%d %d", &N, &M);
		for(i = 0; i< M; i++){
			scanf("%d", &a[i]);
			a[i] *= 10;
		}
		sort(a, a + M);
		printf("%.1lf\n", solve());
		
	}
}
