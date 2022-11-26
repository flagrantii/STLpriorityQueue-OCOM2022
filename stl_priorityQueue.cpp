#include <bits/stdc++.h>
using namespace std;

void show(priority_queue<int> pq) {
    priority_queue<int> a = pq;
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
}
int main() {
    int n,m,x;
    char cmd;
    cin>>n;
    while(n--) {
        cin>>m;
        priority_queue<int> pq;
        while(m--){
            cin>>cmd;
            if(cmd=='1'){
                cin>>x;
                pq.push(x);
                show(pq);
            }
            if(cmd=='2'){
                cout<<pq.top()<<" ";
                pq.pop();
            }
            if(cmd=='3'){
                cout<<pq.top()<<" ";
            }
            if(cmd=='4'){
                cout<<pq.size()<<" ";
            }
            if(cmd=='5'){
                show(pq);
            }
            cout << "\n";
        }
    }
}

/*
1
8
1 6
1 1
1 7
4
3
2
5
2
*/
