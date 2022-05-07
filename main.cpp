
/*
void mergesort(int p, int q)
{
    if (p==q) //nie zmieniaj
        return;
    int s = (p + q) / 2;
    mergesort(p, s);
    mergesort(s+1, q);

    int i = p;
    int j = s+1;
    for (int k = p; k <= q; k++)
        if (j>q || ( i<=s && A[i] < A[j] ) )
        {
           B[k] = A[i];
           i++;
        } else
        {
           B[k] = A[j];
           j++;
        }
     for(int k = p ; k <= q; k++)
          A[k] = B[k];

}
int main() {
    int n;
    int ilosc=0;
    cin >>n;
    for (int i=0;i<n;i++) cin>>A[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]>A[j])
            {
                ilosc++;
            }
        }
    }
    mergesort(0,n-1);
    for (int i=0;i<n;i++){
            cout << A[i]<<" ";
    }
    cout<<"\n"<<ilosc;
    return 0;
}
*/
//stary program wyzej
#include <cmath>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>

using namespace std;

long long A[1000000],B[1000000];
int main()
{
    int n;
    int ilosc=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                ilosc++;
            }
        }
    }
    sort(A, A + n);
    for(int i=0; i<n; i++){
        cout << A[i]<<" ";
    }
    cout<<endl<<ilosc;
    return 0;
}
