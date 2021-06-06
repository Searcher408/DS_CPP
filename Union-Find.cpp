// 并查集主要用于解决一些元素分组的问题。它管理一系列不相交的集合，并支持两种操作：
// 合并（Union）：把两个不相交的集合合并为一个集合。
// 查询（Find）：查询两个元素是否在同一个集合中。

// （洛谷P1551）亲戚
// 路径压缩和按秩合并如果一起使用，时间复杂度接近 O(n)
#include <cstdio>
#define MAXN 5005

int fa[MAXN], rank[MAXN]; //用一个数组rank[]记录每个根节点对应的树的深度

// 初始化（按秩合并）
inline void init(int n) { 
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
        rank[i] = 1; // 一开始，把所有元素的rank（秩）设为1。合并时比较两个根节点，把rank较小者往较大者上合并。
    }
}

// 路径压缩：把沿途的每个节点的父节点都设为根节点
int find(int x) {
    return x == fa[x] ? x : (fa[x] == find(fa[x])); 
}

// 合并（按秩合并）
inline void merge(int i, int j) {
    int x = find(i), y = find(j); //先找到两个根节点
    if (rank[x] <= rank[y]) { // 秩相等时x合并到y
        fa[x] = y; 
    } else {
        fa[y] = x;
    }

    if (rank[x] == rank[y] && x != y) { 
        rank[y]++; //如果深度相同且根节点不同，则新的根节点的深度+1
    }
}

int main() {
    int n, m, p, x, y; 

    // 三个整数n,m,p，（n<=5000,m<=5000,p<=5000），分别表示有n个人，m个亲戚关系，询问p对亲戚关系。
    scanf("%d%d%d", &n, &m, &p);

    init(n);

    // 以下m行：每行两个数Mi，Mj，1<=Mi，Mj<=N，表示Mi和Mj具有亲戚关系。
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &x, &y);
        merge(x, y);
    }

    // 接下来p行：每行两个数Pi，Pj，询问Pi和Pj是否具有亲戚关系。
    for (int i = 0; i < p; i++) {
        scanf("%d%d", &x, &y);
        // 输出p行，每行一个’Yes’或’No’。表示第i个询问的答案为“具有”或“不具有”亲戚关系。
        printf("%s\n", find(x) == find(y) ? "Yes" : "No");
    }

    return 0;
}

// NOIP提高组2017年D2T1 洛谷P3958 奶酪
// 把所有空洞划分为若干个集合，一旦两个空洞相交或相切，就把它们放到同一个集合中。
// 划出2个特殊元素，分别表示底部和顶部，如果一个空洞与底部接触，则把它与表示底部的元素放在同一个集合中，顶部同理。
// 最后，只需要看顶部和底部是不是在同一个集合中即可。这完全可以通过并查集实现。

#include <cstdio>
#include <cstring>
#define MAXN 1005

typedef long long ll;
int fa[MAXN], rank[MAXN];
ll X[MAXN], Y[MAXN], Z[MAXN]; // 数据范围的原因需要使用long long

// 判断两个空洞是否相交或相切
inline bool nextTo(ll x1, ll y1, ll z1, ll x2, ll y2, ll z2, ll r) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2) <= 4 * r * r; // (2r)^2
}

inline void init(int n) {
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
        rank[i] = 1;
    }
}

int find(int x) {
    return x == fa[x] ? x : (fa[x] = find(fa[x]));
}

inline void merge(int i, int j) {
    int x = find(i), y = find(j);
    if (rank[x] <= rank[y]) {
        fa[x] = y;
    } else {
        fa[y] = x;
    }

    if (rank[x] == rank[y] && x != y) {
        rank[y]++;
    }
}

int main() {
    int T, n, h;
    ll r;
    
    // T代表该输入文件中所含的数据组数。
    scanf("%d", &T);

    // T组数据，每组数据的格式如下： 第一行包含三个正整数n, h, r
    // 分别代表奶酪中空洞的数量，奶酪的高度和空洞的半径。
    // 接下来的n行，每行包含三个整数x, y, z，两个数之间以一个空格分开，表示空洞球心坐标为(x, y, z)。
    for (int t = 0; t < T; t++) {
        memset(X, 0, sizeof(X));
        memset(Y, 0, sizeof(Y));
        memset(Z, 0, sizeof(Z));

        scanf("%d%d%lld", &n, &h, &r);

        init(n);

        fa[1001] = 1001; // 用1001代表底部
        fa[1002] = 1002; // 用1002代表顶部

        for (int i = 1; i <= n; i++) {
            scanf("%lld%lld%lld", X + i, Y + i, Z + i);
        }

        for (int i = 1; i <= n; i++) {
            if (Z[i] <= r) {
                merge(i, 1001); // 与底部接触的空洞与底部合并
            }
            if (Z[i] + r >= h) {
                merge(i, 1002); // 与顶部接触的空洞与顶部合并
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (nextTo(X[i], Y[i], Z[i], X[j], Y[j], Z[j], r)) {
                    merge(i, j); // 遍历所有空洞，合并相交或相切的球
                }
            }
        }

        printf("%s\n", find(1001) == find(1002) ? "Yes" : "No");
    }

    return 0;
}