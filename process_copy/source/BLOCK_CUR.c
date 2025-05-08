#include<process_copy.h>

int BLOCK_CUR(const char * src,int pronum)
{
	int fd=open(src,O_RDWR);
	int filesize=lseek(fd,0,SEEK_END);
	close(fd);
	if(filesize%pronum==0)
	{
		return filesize/pronum;
	}else
		return filesize/pronum+1;
}
