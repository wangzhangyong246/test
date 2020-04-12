#include <stdio.h>
#pragma pack(1)
struct HEAD_TYPE_STRU{
	unsigned short Head;
	unsigned char Tyep;
	unsigned short u16len;
	unsigned char Data[100];
};
struct HEAD_TYPE_STRU stPacked = {0x55,0x06,0x0801,0x09,0x01,2,3,4,0x05,6,7};
#pragma pack()
int main(char argc,char **argv)
{
	char *pData =(void *) &stPacked;
	printf("%d\n",pData[5]);
	return 0;
}
