// 线段树（Segment Tree）主要用于维护区间信息（要求满足结合律）。
// 与树状数组相比，它可以实现O(logn)的区间修改，还可以同时支持多种操作（加、乘），更具通用性。

// 线段树的建立
// 线段树是一棵平衡二叉树。母结点代表整个区间的和，越往下区间越小。
// 注意，线段树的每个节点都对应一条线段（区间），但并不保证所有的线段（区间）都是线段树的节点，这两者应当区分开。
// 每个节点 p 的左右子节点的编号分别为 2p 和 2p+1 ，假如节点 p 储存区间 [l, r] 的和，
// 设 mid = (l+r)/2 向下取整, 那么两个子节点分别储存 [l, mid] 和 [mid+1, r] 的和。
// 可以发现，左节点对应的区间长度，与右节点相同或者恰好多1。
// 递归 从数组建立一颗线段树
void build(ll l = 1, ll r = n, ll p = 1) {
    if (l == r) { // 到达叶子节点
        tree[p] = A[l]; // 用数组中的数据赋值
    } else {
        ll mid = (l + r) / 2;
        build(l, mid, p * 2); // 先建立左右子节点
        build(mid + 1, r, p * 2 + 1);
        tree[p] = tree[p * 2] + tree[p * 2 + 1]; // 该节点的值等于左右子节点之和
    }
}

// 区间修改
// “懒标记”（或延迟标记）是线段树的精髓
// 对于区间修改，朴素的想法是用递归的方式一层层修改（类似于线段树的建立），但这样的时间复杂度比较高。
// 使用懒标记后，对于那些正好是线段树节点的区间，不继续递归下去，而是打上一个标记，将来要用到它的子区间的时候，再向下传递。
// 目标区间[l, r] 目标区间需要加上的值d 当前节点p 当前区间[cl, cr] 
void update(ll l, ll r, ll d, ll p = 1, ll cl = 1, ll cr = n) {
    if (cl > r || cr < l) { // 区间无交集
        return; // 剪枝，直接结束递归。
    } else if (cl >= l && cr <= r) { // 当前节点对应的区间包含在目标区间中
        tree[p] += d * (cr - cl + 1); // 更新当前区间的值，需要乘上区间长度
        if (cl < cr) { // 如果不是叶子节点 （叶子节点可以不打标记，因为不会再向下传递了）
            mark[p] += d; // 给当前区间打上懒标记 （这个标记表示“该区间上每一个点都要加上d”。原来可能存在标记，所以是+=而不是=）
        }
    } else { // 与目标区间有交集，但不包含于其中
        // 这时把当前区间一分为二，分别进行处理。如果存在懒标记，要先把懒标记传递给子节点。
        ll mid = (cl + cr) / 2;
        mark[p * 2] += mark[p]; // 标记向下传递，左子节点
        mark[p * 2 + 1] += mark[p]; // 右子节点

        // 两个子节点的值也就需要相应的更新（后面乘的是区间长度）
        tree[p * 2] += mark[p] * (mid - cl + 1); // 往下更新一层
        tree[p * 2 + 1] += mark[p] * (cr - mid);

        mark[p] = 0; // 清除该节点的懒标记

        // 传递完标记后，再递归地去处理左右两个子节点。
        update(l, r, d, p * 2, cl, mid); // 递归向下寻找
        update(l, r, d, p * 2 + 1, mid + 1, cr);
        tree[p] = tree[p * 2] + tree[p * 2 + 1]; // 根据子节点更新当前节点的值
    }
}

// 更新时从最大的区间开始，递归向下处理（自顶至底）。
// 注意到，任何区间都是线段树上某些节点的并集。于是记目标区间为 [l, r] ，当前区间为 [cl, cr] ， 当前节点为 p
// 会遇到三种情况：
// 1. 当前区间与目标区间没有交集：直接结束递归。
// 2.当前区间被包括在目标区间里：更新当前区间，打上懒标记。
// 3.当前区间与目标区间相交，但不包含于其中：把当前区间一分为二，分别进行处理。

// 区间查询，求出某区间每一个数的和。一样的递归，一样自顶至底地寻找，一样的合并信息。
// 目标区间[l, r] 当前节点p 当前区间[cl, cr] 
ll query(ll l, ll r, ll p = 1, ll cl = 1, ll cr = n) {
    if (cl > r || cr < l) {
        return 0;
    } else if (cl >= l && cr <= r) {
        return tree[p];
    } else {
        ll mid = (cl + cr) / 2;
        pushDown(p, cr - cl + 1);
        return query(l, r, p * 2, cl, mid) + query(l, r, p * 2 + 1, mid + 1, cr);
    }
}

inline void pushDown(ll p, ll len) {
    mark[p * 2] += mark[p];
    mark[p * 2 + 1] += mark[p];
    tree[p * 2] += mark[p] * (len - len / 2);
    tree[p * 2 + 1] += mark[p] * (len / 2); // 如果len为奇数则右边区间长度比左边少1，因为mid划分到左边区间
    mark[p] = 0;
}

// 洛谷P3372 【模板】线段树 1
// 题目描述：
// 已知一个数列，需要进行下面两种操作：
// 1.将某区间每一个数加上x
// 2.求出某区间每一个数的和
// 输入格式:
// 第一行包含两个整数N、M，分别表示该数列数字的个数和操作的总个数。
// 第二行包含N个用空格分隔的整数，其中第i个数字表示数列第i项的初始值。
// 接下来M行每行包含3或4个整数，表示一个操作，具体如下：
// 操作1： 格式：1 x y d 含义：将区间[x,y]内每个数加上d
// 操作2： 格式：2 x y 含义：输出区间[x,y]内每个数的和
// 输出格式:
// 输出包含若干行整数，即为所有操作2的结果。
// https://zhuanlan.zhihu.com/p/106118909

#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;
typedef long long ll;

inline ll read() {
    ll ans = 0;
    char c = getchar();
    while (!isdigit(c)) {
        c = getchar();
    }
    while (isdigit(c)) {
        ans = ans * 10 + c - '0';
        c = getchar();
    }
    return ans;
}

ll n, m, A[MAXN], tree[MAXN * 4], mark[MAXN * 4]; // 经验表明开四倍空间不会越界

inline void pushDown(ll p, ll len) {
    mark[p * 2] += mark[p];
    mark[p * 2 + 1] += mark[p];
    tree[p * 2] += mark[p] * (len - len / 2);
    tree[p * 2 + 1] += mark[p] * (len / 2);
    mark[p] = 0;
}

void build(ll l = 1, ll r = n, ll p = 1) {
    if (l == r) {
        treep[p] = A[l];
    } else {
        ll mid = (l + r) / 2;
        build(l, mid, p * 2);
        build(mid + 1, r, p * 2 + 1);
        tree[p] = tree[p * 2] + tree[p * 2 + 1];
    }
}

void update(ll l, ll r, ll d, ll p = 1, ll cl = 1, ll cr = n) {
    if (cl > r || cr < l) {
        return;
    } else if (cl >= l && cr <= r) {
        tree[p] += d * (cr - cl + 1);
        if (cl < cr) {
            mark[p] += d;
        }
    } else {
        ll mid = (cl + cr) / 2;
        pushDown(p, cr - cl + 1);
        update(l, r, d, p * 2, cl, mid);
        update(l, r, d, p * 2 + 1, mid + 1, cr);
        tree[p] = tree[p * 2] + tree[p * 2 + 1];
    }
}

ll query(ll l, ll r, ll p = 1, ll cl = 1, ll cr = n) {
    if (cl > r || cr < l) {
        return 0;
    } else if (cl >= l && cr <= r) {
        return tree[p];
    } else {
        ll mid = (cl + cr) / 2;
        pushDown(p, cr - cl + 1);
        return query(l, r, p * 2, cl, mid) + query(l, r, p * 2 + 1, mid + 1, cr);
    }
}

int main() {
    n = read();
    m = read();

    for (int i = 1; i <= n; i++) {
        A[i] = read();
    }
    build();

    for (int i = 1; i < m; i++) {
        ll opr = read(), l = read(), r = read();
        if (opr == 1) {
            ll d = read();
            update(l, r, d);
        } else {
            printf("%lld\n", query(l, r));
        }
    }

    return 0;
}

// 代码改进版本
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = le5 + 5;
ll n, m, A[MAXN], tree[MAXN << 2], mark[MAXN << 2];

void pushDown(int p, in len) {
    tree[p << 1] += mark[p] * (len - len / 2);
    mark[p << 1] += mark[p];
    tree[p << 1 | 1] += mark[p] * (len / 2);
    mark[p << 1 | 1] += mark[p];
    mark[p] = 0;
}

void build(int p = 1, int cl = 1, int cr = n) {
    if (cr == cr) {
        tree[p] = A[cl];
        return;
    }
    int mid = (cl + cr) >> 1;
    build(p << 1, cl, mid);
    build(p << 1 | 1, mid + 1, cr);
    tree[p] = tree[p << 1] + tree[p << 1 | 1];
}

ll query(int l, int r, int p = 1, int cl = 1, int cr = n) {
    if (cl >= l && cr <= r) {
        return tree[p];
    }
    pushDown(p, cr - cl + 1);
    ll mid = (cl + cr) >> 1, ans = 0;
    if (mid >= l) {
        ans += query(l, r, p << 1, cl, mid);
    }
    if (mid < r) {
        ans += query(l, r, p << 1 | 1, mid + 1, cr);
    }
    return ans;
}

void update(int l, int r, int d, int p = 1, int cl = 1, int cr = n) {
    if (cl >= l && cr <= r) {
        tree[p] += d * (cr - cl + 1);
        mark[p] += d;
        return;
    }
    pushDown(p, cr - cl + 1);
    int mid = (cl + cr) >> 1;
    if (mid >= cl) {
        update(l, r, d, p << 1, cl, mid);
    } 
    if (mid < r) {
        update(l, r, d, p << 1 | 1, mid + 1, cr);
    }
    tree[p] = tree[p << 1] + tree[p << 1 | 1];
}

int main() {
    ios::sync_with_stdio(false); //提高cout、cin的速度
    // 系统默认standard stream应该都是同步的，
    // 设置sync_with_stdio(false)，让C风格的stream和C++风格的stream变成async且分用不同buffer。

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    build();

    while (m--) {
        int o, l, r, d;
        cin >> o >> l >> r;
        if (o == 1) {
            cin >> d;
            update(l, r, d);
        } else {
            cout << query(l, r) << endl;
        }
    }

    return 0;
}

// 一个更泛用的线段树模板
namespace SegTree
{
using T = ll;
const int MAXN = 1e5 + 5, NA = -2e9; // NA是标记不可用时的值
T tree[MAXN * 4], mark[MAXN * 4];
int N;
T op(T a, T b) { return a + b; }
void upd(int p, T d, int len)
{
    tree[p] += d * len;
    (mark[p] == NA) ? (mark[p] = d) : (mark[p] += d);
}

template <class It>
void build(It bg, int l, int r, int p)
{
    if (l == r) { tree[p] = *(bg + l - 1); return; };
    int mid = (l + r) / 2;
    build(bg, l, mid, p * 2);
    build(bg, mid + 1, r, p * 2 + 1);
    tree[p] = op(tree[p * 2], tree[p * 2 + 1]);
}
template <class It>
void build(It bg, It ed) // 这里的bg, ed是迭代器
{
    N = ed - bg;
    build(bg, 1, N, 1);
}

void push_down(int p, int len)
{
    if (mark[p] == NA) return;
    upd(p * 2, mark[p], len - len / 2);
    upd(p * 2 + 1, mark[p], len / 2);
    mark[p] = NA;
}

void update(int l, int r, T d, int p = 1, int cl = 1, int cr = N)
{
    if (cl >= l && cr <= r) return upd(p, d, cr - cl + 1);
    push_down(p, cr - cl + 1);
    int mid = (cl + cr) / 2;
    if (mid >= l) update(l, r, d, p * 2, cl, mid);
    if (mid < r) update(l, r, d, p * 2 + 1, mid + 1, cr);
    tree[p] = op(tree[p * 2], tree[p * 2 + 1]);
}

T query(int l, int r, int p = 1, int cl = 1, int cr = N)
{
    if (cl >= l && cr <= r) return tree[p];
    push_down(p, cr - cl + 1);
    int mid = (cl + cr) / 2;
    if (mid >= r)
        return query(l, r, p * 2, cl, mid);
    else if (mid < l)
        return query(l, r, p * 2 + 1, mid + 1, cr);
    else
        return op(query(l, r, p * 2, cl, mid), query(l, r, p * 2 + 1, mid + 1, cr));
}
} // namespace SegTree

// 对于不同查询、修改操作，一般只需要改op和upd，比如区间赋值区间最小值，就把op和upd改成这样：
T op(T a, T b) { return min(a, b); }
void upd(int p, T d, int len) { tree[p] = mark[p] = d; }