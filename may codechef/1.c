
int BalancedPartition ( int a[] , int n ){

    int sum = 0,i,j;
    for( i = 0 ; i < n ; i++)
        sum += a[i];

    int *s = new int[sum+1];

    s[0] = 1;
    for(i = 1 ; i < sum+1 ; i++)    s[i] = 0;

    int diff = INT_MAX , ans;

    for(i = 0 ; i < n ; i++)
    {
        for(j = sum ; j >= a[i] ; j--)
        {
            s[j] = s[j] | s[j-a[i]];
            if( s[j] == 1 )
            {
                if( diff > abs( sum/2 - j) )
                {
                    diff = abs( sum/2 - j );
                    ans = j;
                }

            }
        }
    }
    cout<< ans << " " << sum-ans<< endl; //two balanced partitions

    return min( ans , sum-ans );
}

int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     for(i=0;i<n;i++)
       scanf("%d",&a[i]);
     printf("%d",BalancedPartition(a,n));
    }
    scanf("%d");
}
