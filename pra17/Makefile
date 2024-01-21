
 CC = gcc
 TARGET = ex17
 SOURCE = $(wildcard ./src/*.c)      #获取src目录下所有.c文件
 OBJS = $(patsubst %.c, %.o, $(SOURCE))
 INCLUDE = -I./include
 $(TARGET):$(OBJS)  
	 $(CC) -Wall -g $(OBJS) -o $(TARGET)    
 %.o:%.c
	 $(CC) $(INCLUDE) -c $^ -o $@                                                                                                                                                                          
 
 .PHONY:clean
 clean:
	 rm $(OBJS) $(TARGET) 
