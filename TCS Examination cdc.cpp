#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int D[3], S[3];
        for(int i =0; i<3; i++)
        {
            cin>> D[i];
        }
        for(int i =0; i<3; i++)
        {
            cin>> S[i];
        }

        int D_Total = D[0] + D[1] + D[2];
        int S_Total = S[0] + S[1] + S[2];

        if(D_Total > S_Total)
        {
            cout<< "DRAGON" <<endl;
        }
        else if(D_Total < S_Total)
        {
            cout<< "SLOTH" <<endl;
        }
        else
        {
            if(D[0] > S[0])
            {
                cout<< "DRAGON" <<endl;
            }
            else if(D[0] < S[0])
            {
                cout<< "SLOTH" <<endl;
            }
            else
            {
                if(D[1] > S[1])
                {
                    cout<< "DRAGON" <<endl;
                }
                else if(D[1] < S[1])
                {
                    cout<< "SLOTH" <<endl;
                }
                else
                {
                    if(D[1] > S[1])
                    {
                        cout<< "DRAGON" <<endl;
                    }
                    else if(D[1] < S[1])
                    {
                        cout<< "SLOTH" <<endl;
                    }
                    else
                    {
                        if(D[2] > S[2])
                        {
                            cout<< "DRAGON" <<endl;
                        }
                        else if(D[2] > S[2])
                        {
                            cout<< "SLOTH" <<endl;
                        }
                        else
                        {
                            cout<< "TIE" <<endl;
                        }

                    }
                }
            }
        }
    }
}

