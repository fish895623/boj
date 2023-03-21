#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> v;
  string s;

  while (cin >> s)
    v.push_back(s);

  for (int i = 0; i != v.size(); ++i)
    cout << v[i] << endl;
}
