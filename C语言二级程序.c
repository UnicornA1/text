#include <stdio.h>

int main01(void)
{
	int a=0;
	printf("wello world ?\r\n");
	scanf("%d",&a);
	printf("十进制：%d\r\n",a);
	printf("八进制：%o\r\n",a);
	printf("十六进制：%x\r\n",a);
	printf("十六进制：%X\r\n",a);
	return 0;
}
int main02(void)
{
	unsigned int a = 10;
	printf("%u\r\n",a);
	return 0;
}

int main(void)
{
	char ch = 'A';

	scanf("%c",&ch);
	ch = ch - 32;
	printf("%c\n",ch);
	return 0;
}

int main(void)
{
	int i;
	int a,b,c;//个 十 倍数
	for(i=1;i<100;i++)//1到100敲7
	{
		a=i%10;//为7
		b=i/10;//为7
		c=i%7;//为0
		if(a==7 || b==7 || c==0)
		{
			printf("敲桌子\n");
		}
		else
		{
			printf("%d\n",i);
		}
	}
}


int main(void)
{
	int i=100;//100到999的水仙花数
	int a,b,c;//百位个位十位
	int sun;
	while(i<1000)
	{
		a = i/100;
		b = i/10%10;
		c = i%10;
		sun = a*a*a + b*b*b + c*c*c;
		if(sun == i)
		{
			printf("水仙花数%d\n",i);
		}
		i++;
	}
	return 0;
}


int main(void)//99乘法表
{
	int i,j;//行列
	int sum;//和
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum = j*i;
			printf("%d*%d=%d ",j,i,sum);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main(void)//冒泡排序
{
	int getdata[10] = {3,7,6,9,1,2,5,10,4,8};//获取数据 
	int lastdata;//中间过渡数据
	int i,j;
	//最后一位不用判断
	for(j=0;j<10-1;j++)
	{
		for(i=0;i<10-1-j;i++)//升序  用大于符>就是降序
		{
			if(getdata[i]>getdata[i+1])
			{
				lastdata = getdata[i];
				getdata[i] = getdata[i+1];
				getdata[i+1] = lastdata;
			}
		}
	}
	for(i=0;i<10;i++)//降序
	{
		//printf("%d ",i);
		printf("%d ",getdata[i]);
	}
		
	return 0;
}


#include <stdio.h>

int main(void)
{
	//利用二维数组求学生的各科成绩和各学生总成绩
	/*
			语文	数学	英语
		 1
		 2
		 3
		 4

	*/
	int i,j;
	int student_sub=0;//成绩
	int student_obj=0;//学科
	int student[4][3]=
	{
		{80,70,60},
		{70,80,90},
		{60,70,80},
		{50,60,70}
	};
	//求各学生总成绩
	for(j=0;j<4;j++)//0-3
	{
		for(i=0;i<3;i++)//0-2
		{
			student_sub += student[j][i];
		}
		printf("学生%d的总成绩是%d\n",j+1,student_sub);
		student_sub=0;
	}
	for(j=0;j<3;j++)//0-2
	{
		for(i=0;i<4;i++)//0-3
		{
			student_obj += student[i][j];
		}
		printf("学科%d的总成绩是%d\n",j+1,student_obj);
		student_obj=0;
	}
	return 0;
}

int main(void)//字符数组的相关操作
{
	char arr[10]={'h','e','l','l','o','w','o','r','l','d'};
	char arr1[11]={"helloworld"};
	int i;
	for(i=0;i<10;i++)
	{
		printf("%c",arr[i]);
	}
	printf("%s",arr1);
	scanf("%s",arr1);
	printf("%s",arr1);
}

int main(void)//字符串比较
{
	char arr[11] ={"helloworld"};
	char arr1[11]={"helloworld"};
	int i=0;
	while(arr[i] == arr1[i])
	{
		i++;
		if(arr[i] == '\0')
		{
			printf("字符串相同");
			return 0;
		}
	}
	printf("字符串不相同");
	
}


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)//猜数字游戏
{
	int data;
	int value=0;//比较的初值
	srand((unsigned int)time(NULL));
	data = rand()%100;//获取随机数 0-99
	while(1)
	{
		printf("请输入一个数：");
		scanf("%d",&value);
		if(value>data)
		{
			printf("小子 大了\n");
		}
		else if(value<data)
		{
			printf("小子 小了\n");
		}
		else 
		{
			printf("勉强正确\n");
			break;
		}
			
	}
	return 0;
}


#include <stdio.h>


void fun(int a)//递归测试
{
	if(a==0)
	{
		return;
	}
	fun(a-1);
	printf("%d\n",a);
}
int main(void)
{
	int a=10;
	int b=20;
	fun(a);
	return 0;
}


#include <stdio.h>
#define SUM(X,Y) ((X)+(Y))

int main(void)//宏定义函数
{
	int a=10;
	int b=20;
	printf("%d\n",SUM(a,b));
	return 0;
}

#include <stdio.h>
int main(void)//指针的基本操作
{
	int a=10;
	int* p;
	p = &a;//将指针p与变量a建立关系
	printf("%p\n",&a);
	printf("%p\n",p);
	*p = 100;
	printf("%d\n",a);
	printf("%d\n",a);
	return 0;
}


#include <stdio.h>

void swap(int* a,int* b)//利用指针可以用形参操作实参
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)//指针的数据交换
{
	int a=10;
	int b=20;
	swap(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}


#include <stdio.h>
#include <string.h>

typedef struct str
{
	int num;
	char name[20];
	char sex;//性别
	int age;
	char addr[64];
}student;

int main(void)//利用结构体初始化不同数据类型
{
	/*student ss;//必须重新申明后才可使用
	ss.num = 1;
	strcpy(ss.name,"唐海宁");
	ss.sex = 'F';
	ss.age = 20;
	strcpy(ss.addr,"电子科技大学");
	*/ //等价
	student ss = {1,"唐海宁",'F',20,"电子科技大学"};
	
	printf("编号:%d\n",ss.num);
	printf("姓名:%s\n",ss.name);
	printf("性别:%c\n",ss.sex);
	printf("年龄:%d\n",ss.age);
	printf("地址:%s\n",ss.addr);
	return 0;
}


#include <stdio.h>

typedef struct str
{
	int num;
	char name[20];
	char sex;//性别
	int age;
	char addr[64];
}student;

student ss[3] =
{
	{1,"一娃",'F',20,"上海"},
	{2,"二娃",'M',18,"成都"},
	{3,"三娃",'F',60,"北欧"}
};
//细节注意利用构建好的结构体的基础上构建数组
//需要定义数组元素个数
//结尾有分号 开头有等号
int main(void)//利用结构体初始化不同数据类型
{
	int i,j;
	for(j=0;j<3;j++)
	{
		printf("编号%d %s %c %d %s\n",ss[j].num,ss[j].name,ss[j].sex,ss[j].age,ss[j].addr);
	}	
	return 0;
}


/*********************************************************重点***********************************************/
#include <stdio.h>
//利用指针将整个数组数据调换 
/*
1 唐海宁 20,F 89
2 王一琼 18,M 99
3 张三 45,F 88
4 李四 60,F 67
5 王五 80,F 37
*/
typedef struct str
{
	int num;
	char name[21];//数组
	char sex;
	int age;
	int seore;//成绩
}student;

//冒泡排序 指针 
void BubbleSort(student* arr,int len)//结构体指针
{
	//不懂为啥只能是数组
	int i,j;
	student addr;//定义指针
	for(j=0;j<5-1;j++)//5个人
	{
		for(i=0;i<5-1-j;i++)//5个人
		{
			if(arr[i].seore<arr[i+1].seore)
			{
				addr = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=addr;
			}
		}
	}
}

int main(void)
{
	int i;
	student ss[5];
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d,%c%d",&ss[i].num,ss[i].name,&ss[i].age,&ss[i].sex,&ss[i].seore);//逗号的处理 保证字符完整的前提是它前面是整形
	}
	BubbleSort(ss,5);
	for(i=0;i<5;i++)
	{ 
		printf("编号:%d\t",ss[i].num);
		printf("姓名:%s\t",ss[i].name);
		printf("性别:%s\t",ss[i].sex=='F'?"男":"女");
		printf("年龄:%d\t",ss[i].age);
		printf("成绩:%d\n",ss[i].seore);//利用制表符时 最后的换行不能去掉
	}
	
}
/*********************************************************重点***********************************************/

//嵌套结构体
typedef struct str
{
	int asd;
	char bcd;//数组
}data;
typedef struct str
{
	int num;
	char name[21];//数组
	char sex;
	int age;
	int seore;//成绩
	data data;//成绩
}student;


#include <stdio.h>

int main(void)//异或操作
{
	int a=10;
	int b=20;

	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d%d",a,b);
	return 0;
}

#include <stdio.h>

int main01(void)
{
	FILE* fp;
	char ch='A';
	fp = fopen("D:/text.txt","r");//读操作
	if(fp == NULL)//获取指针地址
	{
		printf("打开失败\n");
		return -1;
	}
	fputc(ch,fp);
	while((ch=fgetc(fp))!=EOF)//读文件
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

int main(void)
{
	FILE* fp;
	char ch='A';
	fp = fopen("D:/text.txt","w");//写操作
	if(fp == NULL)//获取指针地址
	{
		printf("打开失败\n");
		return -1;
	}
	fputc(ch,fp);
	fclose(fp);
	return 0;
}





