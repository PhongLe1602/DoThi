#include<bits/stdc++.h>
using namespace std;
pair<int,int>pa[4]={{-1,0},{0,-1},{0,1},{1,0}};
int n,m,a,b,p,q;
int cnt,c[1005][1005];
bool used[1005][1005];
void back(int i,int j,int count){
	if(i == p   && j == q){
		cnt = min(cnt,count);
		return;
	}
	for(int k = 0;k <= 3;k++){
		int x = i + pa[k].first;
		int y = j + pa[k].second;
		if(c[x][y]==1&&x>=0&&x<n&&y>=0&&y<m&&used[i][j]==false){
			used[i][j] = true;
			back(x,y,count+1);
			used[i][j] = false;
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin >> n >> m >> a >> b >> p >> q;
		c[n][m]={0}; 
		for(int i = 0;i < n; i++){
			for(int j = 0; j < m; j++) cin >> c[i][j];
		}
		if(c[a][b]!=1||c[p][q]!=1) cout << -1 << endl;
		else{
			memset(used,false,sizeof(used));
			cnt = INT_MAX;
			back(a,b,0);
			cout << cnt << endl;
		}
	}
}
//#include <bits/stdc++.h>
//using namespace std;
//int n, m;
//int mat[1005][1005];
//struct Point
//{
//    int x;
//    int y;
//};
//struct queueNode
//{
//    Point pt;
//    int dist;
//};
//bool isValid(int row, int col)
//{
//    return (row >= 0) && (row < n) &&
//           (col >= 0) && (col < m);
//}
//// int rowNum[] = {-1, 0, 0, 1};
//// int colNum[] = {0, -1, 1, 0};
//int rowNum[] = {0, 1, -1, 0};
//int colNum[] = {1, 0, 0, -1};
//int BFS(int mat[1005][1005], Point src, Point dest)
//{
//    if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
//        return -1;
//    bool visited[1005][1005];
//    memset(visited, false, sizeof visited);
//    visited[src.x][src.y] = true;
//    queue<queueNode> q;
//    queueNode s = {src, 0};
//    q.push(s);
//    while (!q.empty())
//    {
//        queueNode curr = q.front();
//        Point pt = curr.pt;
//        if (pt.x == dest.x && pt.y == dest.y)
//            return curr.dist;
//        q.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//            int row = pt.x + rowNum[i];
//            int col = pt.y + colNum[i];
//            if (isValid(row, col) && mat[row][col] &&
//                !visited[row][col])
//            {
//                visited[row][col] = true;
//                queueNode Adjcell = {{row, col},
//                                     curr.dist + 1};
//                q.push(Adjcell);
//            }
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        Point source, dest;
//        cin >> n >> m >> source.x >> source.y >> dest.x >> dest.y;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//                cin >> mat[i][j];
//        }
//        int dist = BFS(mat, source, dest);
//        if (dist != -1)
//            cout << dist << "\n";
//        else
//            cout << "-1\n";
//    }
//    return 0;
//}
