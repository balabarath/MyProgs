#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <list>
using namespace std;
#define min(a, b) a < b ? a : b
#define max(a, b) a > b ? a : b
int main()
{
    int x[1000], y[1000], i, minValue, t, n, count, flag, min, xmax, ymax, xmaxIndex, ymaxIndex, removalValue;
    map <int, list<int> > xmap;
    map <int, list<int> > ymap;
    map <int, list<int> >::iterator itx;
    map <int, list<int> >::iterator ity;
    list <int>::iterator itxAxis;
    list <int>::iterator ityAxis;
    char xory, minAxis;
    scanf("%d", &t);
    while( t-- )
    {
        scanf("%d", &n);
        count = flag = 0;
        xmap.clear();
        ymap.clear();
        minValue = 9999;
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
            itx = xmap.find(x[i]);
            ity = ymap.find(y[i]);
            
            if(itx != xmap.end())
            {
                itx->second.push_back(y[i]);
            }
            else
            {
                list<int> yAxis;
                yAxis.push_back(y[i]);
                xmap[x[i]] = yAxis;
            }    

            if(ity != ymap.end())
            {
                ity->second.push_back(x[i]);
            }
            else
            {
                list<int> xAxis;
                xAxis.push_back(x[i]);
                ymap[y[i]] = xAxis;
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
                if( itx -> second.size() > xmax)
                {
                    xmaxIndex = (int)itx -> first;
                    xmax = (int) itx -> second.size();
                }
                itx ++;
            }
            while(ity != ymap.end())
            {
                if( ity -> second.size() > ymax)
                {
                    ymaxIndex = (int) ity -> first;
                    ymax = (int) ity -> second.size();
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
                ity = ymap.begin();
                itxAxis = xmap.find(removalValue)->second.begin();
                while(itxAxis != xmap.find(removalValue)->second.end())
                {
                    ymap.find(*itxAxis)->second.remove(removalValue);
                    if(ymap.find(*itxAxis)->second.size() == 0)
                    {
                       ymap.erase(*itxAxis);
                    }
                    itxAxis ++;
                }
                xmap.erase(removalValue);   
                //cout<<"x-->"<<xmap.size()<<endl;     
            }
            else
            {
                itx = xmap.begin();
                ityAxis = ymap.find(removalValue)->second.begin();
                while(ityAxis != ymap.find(removalValue)->second.end())
                {
                    xmap.find(*ityAxis)->second.remove(removalValue);
                    if(xmap.find(*ityAxis)->second.size() == 0)
                    {
                       xmap.erase(*ityAxis);
                    }
                    ityAxis ++;
                }
                ymap.erase(removalValue);
                //cout<<"y-->"<<ymap.size()<<endl;
            }
            count ++;
            //cout<<"-->"<<count<<endl;
        }
        printf("%d\n", min(count, minValue));
    }
    return 0;
}
