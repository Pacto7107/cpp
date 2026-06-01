#define fr(i,s,e) for(int (i) = (s); (i) < (e); (i)++)

using ll = long long;

namespace p7 {
    int div_up(int a, int b) {
        return a / b + int(bool(a % b));
    }
    int dist(int f, int l) {
        if (f - l < 0) return (f - l) * -1;
        return f - l;
    }
}
