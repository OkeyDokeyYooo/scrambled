#include <stdio.h>
int scrambled (unsigned int a[], unsigned int b[], unsigned int len)
{
  int result = 0;

  if (len == 0)
  {
    return 1;
  }
  int sum_a = 0;
  int sum_b = 0;
  for(int i = 0; i < len; i++)
  {
    sum_a = sum_a + a[i];
    sum_b = sum_b + b[i];
  }

  for(int i = 0; i < len; i++)
  {
    int j = 0;
    while ( j < len )
    {
      if (a[i] == b[j])
      {
        result = result + 1;
        j = j + 1;
        break;
      }
      j = j + 1;
    }
  }
  if (result == len && sum_a == sum_b)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
