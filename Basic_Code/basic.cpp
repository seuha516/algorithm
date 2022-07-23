#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define vi vector<int>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vpii vector<pair<int, int>>
#define IFT if(TEST)
#define TEST 1

using namespace std;

int main() {
	
	int TC;	scanf("%d", &TC);
	while (TC--) {
		
		vi v;
		int n; scanf("%d", &n);
		int n, k; scanf("%d %d", &n, &k);

		for (int i = 0; i < n; i++)	{
			int x; scanf("%d", &x);
			v.push_back(x);
		}
		
	}

	return 0;
}


































const double PI = acos(-1);
typedef complex<double> cpx; //복소수

vector<ull> a_list={2, 325, 9375, 28178, 450775, 9780504, 1795265022}; //밀러 라빈

int x_4[4] = {-1, 1, 0, 0}; int y_4[4] = {0, 0, -1, 1};
int x_8[8] = {-1, -1, -1, 0, 0, 1, 1, 1}; int y_8[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int kx_8[8] = {-2, -2, -1, -1, 1, 1, 2, 2}; int ky_8[8] = {1, -1, 2, -2, 2, -2, 1, -1}; //나이트의 이동


// 벡터 및 배열 출력
template <typename T>
void show_vec(vector<T>& v) {
	printf("\n< vector >\n");
	for (int i = 0; i < v.size(); i++) {
		cout << *(v.begin() + i) << " ";
	}
	printf("\n--------------------------\n");
}
template <typename T>
void show_vec(vector<vector<T>>& v) {
	printf("\n< vector >\n");
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << *(v[i].begin() + j) << " ";
		}
		printf("\n");
	}
	printf("\n--------------------------\n");
}
template <typename T>
void show_vec(vector<pair<T, T>>& v) {
	printf("\n< vector >\n");
	for (int i = 0; i < v.size(); i++) {
		cout << "( " << (v.begin() + i)->first << ", " << (v.begin() + i)->second << " )" << " ";
	}
	printf("\n--------------------------\n");
}
void show_vec(vector<cpx>& v) {
	printf("\n< vector >\n");
	for (int i = 0; i < v.size(); i++) {
		cout << "( " << (v.begin() + i)->real() << ", " << (v.begin() + i)->imag() << " )" << " ";
	}
	printf("\n--------------------------\n");
}
template <typename T>
void show_arr(T arr[], int n) {  
	printf("\n< array >\n");
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	printf("\n--------------------------\n");
}
template <typename T>
void show_arr(T(*arr)[999], int a, int b) {  
	printf("\n< array >\n");
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j] << " ";
		}
		printf("\n");
	}
	printf("\n--------------------------\n");
}


//정수론 관련
template <typename T>
T gcd(T a, T b) {
	return a % b == 0 ? b : gcd(b, a % b);
}
template <typename T>
void eea(T a, T b, T &ret1, T &ret2) {
	T A = a, B = b;
	T s_0 = 1, t_0 = 0, s_1 = 0, t_1 = 1;
	while (1) {
		if(a % b == 0) break;
		T temp_0 = s_0 - (s_1 * (a / b)), temp_1 = t_0 - (t_1 * (a / b));
		T temp = a % b;
		a = b; b = temp;
		s_0 = s_1; t_0 = t_1; s_1 = temp_0; t_1 = temp_1;
	}
	ret1 = s_1; ret2 = t_1;
}
template <typename T>
T mod_inv(T x, T mod) {
	if(gcd(x, mod) != 1) return -1; //모듈러 역원이 없다
	T ret1, ret2;
	eea(x, mod, ret1, ret2);
	if (ret1 < 0) ret1 += mod;
	return ret1;
}
template <typename T>
T crt(const vector<T> gap, const vector<T> mod) {
	T ret = 0;
	T modgop = 1; for (int i = 0; i < mod.size(); i++) modgop *= mod[i];
	for (int i = 0; i < gap.size(); i++) {
		T a = modgop / mod[i];
		T modinv = mod_inv(a, mod[i]);
		ret += gap[i] * modinv * a;
	}
	return ret % modgop;
}


//거듭제곱 관련 
template <typename T>
int jari(T x) {
	int ret = 0;
	while (x) {
		x /= 10; ret++;
	}
	return ret;
}
int int_pow(int x, int y) {   
	int ret = 1;
	for(int i = 0; i < y; i++) {
		ret *= x;
	}
	return ret;
}
ll ll_pow(ll x, ll y) { 
	ll ret = 1;
	for (int i = 0; i < y; i++) {
		ret *= x;
	}
	return ret;
}
ll ll_mod_pow(ll a, ll k, ll mod) {
	ll ret = 1;
	while (k) {
		if (k & 1) {
			ret *= a; ret %= mod;
		}
		k >>= 1; a *= a; a %= mod;
	}
	return ret % mod;
}
ull add_mod(ull x, ull y, ull mod) {
	x %= mod; y %= mod; return (x >= mod - y ? x - (mod - y) : x + y);
}
ull mul_mod(ull x, ull y, ull mod) {
	x %= mod; y %= mod; 
	ull ret = 0ULL;
	while (y) {
		if  (y & 1) ret = add_mod(ret, x, mod);
		x = add_mod(x, x, mod);
		y >>= 1;
	}
	return ret;
}
ull pow_mod(ull x, ull y, ull mod) {
	x %= mod;
	ull ret = 1ULL;
	while (y) {
		if (y & 1) ret = mul_mod(ret, x, mod);
		x = mul_mod(x, x, mod);
		y  >>= 1;
	}
	return ret;
}


//소수 찾기 
vector<int> sosu;
vector<int> min_soinsoo;
int sosu_gaesoo;
void sosu_make(int N) {
	min_soinsoo.assign(2, -1);
	for (int i = 2; i <= N; i++) min_soinsoo.push_back(i);
	int sqrtN = (int)(sqrt(N));
	for (int i = 2; i <= sqrtN; i++) {
		if (min_soinsoo[i] == i) {
			for (int j = i * i; j <= N; j += i) {
				if (min_soinsoo[j] == j) {
					min_soinsoo[j] = i;
				}
			}
		}
	}
	for (int i = 2; i <= N; i++) {
		if (min_soinsoo[i] == i) sosu.push_back(i);
	}
	sosu_gaesoo = sosu.size();
}


//밀러 라빈, 폴라드 로 
bool miller_rabin(ull n, ull a) {
	ull d = n - 1;
	while (!(d & 1)) {
		if (pow_mod(a, d, n) == n - 1) return true;
		d >>= 1;
	}
	ull temp = pow_mod(a, d, n);
	return temp == n - 1 || temp == 1;
}
bool is_prime(ull n) {
	if (n <= 1) return false;
	if (n <= 10000000000ULL) {
		for (ull i = 2; i * i <= n; i++) if (n % i == 0) return false;
		return true;
	}
	for (ull a : a_list) if (!miller_rabin(n, a)) return false;
	return true;
}
ull rho_f(ull x, ull c, ull mod) {
	return add_mod(mul_mod(x, x, mod), c, mod);
}
ull rho(ull n, ull x0, ull c){
	ull x = x0, y = x0, ret = 1;
	while (ret == 1) {
		x = rho_f(x, c, n);
		y = rho_f(y, c, n); y = rho_f(y, c, n);
		ret = gcd(x > y ? x - y : y - x, n);
	}
	return ret;
} 
ull find_soinsoo(ull n) {
	if (n == 1ULL) return 1;
	if (n <= 10000000000ULL) {
		for (unsigned long long i = 2; i * i <= n; i++) if (n % i == 0) return i;
		return n;
	}
	if (is_prime(n)) return n;
	ull ret = rho(n, 1, 1);
	if (ret == n) ret = rho(n, 1, -1);
	int temp_c = 2;
	while (ret == n) ret = rho(n, 1, temp_c++);
	return ret;
}
vector<ull> soinsoo; 
void soinsoo_divide(ull n) {
	if (n == 1) return;
	if (find_soinsoo(n) == n) {
		soinsoo.push_back(n); return;
	}
	soinsoo_divide(find_soinsoo(n));
	soinsoo_divide(n / find_soinsoo(n));
	return;
}


//FFT, NTT
void fft(vector<cpx> &a, bool inv) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        while (!((j ^= bit) & bit)) bit >>= 1;
        if (i < j) swap(a[i], a[j]);
    }
    for (int i = 1; i < n; i <<= 1) {
        double x = inv ? PI / i : -PI / i;
        cpx w = {cos(x), sin(x)};
        for (int j = 0; j < n; j += i << 1) {
            cpx th = {1, 0};
            for (int k = 0; k < i; k++) {
                cpx tmp = a[i + j + k] * th;
                a[i + j + k] = a[j + k] - tmp;
                a[j + k] += tmp;
                th *= w;
            }
        }
    }
    if (inv) {
        for (int i = 0; i < n; i++) {
            a[i] /= n;
            a[i] = cpx(round(a[i].real()), round(a[i].imag()));
        }
    }
}
vector<cpx> mul_fft(vector<cpx> a, vector<cpx> b) {
	int n = (int) max(a.size(), b.size());
    int i = 0;
    while ((1 << i) < (n << 1)) i++;
    n = 1 << i;
    a.resize(n); b.resize(n); vector<cpx> c(n);
    fft(a,false);
    fft(b,false);
    for (int i = 0; i < n; i++) {
        c[i] = a[i] * b[i];
    }
    fft(c, true);
    return c;
}
void ntt(vector<ll> &a, bool inv, ll mod, ll w) {
    ll i, j, k, x, y, z;
    int n = a.size();
    j = 0;
    for (i = 1; i < n; i++) {
        int bit = n >> 1;
        while (!((j ^= bit) & bit)) bit >>= 1;
        if (i < j) swap(a[i], a[j]);
    }
    for(i = 1; i < n; i <<= 1) {
        x = ll_mod_pow(inv ? ll_mod_pow(w, mod-2, mod) : w, mod / i >> 1, mod);
        for (j = 0; j < n; j += i << 1) {
            y = 1;
            for (k = 0; k < i; k++) {
                z = a[i|j|k] * y % mod;
                a[i|j|k] = a[j|k] - z;
                if (a[i|j|k] < 0) a[i|j|k] += mod;
                a[j|k] += z;
                if (a[j|k] >= mod) a[j|k] -= mod;
                y = y * x % mod;
            }
        }
    }
    if (inv) {
    	j = ll_mod_pow(n, mod-2, mod);
    	for (i = 0; i < n; i++) a[i] = a[i] * j % mod;
    }
}
vector<ll> mul_ntt(vector<ll> a, vector<ll> b, ll mod, ll w) {
	int n = 2;
    while (n < a.size() + b.size()) n <<= 1;
    a.resize(n); b.resize(n); vector<ll> c(n);
    ntt(a, false, mod, w);
    ntt(b, false, mod, w);
    for (int i = 0; i < n; i++) {
        c[i] = a[i] * b[i] % mod;
    }
    ntt(c, true, mod, w);
    return c;
}


//유니온 파인드 
typedef struct DisjointSet {
	vector<int> parent, rank, num;
	DisjointSet(int n): parent(n), rank(n, 1), num(n, 1) {
		 for(int i = 0; i < n; i++) parent[i] = i;
	}
	int find (int x) {
		if (x == parent[x]) return x;
		return parent[x] = find(parent[x]);
	}
	void merge(int a, int b) {
		a = find(a); b = find(b);
		if (a == b) return;
		if (rank[a] > rank[b]) swap(a, b);
		parent[a] = b;
		num[b] += num[a];
		if (rank[a] == rank[b]) ++rank[b];
	}
	bool same(int a, int b) {
		return find(a) == find(b);
	}	
	int size(int a) {
		return num[find(a)];
	}	
} dj;


//벡터 구조체
typedef struct Vector {
	double x, y;
	explicit Vector(double x_ = 0, double y_ = 0): x(x_), y(y_) {}
	bool operator == (const Vector &a) const {
		return x == a.x && y == a.y;
	}
	bool operator < (const Vector &a) const { 
		return x != a.x? x < a.x : y < a.y;
	}
	Vector operator + (const Vector &a) const {
		return Vector(x + a.x, y + a.y);
	}
	Vector operator - (const Vector &a) const {
		return Vector(x - a.x, y - a.y);
	}
	Vector operator * (double a) const {
		return Vector(x * a, y * a);
	}
	double length() const {return hypot(x, y);}
	Vector normalize() const {return Vector(x / length(), y / length());}
	double angle() const {return fmod(atan2(y, x) + 2*PI, 2*PI);}
	double dot(const Vector &a) const {return x * a.x + y * a.y;}
	double cross(const Vector &a) const {return x * a.y - y * a.x;}
	Vector shadow(const Vector &a) const {
		Vector r = a.normalize();
		return r * r.dot(*this);
	}	
} vec;
double ccw(vec a, vec b, vec c) {
	return (b - a).cross(c - a);
}
bool segline_meet(vec a, vec b, vec c, vec d) {
	double ab = ccw(a, b, c) * ccw(a, b, d);
	double cd = ccw(c, d, a) * ccw(c, d, b);
	if (ab == 0 && cd == 0) {
		if (ccw(a, b, c) == 0 && ccw(a, b, d) == 0) {
			if (b < a) swap(a, b);
			if (d < c) swap(c, d);
			return !(b < c || d < a);
		} else {
			return 1;
		}
	} else {
		return ab <= 0 && cd <= 0;
	}
}
bool segline_meet(vec a, vec b, vec c, vec d, vec &ret){
	double ab = ccw(a, b, c) * ccw(a, b, d);
	double cd = ccw(c, d, a) * ccw(c, d, b);
	if (ab == 0 && cd ==0 ) {
		if (ccw(a, b, c) == 0 && ccw(a, b, d) == 0) {
			if (b < a) swap(a, b);
			if (d < c) swap(c, d);
			if (b == c) ret = b; else if (d == a) ret = d; 
			return !(b < c || d < a);
		} else {
			if (a == c || a == d) ret = a; else ret = b;
			return 1;
		}
	} else {
		if (ab <= 0 && cd <= 0) {
			double p = (c - a).cross(d - c);
			p /= (b - a).cross(d - c);
			ret = a + (b - a) * p;
		}
		return ab <= 0 && cd <= 0;
	}
}
bool isinside(vec p, vector<vec> v){
	int meet = 0;
	for (int i = 0; i < v.size(); i++) {
		vec a = v[i]; vec b = v[(i + 1) % v.size()];
		if ((a.y > p.y) != (b.y > p.y)) {
			double x;
			x = v[i].x + ((v[(i + 1) % v.size()].x - v[i].x) * (p.y - v[i].y) / (v[(i + 1) % v.size()].y - v[i].y));
			if (x > p.x) meet++;
		}
		
	}
	return meet % 2 > 0;
}


//문자열 검색
vector<int> kmp(const string &H, const string &N) {
	int Hsize = H.size(), Nsize = N.size();

	vector<int> pi(Nsize, 0);
	int begin = 1, mat = 0;
	while (begin + mat < Nsize) {
		if (N[begin + mat] == N[mat]) {
			mat++;
			pi[begin + mat - 1] = mat;
		} else {
			if (mat == 0) begin++;
			else {
				begin += mat - pi[mat - 1];
				mat = pi[mat - 1];
			}
		}
	}
	
	vector<int> ret;
	int st = 0, already_match = 0;
	while (st <= Hsize - Nsize) {
		int matched = already_match;		
		for (int i = already_match; i < Nsize; i++) {
			if (H[st + i] != N[i]) break;
			matched++;
		}
		if (matched == Nsize) ret.push_back(st);
		if (matched == 0) st++;
		else {
			st += matched - pi[matched - 1];
			already_match = pi[matched - 1];			
		}	
	}
	
	return ret;
}
int str_overlap(const string &H, const string &N){
	int Hsize = H.size(), Nsize = N.size();
	vector<int> pi(Nsize, 0); 
	int begin = 1, mat = 0;
	while (begin + mat < Nsize) {
		if (N[begin + mat] == N[mat]) {
			mat++;
			pi[begin + mat - 1] = mat;
		} else {
			if (mat == 0) begin++;
			else{
				begin += mat - pi[mat - 1];
				mat = pi[mat - 1];
			}
		}
	}
	int X = 0;
	int st = 0, matched = 0;
	while (st < Hsize) {
		if (matched < Nsize && H[st + matched] == N[matched]) {
			matched++;
			if (st + matched == Hsize) return matched;
		} else {
			if (matched == 0) st++;
			else {
				st += matched - pi[matched - 1];
				matched = pi[matched - 1];
			}
		}
	}
	return 0;
}
struct Comparator {
	const vector<int> &group;
	int t;
	Comparator(const vector<int> &_group, int _t): group(_group), t(_t) {}
	bool operator () (int a, int b) {
		if (group[a] != group[b]) return group[a] < group[b];
		return group[a + t] < group[b + t];
	}
};
vector<int> suffix_array(const string &s) {
	int n = s.size();
	int t = 1;
	vector<int> group(n + 1);
	for (int i = 0; i < n; i++) group[i] = s[i];
	group[n] = -1;
	vector<int> ret(n);
	for (int i = 0; i < n; i++) ret[i] = i;
	while (t < n){
		Comparator cp(group, t);
		sort(ret.begin(), ret.end(), cp);
		t *= 2;
		if(t >= n)break;
		vector<int> newgroup(n + 1);
		newgroup[n] = -1;
		newgroup[ret[0]] = 0;
		for (int i = 1; i < n; i++) {
			if (cp(ret[i - 1], ret[i])) newgroup[ret[i]] = newgroup[ret[i - 1]] + 1;
			else newgroup[ret[i]] = newgroup[ret[i - 1]];
		}
		group = newgroup;
	}
	return ret;
}
vector<int> lcp(const string &s, const vector<int> &sa) {
	vector<int> pos(s.size());
	vector<int> ret(s.size());
	for (int i = 0;i < s.size(); i++) {
		pos[sa[i]] = i;
	}
	for (int i = 0, k = 0; i < sa.size(); i++, k = max(k - 1,0)) {
		if(pos[i] == 0) continue;
		for (int j = sa[pos[i]-1]; s[i + k] == s[j + k]; k++);
		ret[pos[i]] = k;
	}
	return ret;
}


//세그먼트 트리 
vector<ll> seg_tree;
ll seg_init(const vector<ll> &v, int l, int r, int node) {
	if (l == r) return seg_tree[node] = v[l];
	int m = (l + r) / 2;
	ll L = seg_init(v, l, m, node * 2 + 1);
	ll R = seg_init(v, m + 1, r, node * 2 + 2); 
	ll ret = L + R;
	return seg_tree[node] = ret;
}
void seg_make(const vector<ll> &v) {
	int size = v.size(); size *= 4;
	seg_tree.clear(); seg_tree.resize(size);
	seg_init(v, 0, size / 4 - 1, 0);
}
void seg_update(int node, int st, int end, int idx, ll diff) {
	if (idx < st || idx > end) return;
	seg_tree[node] = seg_tree[node] + diff;
	if (st != end) {
		seg_update(node * 2 + 1, st, (st + end) / 2, idx, diff);
		seg_update(node * 2 + 2, (st + end) / 2 + 1, end, idx, diff);
	}
}
ll seg_find(int node, int node_l, int node_r, int l, int r) {
	if (node_l == l && node_r == r) {
		return seg_tree[node];
	} else {
		int mid = (node_l + node_r) / 2;
		if (r <= mid) return seg_find(node * 2 + 1, node_l, mid, l, r);
		else if (l > mid) return seg_find(node * 2 + 2, mid + 1, node_r, l, r);
		else return seg_find(node * 2 + 1, node_l, mid, l, mid) + seg_find(node * 2 + 2, mid + 1, node_r, mid + 1, r);
	}
}


//스플레이 트리 
struct splay_node {
	splay_node *l, *r, *p;
	int key, cnt, sum;
} *tree;
void s_update(splay_node *x) {
	x->cnt = 1;
	x->sum = x->key;
	if (x->l) {
		x->cnt += x->l->cnt;
		x->sum += x->l->sum;
	}
	if (x->r) {
		x->cnt += x->r->cnt;
		x->sum += x->r->sum;
	}
}
void s_rotate(splay_node* x) {
	splay_node* p = x->p;
	splay_node* b = NULL;
	if (!p) return;
	if (x == p->l) {
		p->l = b = x->r;
		x->r = p;
	} else {
		p->r = b = x->l;
		x->l = p;
	}
	x->p = p->p;
	p->p = x;
	if (b) b->p = p;
	(x->p ? (p == x->p->l ? x->p->l : x->p->r) : tree) = x;
	s_update(p); s_update(x);
}
void s_splay(splay_node* x) {
	while (x->p) {
		splay_node *p = x->p;
		splay_node *g = p->p;
		if (g) {
			if ((x == p->l) == (p == g->l)) s_rotate(p);
			else s_rotate(x);
		}
		s_rotate(x);
	}
}
void s_insert(int key) {
	splay_node* p = tree;
	splay_node** pp;
	if (!p) {
		splay_node* x = new splay_node;
		tree = x;
		x->l = x->r = x->p = NULL;
		x->key = key;
		return;
	}
	while (1) {
		if (key == p->key) return;
		if (key < p->key){
			if (!p->l) {
				pp=&p->l; break;
			}
			p=p->l;
		}else{
			if(!p->r){
				pp = &p->r; break;
			}
			p = p->r;
		}
	}
	splay_node* x = new splay_node;
	*pp = x;
	x->l = x->r = NULL;
	x->p = p;
	x->key = key;
	s_splay(x);
}
bool s_find(int key) {
	splay_node* p = tree;
	if (!p) return false;
	while (p) {
		if (key == p->key) break;
		if (key < p->key) {
			if (!p->l) break;
			p = p->l;
		} else {
			if (!p->r) break;
			p = p->r;
		}
	}
	s_splay(p);
	return key == p->key;
}
void s_delete(int key) {
	if (!s_find(key)) return;
	splay_node* p = tree;
	if (p->l && p->r) {
		tree = p->l; tree->p = NULL;
		splay_node* x = tree;
		while (x->r) x = x->r;
		x->r = p->r;
		p->r->p = x;
		delete p;
		return;
	}
	if (p->l) {
		tree = p->l;
		tree->p = NULL;
		delete p;
		return;
	}
	if (p->r) {
		tree = p->r;
		tree->p = NULL;
		delete p;
		return;
	}
	delete p;
	tree = NULL;
}
void s_kth(int k) {
	splay_node* x = tree;
	while (1) {
		while (x->l && x->l->cnt > k) x = x->l;
		if (x->l) k -= x->l->cnt;
		if (!k--) break;
		x = x->r;
	}
	s_splay(x);
}
void s_init(int n) {
	splay_node* x;
	tree = x = new splay_node;
	x->l = x->r = x->p = NULL;
	x->cnt = n;
	x->sum = x->key = 0;
	for (int i = 1; i < n; i++) {
		x->r = new splay_node;
		x->r->p = x;
		x = x->r;
		x->l = x->r = NULL;
		x->cnt = n-i;
		x->sum = x->key = 0;
	}
}
void s_add(int i, int addnum) {
	s_kth(i);
	tree->sum += addnum;
	tree->key += addnum;
}
void s_interval(int l, int r) {
	s_kth(l - 1);
	splay_node* x = tree;
	tree = x->r;
	tree->p = NULL;
	s_kth(r - l + 1);
	x->r = tree;
	tree->p = x;
	tree = x;
}
int s_sum(int l, int r) {
	s_interval(l, r);
	return tree->r->l->sum;
}


//트라이 
struct trie_node {
	trie_node* children[26];
	int terminal;
	trie_node* fail;
	vector<int> output;
	trie_node() {
		terminal = -1;
		memset(children, 0, sizeof(children));
	}
	~trie_node() {
		for(int i = 0; i < 26; i++) if (children[i]) delete children[i];
	}
	void insert(const char* key, int id) {
		if (*key == 0) terminal = id;
		else {
			int next = *key - 'a';
			if (children[next] == NULL) {
				children[next] = new trie_node();
			}
			children[next]->insert(key + 1, id);
		}
	}
	trie_node* find(const char* key) {
		if (*key == 0) return this;
		int next = *key - 'a';
		if (children[next] == NULL) return NULL;
		return children[next]->find(key + 1);
	}
};
void make_failfunc(trie_node* root) {
	queue<trie_node*> q;
	root->fail = root;
	q.push(root);
	while (!q.empty()) {
		trie_node* here = q.front(); q.pop();
		for (int i = 0; i < 26; i++) {
			trie_node* child = here->children[i];
			if (!child) continue;
			if (here == root) child->fail = root;
			else {
				trie_node* temp = here->fail;
				while (temp != root && temp->children[i] == NULL) {
					temp = temp->fail;
				}
				if (temp->children[i]) temp = temp->children[i];
				child->fail = temp;
			}
			child->output = child->fail->output;
			if (child->terminal != -1) child->output.push_back(child->terminal);
			q.push(child);
		}
	}
}
vector<pair<int,int>> ahocorasick(const string &s, trie_node* root) {
	vector<pair<int,int>> ret;
	trie_node* state = root;
	for (int i = 0; i < s.size(); i++) {
		int chr = s[i] - 'a'; 
		while (state != root && state->children[chr] == NULL) state = state->fail; 
		if (state->children[chr]) state = state->children[chr];
		for (int j = 0; j < state->output.size(); j++) ret.push_back({i, state->output[j]});
	}
	return ret;
}


//단절점, SCC, 2-SAT
vector<vector<int>> adj;
vector<int> ssc_id; //-1로 초기화 
stack<int> ssc_st;
vector<int> discovered; //-1로 초기화 
vector<bool> cut_v;
int dis_cnt, ssc_cnt, vertex_cnt;
int find_cut_v(int now, bool root) {
	discovered[now] = dis_cnt++;
	int ret = discovered[now];
	int children = 0;
	for (int i = 0; i < adj[now].size(); i++) {
		int next = adj[now][i];
		if (discovered[next] == -1) {
			children++;
			int subtree = find_cut_v(next, 0);
			if (!root&&subtree >= discovered[now]) cut_v[now] = 1;
			ret = min(ret, subtree);
		} else {
			ret = min(ret, discovered[next]);
		}
	}
	if (root) cut_v[now] = (children >= 2);
	return ret;
}
int ssc(int now) {
	int ret = discovered[now] = vertex_cnt++;
	ssc_st.push(now);
	for (int i = 0; i < adj[now].size(); i++) {
		int next = adj[now][i];
		if (discovered[next] == -1) {
			ret = min(ret, ssc(next));
		} else if (ssc_id[next] == -1) {
			ret = min(ret, discovered[next]); 
		}
	}
	if (ret == discovered[now]) {
		while (1) {
			int t = ssc_st.top(); ssc_st.pop();
			ssc_id[t] = ssc_cnt;
			if (t == now) break;
		}
		ssc_cnt++;
	}
	return ret;
}
vector<int> tarjan_ssc() {
	ssc_id = discovered = vector<int>(adj.size(), -1);
	ssc_cnt = vertex_cnt = 0;
	for (int i = 0; i < adj.size(); i++) {
		if (discovered[i] == -1) ssc(i);
	}
	return ssc_id;
}
bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}
vector<int> solve_2sat() {
	int n = adj.size() / 2;
	vector<int> result = tarjan_ssc();
	for (int i = 0; i < 2 * n; i += 2) {
		if (result[i] == result[i + 1]) return vector<int>();
	}
	vector<int> val(2 * n, -1);
	vector<pair<int,int>> order;
	for (int i = 0; i < 2 * n; i++) {
		order.push_back({result[i], i});
	}
	sort(order.begin(), order.end(), cmp);
	for (int i = 0; i < 2 * n; i++) {
		int vertex = order[i].second;
		int var = vertex / 2, istrue = (vertex % 2 == 0 ? 1 : 0);
		if (val[var] != -1) continue;
		val[var] = 1 - istrue;
	}
	return val;
}


//최단거리 알고리즘
vector<int> dijkstra(const vector<pair<int,int>> adj[], int n, int st) {
	vector<int> dist(n, 987654321);
	dist[st] = 0;
	priority_queue<pair<int,int>> pq;
	pq.push({0, st});
	while (!pq.empty()) {
		int D = -pq.top().first; int V = pq.top().second; pq.pop();
		if (dist[V] < D) continue;
		for (int i = 0; i < adj[V].size(); i++) {
			int next = adj[V][i].first;
			int dis = adj[V][i].second + D;
			if (dist[next] > dis) {
				dist[next] = dis;
				pq.push({-dis, next});
			}
		}
	}
	return dist;
} 
vector<int> bellman(const vector<pair<int,int>> adj[], int n, int st) {
	vector<int> upper(n, 987654321);
	upper[st] = 0;
	bool updated;
	for (int i = 0; i < n; i++) {
		updated = 0;
		for (int j = 0; j < n; j++) {
			if (upper[j] == 987654321) continue; //영향 없는 음의 사이클 
			for (int k = 0; k < adj[j].size(); k++) {
				int next = adj[j][k].first;
				int cost = adj[j][k].second;
				if (upper[next] > upper[j] + cost) {
					upper[next] = upper[j] + cost; updated = 1;
				}
			}
		}
		if (!updated) break;
	}
	if (updated) upper.clear();
	return upper;
} 
vector<vector<int>> floyd(const vector<pair<int,int>> adj[], int n) {
	vector<vector<int>> ret(n);
	for (int i = 0; i < n; i++) ret[i] = vector<int>(n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			if (i != j) ret[i][j] = 987654321;
			else ret[i][j] = 0;
		}	
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < adj[i].size(); j++) {
			ret[i][adj[i][j].first] = min(ret[i][adj[i][j].first], adj[i][j].second);
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				ret[i][j] = min(ret[i][j], ret[i][k] + ret[k][j]);
			}
		}
	}
	return ret;
} 


//네트워크 플로우
int capacity[100][100], flow[100][100];
int network_flow(int source, int sink) {
	memset(flow, 0, sizeof(flow));
	int ret = 0;
	while (1) {
		vector<int> p(100, -1);
		queue<int> q;
		p[source] = source;
		q.push(source);
		while (!q.empty() && p[sink] == -1) {
			int now = q.front(); q.pop();
			for (int i = 0; i < 100; i++) {
				if (capacity[now][i] - flow[now][i] > 0 && p[i] == -1) {
					q.push(i); p[i] = now;
				}
			}
		}
		if (p[sink] == -1) break;
		int input = 987654321;
		for (int i = sink; i != source; i = p[i]) {
			input = min(input, capacity[p[i]][i] - flow[p[i]][i]);
		}
		for (int i = sink; i != source; i = p[i]) {
			flow[p[i]][i] += input; flow[i][p[i]] -= input;
		}
		ret += input;
	}
	return ret;
}

