void selectSearch(int a[],int k)
	{
	int i,j,index,temp;
	for(i=0;i<k-1;i++)
	{
		index=i;
		for(j=i+1;j<k;j++)
		{
		if(a[index]>a[j])
		index=j;
		}
		while(index!=i)
		{
		temp=a[index];
		a[index]=a[i];
		a[i]=temp;
		}
	}
	return 0;
	}
