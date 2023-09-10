#include <bits/stdc++.h>
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
long long Rand(long long l, long long h) {
    assert(l <= h);
    return l + rd() * 1LL % (h - l + 1);
}
int main(){
    srand(time(NULL));
    string HEC[4] = {"Event Organization", "Finance", "Public Relations", "Content"};
    string answer = HEC[Rand(0, 3)];
    cout << "apply " << answer << endl;
}