#include <bits/stdc++.h>
using namespace std;

int Hamming_D(const string &S1, const string &S2) 
{
    int d = 0;
    for (size_t i = 0; i < S1.size(); ++i)
    {
        if (S1[i] != S2[i])
        {
            d++;
        }
    }
    return d;
}

int find_Min_H_D(const string &A, const string &B)
{
    int N = A.size();
    int M = B.size();
    int min_D = M; 
    
    for (int i = 0; i <= N - M; ++i) 
    {
        string substring = A.substr(i, M);
        int distance = Hamming_D(substring, B);
        min_D = min(min_D, distance);
    }
    
    return min_D;
}

int main() 
{
    int t;
    cin >> t;
    
    vector<int> results;

    for (int i = 0; i < t; i++) 
    {
        int N, M;
        cin >> N >> M;
        string A, B;
        cin >> A >> B;
        results.push_back(find_Min_H_D(A, B));
    }

     for (size_t i = 0; i < results.size(); ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}