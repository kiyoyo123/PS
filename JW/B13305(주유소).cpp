// 틀림
#include<bits/stdc++.h>

using namespace std;

int n;
int cost[100000];
int dist[100000];

// 01. Input setting 
void init(){
	
	cin >> n;
	
	for(int i=0; i<n-1; i++){
		cin >> dist[i]; 
	}
	
	for(int i=0; i<n; i++){
		cin >> cost[i];
	}	
}

int main(){
	
	init();
	 
	long long rst = 0;
	
	
	int firstLoc = cost[0];
	rst = (long long) (firstLoc * dist[0]);
	 
	for(int i=0; i<n-1; i++){
		
		if(firstLoc < cost[i]){
			rst += (long long) firstLoc * dist[i+1];			
		}else{
			firstLoc = cost[i];
			rst += (long long) firstLoc * dist[i+1];
		}
	}
	cout << rst << endl;
	
	
	 
	
	return 0;
}
