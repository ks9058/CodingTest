#include <bits/stdc++.h>
using namespace std;

struct Node {
    char left, right;
};

Node tree[26]; 

//전위 순회 - 루트->왼쪽->오른쪽 
void preorder(char cur) {
    if (cur == '.' ) return;
    cout << cur;
    preorder(tree[cur - 'A'].left);
    preorder(tree[cur - 'A'].right);
}

//중위순회 - 왼쪽->루트->오른쪽
void inorder(char cur) {
    if (cur == '.' ) return;
    inorder(tree[cur - 'A'].left);
    cout << cur;
    inorder(tree[cur - 'A'].right);
}

//후위순회 - 왼쪽->오른쪽->루트
void postorder(char cur) {
    if (cur == '.' ) return;
    postorder(tree[cur - 'A'].left);
    postorder(tree[cur - 'A'].right);
    cout << cur;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        char rt, l, r;
        cin >> rt >> l >> r;
        tree[rt - 'A'].left = l;
        tree[rt - 'A'].right = r;
    }

    preorder('A'); cout << '\n';
    inorder('A');  cout << '\n';
    postorder('A'); cout << '\n';

    return 0;
}
