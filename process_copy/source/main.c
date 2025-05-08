#include <process_copy.h>

int main(int argc, char ** argv)
{
	int blocksize, pronum;
	if(argv[3]==NULL)
		pronum = 5;
	else
		pronum = atoi(argv[3]);

	if(PRAM_CHECK(argv[1],pronum, argc)==0)
		return 0;
	else 
	{
		blocksize = BLOCK_CUR(argv[1],pronum);
		PROCESS_CREATE(argv[1],argv[2],blocksize,pronum);
	}
	return 0;
}
