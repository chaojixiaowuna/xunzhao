//OJ�ķ����ԭ��
//	1��I/O��
//	����Ҫ�Լ�дͷ�ļ���main������
//	2��
//	�����������룺�Լ�ͨ��scanf��ȡ
//	3�����Խ�����Լ�ͨ��printf���
//
//	2���ӿ���  ����Ҫдͷ�ļ�����������
//	�ύ���Ժ󣬻��ojϵͳ��õĳ���ϲ����б���
//	����������ͨ����������
//	�����һ����ͨ������ֵ�õģ�Ҳ�п���������Ͳ���

//����һ������nums��һ��ֵval,ԭ��ɾ����val��ȵ�ֵ
//���������ĳ���

˼·һ ������� 
//#include<stdio.h>
//int deletesame(int*arr,int numsize,int val)
//{
//	int i=0,j,a=0;
//	for(i=0;i<numsize;i++)
//	{
//		if(arr[i]==val)
//		{
//			for(j=i;j<numsize-1;j++)
//			{
//				arr[j]=arr[j+1];
//			}
//			a++;
//			i--;
//		}
//	}
//	return numsize-a;
//}
//int main()
//{
//	int arr[5]={2,3,4,5,6};
//	int val=4,i;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int tmp=deletesame(arr,sz,val);
//	printf("%d\n",tmp);
//	for(i=0;i<tmp;i++)
//	{
//	printf("%d \n",arr[i]);
//	}
//	return 0;
//}
//������ ʱ�临�Ӷ�Ϊ0��N^2���ռ临�Ӷ�0(1)


˼·�� �ҵ���val��ͬ�ı������һ��Ԫ�ػ���λ�� i--���´����λ�ÿ�ʼ�Ƚ�
//#include<stdio.h>
//int deletesame(int* arr,int sz,int val)
//{
	/*int i;
	for(i=0;i<sz;i++)
	{
		if(arr[i]==val)
		{
			arr[i]=arr[sz-1];
			i--;
			sz--;
		}
	}
	return sz;
}*/
//int main()
//{
//	int arr[5]={4,3,4,4,6};
//	int val=4,i;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int tmp=deletesame(arr,sz,val);
//	printf("%d\n",tmp);
//	for(i=0;i<tmp;i++)
//	{
//	printf("%d \n",arr[i]);
//	}
//	return 0;
//}
//ʱ�临�Ӷ�Ϊ0��N���ռ临�Ӷ�0(1)

˼·�� һ�α���nums���飬�Ѳ���val��ֵ���ŵ�tmp�����У��ٰ�tmp��ֵ������ȥ
//ʱ�临�Ӷ�0��N�� �ռ临�Ӷ�0��N��
//#include<stdio.h>
//int deletesame(int*arr,int numsize,int val)
//{
//	int tmp[1024]={0};
//	int i,j=0,b=0;
//	for(i=0;i<numsize;i++)
//	{
//		if(arr[i]!=val)
//		{
//			tmp[j]=arr[i];
//			j++;
//		}
//
//	}
//	b=j;
//	while(j>=0)
//	{
//		arr[j]=tmp[j];
//		j--;
//	}
//	return b;
//}
//int main()
//{
//	int arr[5]={2,3,4,5,6};
//	int val=4,i;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int tmp=deletesame(arr,sz,val);
//	printf("%d\n",tmp);
//	for(i=0;i<tmp;i++)
//	{
//	printf("%d \n",arr[i]);
//	}
//	return 0;
//}



˼·�� ��������ֵ src��dst  srcȥ�������в�����val��ֵ���ŵ�dstָ���λ��ȥ
//���ٽ��� src++��dst++��
//ʱ�临�Ӷ�Ϊ0��N���ռ临�Ӷ�0(1)
//#include<stdio.h>
//int deletesame(int*arr,int numsize,int val)
//{
//	int src=0,dst=0;
//	while(src<numsize)
//	{
//		if(arr[src]!=val)
//		{
//			arr[dst]=arr[src];
//			src++;
//			dst++;
//		}
//		else src++;
//	}
//	return dst;
//}
//int main()
//{
//	int arr[5]={2,3,4,5,6};
//	int val=4,i;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int tmp=deletesame(arr,sz,val);
//	printf("%d\n",tmp);
//	for(i=0;i<tmp;i++)
//	{
//	printf("%d \n",arr[i]);
//	}
//	return 0;
//}