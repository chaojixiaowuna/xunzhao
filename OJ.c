//OJ的分类和原理
//	1、I/O型
//	我们要自己写头文件、main函数等
//	2、
//	测试用例输入：自己通过scanf获取
//	3、测试结果：自己通过printf输出
//
//	2、接口型  不需要写头文件、主函数等
//	提交了以后，会跟oj系统编好的程序合并运行编译
//	测试用例：通过参数来的
//	结果：一般是通过返回值拿的，也有可能是输出型参数

//给定一个数组nums和一个值val,原地删除和val相等的值
//并输出数组的长度

思路一 暴力求解 
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
//最坏的情况 时间复杂度为0（N^2）空间复杂度0(1)


思路二 找到与val相同的便于最后一个元素互换位置 i--重新从这个位置开始比较
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
//时间复杂度为0（N）空间复杂度0(1)

思路三 一次遍历nums数组，把不是val的值，放到tmp数组中，再把tmp的值拷贝回去
//时间复杂度0（N） 空间复杂度0（N）
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



思路四 定义两个值 src和dst  src去找数组中不等于val的值，放到dst指向的位置去
//，再进行 src++，dst++；
//时间复杂度为0（N）空间复杂度0(1)
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