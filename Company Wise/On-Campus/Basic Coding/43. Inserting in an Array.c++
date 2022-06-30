#include <bits/stdc++.h>

int main()
{
    int i, n, val, a[100], pos;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter a number: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("\n %d", a[i]);
    }

    printf("\n Enter value to insert: ");
    scanf("%d", &val);

    printf("\n Enter the Position: ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = val;

    for (i = 0; i <= n; i++)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}