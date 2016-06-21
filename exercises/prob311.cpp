int buscasimples(float v[MAX], int n, float r)
{
  int i;
  for(i = 0; i < n; i++)
  {
    if(v[i] == r)
      return i;
  }
  return -1;
}
