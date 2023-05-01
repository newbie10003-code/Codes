// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     array<int,4>a={1,2,3,4};
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl<<a.at(2)<<endl;
//     cout<<a.front()<<endl;
//     cout<<a.back()<<endl;
//     cout<<a.at(1)<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>a={1,2,3,4};
//     int temp;
//     cin>>temp;
//     a.push_back(temp);
//     cout<<a.size()<<endl;
//     cout<<a.empty()<<endl;
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<a.capacity()<<endl;
//     cout<<a.size()<<endl;
//     a.clear();
//     cout<<a.size()<<endl;
//     cout<<a.capacity()<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     deque<int>d;
//     d.push_back(1);
//     d.push_front(2);
//     for (int i: d )
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     d.pop_front();
//     for (int i: d )
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>l;
//     l.push_back(1);
//     l.push_front(2);
//     for (int i : l)
//     {
//         cout<<i<<' ';
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"After Erase: "<<endl;
//     for (int i : l)
//     {
//         cout<<i<<' ';
//     }
//     cout<<endl<<"Size: "<<l.size()<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<string>s;
//     s.push("Nilesh");
//     s.push("Bhanot");
//     cout<<s.top()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.empty()<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<string>s;
//     s.push("Nilesh");
//     s.push("Bhanot");
//     cout<<s.front()<<endl;
//     cout<<s.back()<<endl;
//     s.pop();
//     cout<<s.front()<<endl;
//     cout<<s.size()<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //max-heap
//     priority_queue<int>p;
//     p.push(1);
//     p.push(3);
//     p.push(5);
//     p.push(4);
//     int n=p.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout<<p.top()<<" ";
//         p.pop();
//     }cout<<endl;
    
//     //min-heap
//     priority_queue<int, vector<int>, greater<int>>m;
//     m.push(1);
//     m.push(3);
//     m.push(5);
//     m.push(4);
//     n=m.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout<<m.top()<<" ";
//         m.pop();
//     }cout<<endl;
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(5);
//     s.insert(4);
//     cout<<"Before: "<<endl;
//     for (int i: s)
//     {
//         cout<<i<<' ';
//     }cout<<endl;
//     set<int>::iterator it = s.begin();
//     it++;
//     it++;
//     s.erase(it);
//     cout<<"After: "<<endl;
//     for (int i: s)
//     {
//         cout<<i<<' ';
//     }cout<<endl;
//     cout<<s.count(10)<<endl;
//     auto itr=s.find(4);
//     for (auto it = itr; it!=s.end(); it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<double, string>m;
//     m[1]="Nilesh";
//     m[2]="Bhanot";
//     m[3]="F1";
//     m.insert({1.5,"Bheem"});
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     } 
//     m.erase(1.5);
//     cout<<"After erase: "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     auto itr= m.find(2);
//     for (auto it = itr; it!=m.end(); it++)
//     {
//         cout<<(*it).first<<" ";
//     }cout<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,5,8};
    vector<int>v2={4,5,6};
    vector<int>v3;
    cout<<binary_search(v.begin(),v.end(), 8)<<endl;
    cout<<max(10,-3)<<endl;
    cout<<min(10,-3)<<endl;
    string s="Nilesh Bhanot";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    rotate(v.begin(), v.begin()+3,v.end());
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<lower_bound(v.begin(), v.end(), 3)-v.begin()<<endl;
    cout<<lower_bound(v.begin(), v.end(), 3)-v.begin()<<endl;
    auto it = v3.begin();
    merge(v.begin(),v.end(),v2.begin(),v2.end(), back_inserter(v3));
    cout<<"After merging: "<<endl;
    for(int i:v3){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}