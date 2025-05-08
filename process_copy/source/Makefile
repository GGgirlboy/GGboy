INCLUDE_PATH=../include
LIBRARY_PATH=../library
CC=gcc
TARGET=process_copy
CFLAGS=-I$(INCLUDE_PATH) -c -g -Wall
SRCFILES=$(wildcard *.c)#获取当前目录下所有.c 后缀的文件名存储到SRCFILES中
DESTFILE=$(patsubst %.c,%.o,$(SRCFILES))#字符串替换，将SRCFILES中所有.c后缀变为.o后缀

#主目标，将.o链接编译成process_copy
$(TARGET):$(DESTFILE)
	$(CC) $^ -o $@

#从目标，根据.c生成二进制.o文件
%.o:%.c
	$(CC) $(CFLAGS) $<

clean:
	rm $(DESTFILE) -rf
	rm $(TARGET) -rf
