#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
typedef long long ll;

ll ev(ll A, ll B, ll cur){
    ll _left = 0LL;
    if(A%cur == 0){
        _left = A;
    }else{ _left = (A/cur + 1)*cur;
    }

    ll _right = 0LL;
    if(B%cur == 0){
        _right = B;
    }else{
        _right = (B/cur)*cur;
    }
    ll three;
    if(_left > _right){
        three = 0;
    } else{
        three = (_right - _left)/cur + 1;
    }
    return three;
}



class FizzBuzzTurbo {
    public:
        vector <long long> counts(long long A, long long B) {
            vector< ll > ans;

            cout<<ev(A, B, 3)<<endl;
            cout<<ev(A, B, 5)<<endl;
            cout<<ev(A, B,15)<<endl;

            ll a, b, c;
            a = ev(A, B, 3);
            b = ev(A, B, 5);
            c = ev(A, B, 15);
            ans.push_back(a-c);
            ans.push_back(b-c);
            ans.push_back(c);


            return ans;
        }
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, long long p0, long long p1, bool hasAnswer, vector <long long> p2) {
    cout << "Test " << testNum << ": [" << p0 << "," << p1;
    cout << "]" << endl;
    FizzBuzzTurbo *obj;
    vector <long long> answer;
    obj = new FizzBuzzTurbo();
    clock_t startTime = clock();
    answer = obj->counts(p0, p1);
    clock_t endTime = clock();
    delete obj;
    bool res;
    res = true;
    cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    if (hasAnswer) {
        cout << "Desired answer:" << endl;
        cout << "\t" << "{";
        for (int i = 0; int(p2.size()) > i; ++i) {
            if (i > 0) {
                cout << ",";
            }
            cout << p2[i];
        }
        cout << "}" << endl;
    }
    cout << "Your answer:" << endl;
    cout << "\t" << "{";
    for (int i = 0; int(answer.size()) > i; ++i) {
        if (i > 0) {
            cout << ",";
        }
        cout << answer[i];
    }
    cout << "}" << endl;
    if (hasAnswer) {
        if (answer.size() != p2.size()) {
            res = false;
        } else {
            for (int i = 0; int(answer.size()) > i; ++i) {
                if (answer[i] != p2[i]) {
                    res = false;
                }
            }
        }
    }
    if (!res) {
        cout << "DOESN'T MATCH!!!!" << endl;
    } else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
        cout << "FAIL the timeout" << endl;
        res = false;
    } else if (hasAnswer) {
        cout << "Match :-)" << endl;
    } else {
        cout << "OK, but is it right?" << endl;
    }
    cout << "" << endl;
    return res;
}
int main() {
    bool all_right;
    all_right = true;

    long long p0;
    long long p1;
    vector <long long> p2;

    {
        // ----- test 0 -----
        p0 = 1ll;
        p1 = 1ll;
        long long t2[] = {1ll,0ll,0ll};
        p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
        all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
        // ------------------
    }

    {
        // ----- test 1 -----
        p0 = 2ll;
        p1 = 6ll;
        long long t2[] = {2ll,1ll,0ll};
        p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
        all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
        // ------------------
    }

    {
        // ----- test 2 -----
        p0 = 150ll;
        p1 = 165ll;
        long long t2[] = {4ll,2ll,2ll};
        p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
        all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
        // ------------------
    }

    {
        // ----- test 3 -----
        p0 = 474747ll;
        p1 = 747474ll;
        long long t2[] = {72728ll,36363ll,18182ll};
        p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
        all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
        // ------------------
    }

    if (all_right) {
        cout << "You're a stud (at least on the example cases)!" << endl;
    } else {
        cout << "Some of the test cases had errors." << endl;
    }
    return 0;
}
// END KAWIGIEDIT TESTING
