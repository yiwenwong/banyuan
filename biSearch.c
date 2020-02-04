	 int biSearch(int a[];int n;int x)
	 {
	 int left=0,right=n,mid;

	 while(a[left]<=a[right])
	 {
      mid=(left+right)/2;
      if(mid=x)
      return mid;
      else if(a[mid]<x)
      {
      left=mid+1;
      }
      else if(a[mid]>x)
      {
      right=mid-1;
      }
	 }
     return 0;
	 }
