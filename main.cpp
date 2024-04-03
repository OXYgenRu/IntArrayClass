#include <bits/stdc++.h>
#include <random>
#include "IntArray.h"
//               ,g@▓▓▓▓▓▓▓▄æ╖,
//           ,▄▄▄▓▓▓▓▓▓╣▓▓▒▀▓▒╢▒▒▓▓,
//         ▄▓▓███▓▓▓▓▓╣▓▓▓╬╫▓▓▓▓╣░▀▓▓
//       ,█▓▓▓███▓▓▓▓▓▓▓╣╣▓▓▓█▓▓╢╫╫▓▓▓
//       ▓▌▓▓▓█▓▓▓▓▓▓▓╣╣╣╢▓╢▓█▓▌╢╢╢╢╣╢▓             ▓▓▓╣▓▓▓▓@▄,
//       ╙▓╫▓▓▓▓▓▓█▓▓╣╢╣▒▓▓▓▓▓█▓▓▓╫╣╢▒▓            j▓▓▓▓▓▓▓▓▓▓╫▒▓▓@╦,
//         ▐╬▓██████p ████▓▀▓▓╢▓▓▓▓▓▓▒▓╫▓            ▐▓▓╬▒▒╫▓▒▒▓▓▓▓▓▓▄▓╣N
//        ,▄███▀▀▀▓▓█▓█▓██▓███▓▓▓▓╟▄▓╣▓L         ╓▄▓▓▓▓▓▒╫▓▓▓▓▓▓▒▓▓▓▓▓▌
//   ,▄██▀▀               `▀▀███▓▓▓▓╬╣╟▌      ╓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒Ñ▓╣▓█
// ▄█▀  ,▄                       ▀▀██▓▓▌    ▄██▀``╙"▀▀▀▀▓▀▀╜`   '▀▀▀██▄,
//▐█     `        ]█r                ▀██▄ ▄█▀  á▄                     `▀█▄,
//▐█▄▄▄▄▄▄,,                            ███             ╙▀                ▀█▄
//  ```▀▀▀▀▀▀▀████████▄▄▄▄▄▄▄            ▀█▀███████▄▄▄▄▄▄▄▄,,,,,,           █▄
//           ▐█`          ```             ▀█        █▌ ` `'▀▀▀▀▀▀▀           ▀█
//          ▐█▌                            ██      ▐█                         ▀█
//          ██                              █▌     █`                          ██
//         ██                               "█µ   █▌                            █µ
//        ▐█▌                                ▀█   █                             ▐█
//        ██                              ,   █L █▌                        ,╓▄⌐  █
//       ▐█▌   ,                    ,╓▄▄██▀   ▐█]█   ▄▄,              ,▄▄██▀▀`   █
//       ██    ▀██▄╖            ▄▄███▀▀        ██▌    "▀██▄,     ,▄▄██▀▀         █
//       ██       `▀██▄  , ╓▄███▀"             ██C        `▀█████▀▀'             █
//      ▐█▌           ▀█████▌,                 ██           ███████⌐             █
//      ██U            ████████                ██           ╙█████▀              █
//      ██             ▀█████▀"                █▌                                █

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ll inf = 1e18 + 7;
const ull mod = 1e9 + 7;
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("-O2")
//#pragma GCC optimize("no-stack-protector")
//#pragma GCC optimize("unroull-loops")
//#pragma GCC optimize("fast-math")



int main() {
//    ::freopen("input.txt", "r", stdin);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(0);
    IntArray a1(3);
    a1[0] = 1;
    a1[1] = 2;
    a1[2] = 3;
    IntArray a2(a1);
    int o[3];
    o[0] = 10;
    o[1] = 12;
    o[2] = 123;
    IntArray a(o, 3);
    for (int i = 0; i < a2.size(); i++) {
        cout << a2[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << a.max();
    return 0;
}