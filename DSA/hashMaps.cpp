#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Creation
    unordered_map<string, int> m;
    
    // Insertion

    // 1
    pair<string, int> p = make_pair("Nilesh", 20);
    m.insert(p);

    // 2
    m["Newbie"] = 10;

    // 3
    pair<string, int> q("Bunny", 100);
    m.insert(q);

    // Searching

    // cout << m.at("unknownKey") << endl;
    // But 
    // cout << m["unknownKey"] << endl;    // Creates an entry of <"unknownKey", 0> if not found.
    // cout << m.at("unknownKey") << endl;

    // cout << m["Newbie"] << endl;

    // // Size
    // cout << "Size of map: " << m.size() << endl;

    // // Check presence of a key
    // cout << m.count("Bro") << endl;
    // cout << m.count("Bunny") << endl;

    // // Deleting a key
    // m.erase("unknownKey");
    // cout << "After Deletion: " << m.size() << endl;

    // Traversing a map
    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}