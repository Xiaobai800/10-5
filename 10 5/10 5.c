#include<stdio.h>
void test_1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test_2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test_1(arr);
	test_2(ch);
	return 0;
}