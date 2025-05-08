#include<process_copy.h>

int PROCESS_WAIT(void)
{
	pid_t zpid;
	while((zpid=waitpid(-1,NULL,WNOHANG))!=-1)
	{
		if(zpid==0)
		{
			printf("文件正在拷贝中....\n");
			sleep(1);
		}
	}
	return 1;
}
