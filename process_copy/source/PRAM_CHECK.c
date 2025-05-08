#include<process_copy.h>

int PRAM_CHECK(const char* src,int pronum,int argc)
{
	if(argc<3)
	{
		printf("参数不够\n");
		exit(1);
	}
	if(access(src,F_OK)!=0){
		printf("文件不存在\n");
		exit(1);
	}
	if(pronum<5||pronum >100)
	{
		printf("进程数量不正确\n");
		exit(1);
	}

	return 1;
}
