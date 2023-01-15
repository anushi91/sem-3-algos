#include<stdio.h>
#include<stdbool.h>
#define n 5
#define infinity 999
int extract_min(int []);
bool exists(int,int)
int key[n+1],parent[n+1];
int max=n*(n-1);
int q[n+1],front=-1,rear=-1;
void main()
{
int r, i,j, g[n],source[max],dest[max],w[max],s,d,weight,edges=0;


for(i=1;i<=max;i++)
{ 
  printf(" \n enter source dest weight");
  scanf("%d%d%d",&s,&d,&weight)
  
  if(s==0 && d==0 ) break;
  else if(s<0 || d<0)
  {
  printf("invalid");
  i--;
  continue;
  }
  
  else
  {
  source[i]=s;
  dest[i]=d;
  w[i]=weight;
  edges++;
  }
}

for(i=1;i<=n;i++)
{ 

key[i]=infinity;
parent[i]=0;
}

printf("\n enter source :");
scanf("%d",&r);
key[r]=0;
for(i=1;i<=n;i++)
{ 
  q[i]=i;
  front=0;
  rear++;
 
}
while(rear!=front)\\empty queue
{
  u=extract_min(q);
  for(i=1;i<=max;i++)
{   for(j=1;j<=max;j++)
    { 
      if(source[i]==dest[j] && dest[i]==source[j])
           { v[i]=i;
                if(exists(v[i],q) && w[i]<key[v[i]]){
                    parent[v[i]]=u;
                      key[v[i]]=w[i];
                }
           }
           
    
    }
}


}
}
