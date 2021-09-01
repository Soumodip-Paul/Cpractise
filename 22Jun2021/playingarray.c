#include <stdio.h>
int main()
{
  int n, count = 0,duplicate = 0;
  printf("Enter length of array ");
  scanf("%d", &n);
  printf("Enter array : ");
  int arr[n], temp[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nArray Before Removing Duplicates: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  for (int i = 0; i < n; i++)
  {
    int j;
    for (j = 0; j < count; j++)
    {
      if (arr[i] == temp[j])
            break;
    }
    if (j == count)
    {
      temp[count] = arr[i];
      count++;
    }
  }

    duplicate = n -count;
  printf("\nNumber of duplicates is %d\nArray After  Removing Duplicates: ",duplicate);
  for (int i = 0; i < count; i++)
    printf("%d ", temp[count - i - 1] );

  return 0;
}
