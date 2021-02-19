#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> VI;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define EACH(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define eprintf(...) fprintf(stderr, __VA_ARGS__)

template<class T> inline void amin(T &x, const T &y) { if (y<x) x=y; }
template<class T> inline void amax(T &x, const T &y) { if (x<y) x=y; }
template<class Iter> void rprintf(const char *fmt, Iter begin, Iter end) {
    for (bool sp=0; begin!=end; ++begin) { if (sp) putchar(' '); else sp = true; printf(fmt, *begin); }
    putchar('\n');
}
struct PMA {
    struct Node {
    Node *ch, *sib, *fail;
    char c;
    LL cnt;
        Node() : ch(0), sib(0), fail(0), c(0), cnt(0) { }

    struct Iter {
        Node *x;
        Iter(Node *x_) : x(x_) {}
        operator Node*() { return x; }
        Node *operator->() { return x; }
        void operator++() { x = x->sib; }
        bool operator!=(const Iter & y) const { return x != y.x; }
        bool operator==(const Iter & y) const { return x == y.x; }
    };
    Iter begin() { return ch; }
    Iter end() { return NULL; }
    };

    Node *root, *nodes;
    int nodes_i;

    PMA() { }

    PMA(const vector<string> &d, const vector<int> &g) {
    int len = 0;
    REP (i, d.size()) len += d[i].size();
    len++;
    nodes_i = 0;
    nodes = new Node[len];
    root = new_node();

    REP (i, d.size()) {
        Node *x = root;
        const string &s = d[i];
        REP (j, s.size()) x = get_child(x, s[j], true);
        x->cnt += g[i];
    }
    
    vector<Node*> ord; ord.reserve(nodes_i);
    ord.push_back(root);
    for (int i=0; i<nodes_i; i++) {
        Node *x = ord[i];
        EACH (ch, *x) ord.push_back(ch);
    }

    root->fail = root;
    EACH (x, *root) x->fail = root;

    for (int i=1; i<nodes_i; i++) {
        Node *x = ord[i];
        EACH (ch, *x) {
        Node *f = x->fail, *y;
        while (!(y=get_child(f, ch->c)) && f != root) f = f->fail;
        ch->fail = y ?: root;
        }
    }

    REP (i, nodes_i) ord[i]->cnt += ord[i]->fail->cnt;
    }

    Node *new_node() {
    return &nodes[nodes_i++];
    }

    Node *get_child(Node *x, char c, bool create=false) {
    if (!x->ch) {
        if (create) {
        x->ch = new_node();
        x->ch->c = c;
        }
        return x->ch;
    } else {
        EACH (ch, *x) {
        if (ch->c == c) return ch;
        if (create && !ch->sib) {
            ch->sib = new_node();
            ch->sib->c = c;
            return ch->sib;
        }
        }
        return NULL;
    }
    }

    LL match(const string &s) {
    Node *x = root;
    LL ret = 0;
    REP (i, s.size()) {
        Node *y = NULL;
        while (!(y=get_child(x, s[i])) && x != root) x = x->fail;
        x = y ?: root;
        ret += x->cnt;
    }
    return ret;
    }

    void clear() {
    delete[] nodes;
    root = nodes = NULL;
    nodes_i = 0;
    }
};

int N;
char buf[2000111];
string S[100111];
int H[100111];
int Q;
string W[100111];
LL ans[100111];

const int MAXN = 1<<17;
VI ids[1<<18];
int L, R, id;
void add(int l, int r, int k) {
    if (L <= l && r <= R) {
    ids[k].push_back(id);
    } else if (R <= l || r <= L) {
    } else {
    add(l, (l+r)/2, k+k);
    add((l+r)/2, r, k+k+1);
    }
}
void calc(int l, int r, int k) {
    if (k < 2 * MAXN) {
    if (ids[k].size()) {
        PMA pma(vector<string>(S+l, S+r), VI(H+l, H+r));
        EACH (e, ids[k]) {
        ans[*e] += pma.match(W[*e]);
        }
        pma.clear();
    }
    calc(l, (l+r)/2, k+k);
    calc((l+r)/2, r, k+k+1);
    }
}

int main() {
    scanf("%d", &N);
    REP (i, N) {
    scanf("%s", buf);
    S[i] = buf;
    }
    REP (i, N) scanf("%d", H+i);
    scanf("%d", &Q);
    REP (i, Q) {
    scanf("%d%d%s", &L, &R, buf);
    R++;
    id = i;
    W[i] = buf;
    add(0, MAXN, 1);
    }

    calc(0, MAXN, 1);
    auto p = minmax_element(ans, ans + Q);

    printf("%lld %lld\n", *p.first, *p.second);

    return 0;
}

