#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int arr[n+1][n+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==n||j==n){
				arr[i][j]=-1;
			}
			else{
				arr[i][j]=0;
			}
		} 
	}
	int k;
	cin>>k;
	int x,y;
	cin>>x>>y;
	int i=1;
	if(k==1){
		int a=1;
		while(arr[x][y]==0){
			arr[x][y]=i;
			y=y+a;
			i++;
			if(y>n-1||y<0){
				a=a*(-1);	
				x=x+1;
				y=y+a;
			}
			if(x>n-1){
				x=0;
			}
		}
	}
	else if(k==2){
		int l=y;
        int d=n-1;
        int r=n-1;
        int t=-1;
        while(arr[x][y]==0){
        	if(x==n-1&&y==n-1){
        		arr[x][y]=i;
        		break;
			}
            while(x<d&&arr[x][y]==0){
            	arr[x][y]=i;
            	i++;
            	x++;
			}
			t++;
			while(y<r&&arr[x][y]==0){
				arr[x][y]=i;
				i++;
				y++;
			}
			l++;
			while(x>t&&arr[x][y]==0){
				arr[x][y]=i;
				i++;
				x--;
			}
			d--;
			while(y>l&&arr[x][y]==0){
				arr[x][y]=i;
				i++;
				y--;
			}
			r--;
        }
	}
	for(int b=0;b<n;b++){
		for(int j=0;j<n;j++){
			if(arr[b][j]==0){
				cout<<"00 ";
			}
			else if(arr[b][j]<10){
				cout<<"0"<<arr[b][j]<<" ";
			}
			else{
				cout<<arr[b][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
