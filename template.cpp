#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vs = vector<string>;
using vb = vector<bool>;

#define all(V) (V).begin(), (V).end()
#define FU(i, a, b) for (ll i = a; i < b; ++i)
#define fu(i, b) FU(i, 0, b)
#define FD(i, a, b) for (ll i = (b) - 1; i >= a; --i)
#define fd(i, b) FD(i, 0, b)

#define TRACE(x) x
#define WATCH(x) TRACE(cout << #x" = " << x << endl)
#define WATCHR(a, b) TRACE(for (auto it = a; it != b; it++) cout << *it << " "; cout << endl)
#define WATCHC(V) TRACE({cout << #V" = "; WATCHR(V.begin(), V.end());})

const double EPS = 1.e-8;
int cmp(double x, double y, double tol = EPS) {
  return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cout << fixed << setprecision(15);
}
