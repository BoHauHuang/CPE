#include<bits/stdc++.h>
using namespace std;
int q, n, m;

void MST_Kruskal(pair<double, pair<int, int> > *edges, int *nodes);
void union_set(int x, int y, int *nodes);
int find_represernt(int x, int *nodes);

struct position{
	double xx;
	double yy;
};
	
int main(){
	int count = 0;
	cin >> q;
	while(q--){
		if(count++) cout << endl;
		cin >> n;
		int nodes[n+1], cnt = 0;
		position pos[n+1];
		m = (n*(n-1))/2;
		pair<double, pair<int, int> > edges[m];
		
		for(int i = 1 ; i <= n ; i++)
			nodes[i] = i;
			
		for(int i = 1 ; i <= n ; i++)
			cin >> pos[i].xx >> pos[i].yy;
		
		for(int i = 1 ; i <= n ; i++){
			for(int j = i+1 ; j <= n ; j++){
				double d = sqrt((pos[i].xx-pos[j].xx)*(pos[i].xx-pos[j].xx)+(pos[i].yy-pos[j].yy)*(pos[i].yy-pos[j].yy));
				edges[cnt++] = make_pair(d, make_pair(i, j));
			}
		}
		sort(edges, edges+m);
		MST_Kruskal(edges, nodes);
	}
	return 0;
} 

void MST_Kruskal(pair<double, pair<int, int> > *edges, int *nodes){
	vector<double> A;
	for(int i = 0 ; i < m ; i++){
		int u = edges[i].second.first;
		int v = edges[i].second.second;
		if(find_represernt(u, nodes) != find_represernt(v, nodes)){
			A.push_back(edges[i].first);
			union_set(u, v, nodes);
		}
	}
	double ans = 0.0;
	for(int i = 0 ; i < A.size() ; i++)
		ans += A[i];
	printf("%.2f\n", ans);
	return;
}
void union_set(int x, int y, int *nodes){
	nodes[find_represernt(x, nodes)] = nodes[find_represernt(y, nodes)];
}

int find_represernt(int x, int *nodes){
	while(x != nodes[x]){
		nodes[x] = nodes[nodes[x]];
		x = nodes[x];
	}
	return x;
}
