#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <map>
using namespace std;
#define min(a, b) a < b ? a : b
#define max(a, b) a > b ? a : b
int main()
{
	int x[1000], y[1000], i, minValue, t, n, count, flag, min, xmax, ymax, xmaxIndex, ymaxIndex, removalValue;
	map <int, int> xmap;
	map <int, int> ymap;
	map <int, int>::iterator itx;
	map <int, int>::iterator ity;
	char xory, minAxis;
	scanf("%d", &t);
	while( t-- )
	{
		scanf("%d", &n);
		count = flag = 0;
		minValue = 9999;
		for(i = 0; i < n; i++)
		{
			scanf("%d %d", &x[i], &y[i]);
			itx = xmap.find(x[i]);
			ity = ymap.find(y[i]);
			
			if(itx != xmap.end())
			{
				xmap[x[i]]++;
			}
			else
			{
				xmap[x[i]] = 1;
			}	
 
			if(ity != ymap.end())
			{
				ymap[y[i]]++;
			}
			else
			{
				ymap[y[i]] = 1;
			}	
		}
		while(xmap.size() > 0 && ymap.size() > 0)
		{	
			xmax = ymax = 0;
			itx = xmap.begin();
			ity = ymap.begin();
			if(xmap.size() < ymap.size())
			{	
				if(minValue > xmap.size() + count)
					minValue = xmap.size() + count;
				minAxis = 'x';
			}
			else
			{	
				if(minValue > ymap.size() + count)
					minValue = ymap.size() + count;
				minAxis = 'y';
			}
			xory = 'y';
			while(itx != xmap.end())
			{
				if( itx -> second > xmax)
				{
					xmaxIndex = (int)itx -> first;
					xmax = (int) itx -> second;
				}
				itx ++;
			}
			while(ity != ymap.end())
			{
				if( ity -> second > ymax)
				{
					ymaxIndex = (int) ity -> first;
					ymax = (int) ity -> second;
				}
				ity ++;
			}
			if(xmax > ymax)
			{
				removalValue = xmaxIndex;
				xory = 'x';
			}
			else if(xmax < ymax)
			{
				removalValue = ymaxIndex;
			}
			else
			{
				if(minAxis == 'x')
				{
					removalValue = xmaxIndex;
					xory = 'x';
				}
				else
				{
					removalValue = ymaxIndex;
				}
			}			
			
			if(xory == 'x')
			{
				for(i = 0; i < n; i++)
				{
					if(x[i] == removalValue)
					{
						ymap[y[i]]--;
						if(ymap.size() == 0)
                        {
                           ymap.erase(y[i]);
                        }
						flag ++;
					}
				}
				xmap.erase(removalValue);		
			}
			else
			{
				for(i = 0; i < n; i++)
				{
					if(y[i] == removalValue)
					{
						xmap[x[i]]--;
                        if(xmap.size() == 0)
                        {
                           xmap.erase(x[i]);
                        }
						flag ++;
					}
				}
				ymap.erase(removalValue);
			}
			count ++;
		}
		printf("%d\n", min(count, minValue));
	}
	return 0;
}
