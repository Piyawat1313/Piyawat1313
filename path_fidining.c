#include<stdio.h>
void main(){
	int n;
	scanf("%d", &n);
	char arr[n][n];
	for (int r=0; r<n; r+=1){
		for (int c=0; c<n; c+=1){
			arr[r][c] = '_';
		}
	}
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &y1, &x1, &y2, &x2);
	if (x1 < 0 || x1 > n-1 || x2 < 0 || x2 > n-1 || y1 < 0 || y1 > n-1 || y2 < 0 || y2 > n-1){
		printf("Out of range");
	} else {
		int x;
		if (x1 < x2){
			for (int c=x1; c<=x2; c+=1){
				arr[y1][c] = '>';
			}
			x = x2;
		} else {
			for (int c=x1; c>=x2; c-=1){
				arr[y1][c] = '<';
			}
			x = x2;
		}


		if (y1 < y2){
			for (int r=y1; r<=y2; r+=1){
				arr[r][x2] = 'v';
			}
		} else if (y2 < y1) {
			for (int r=y1; r>=y2; r-=1){
				arr[r][x2] = '^';
			}
		}


		for (int r=0; r<n; r+=1){
			for (int c=0; c<n; c+=1){
				printf("%c", arr[r][c]);
			}
			printf("\n");
		}
	}
}
