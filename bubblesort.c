 void bubblesort(int a[],int n)
{
    int i,j,temp;
     for(i=0;i<n-1;i++)
     {
      for(j=n-1;j>i;j--)
      {
      if(a[j]<a[j-1])
      {temp=a[j-1];
      a[j-1]=a[j];
      a[j]=temp;
       }
      }
     }
}
