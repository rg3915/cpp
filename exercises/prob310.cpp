#include <iostream>
#define MAX 100
using namespace std;

float media(float A[MAX][MAX], itn n, int m, int i, int j)
{
  float soma = 0;
  int qtde = 0;
  if(i - 1 >= 0)
  {
    soma += A[i-1][j];
    qtde ++;
  }
  if(j - 1 >= 0)
  {
    soma += A[i][j-1];
    qtde ++;
  }
  if(i + 1 < n)
  {
    soma += A[i+1][j];
    qtde ++;
  }
  if(j + 1 < m)
  {
    soma += A[i][j+1];
    qtde ++;
  }
  return soma/qtde;
}

void matriz_media(float A[MAX][MAX], int n, int m, float B[MAX][MAX])
{
  int i, j;
  for(i = 0; i < n; i++)
    for(j = 0; j < m; j++)
      B[i][j] = media(A,n,m,i,j);
}

void imprime(float A[MAX][MAX], int n, int m)
{
  int i,j;
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
      cout << A[i][j] << " ";
    cout << endl;
  }
}

int main()
{
  int n, m, i, j, k, r;
  float A[MAX][MAX], B[MAX][MAX];
  cin >> n >> m;
  for(i = 0; i < n; i++)
    for(j = 0; j < m; j++)
      cin >> A[i][j];
  imprime(A,n,m);
  for(r = 0; r < k; r++)
  {
    if(r % 2 == 0)
    {
      matriz_media(A,n,m,B);
      imprime(B,n,m);
    }
    else
    {
      matriz_media(B,n,m,A);
      imprime(A,n,m);
    }
  }
  return 0;
}
