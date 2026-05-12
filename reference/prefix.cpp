// prefix sum template
vector<long long> pre(n + 1, 0);
for (int i = 0; i < n; i++)
    pre[i + 1] = pre[i] + a[i];
// sum [l, r] inclusive 0-indexed = pre[r + 1] - pre[l]