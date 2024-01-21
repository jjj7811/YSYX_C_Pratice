
 CC = gcc
 TARGET = ex6
 SOURCE = $(wildcard ./src/*.c)      #获取src目录下所有.c文件
 OBJS = $(patsubst %.c, %.o, $(SOURCE))
 INCLUDE = -I./include
 $(TARGET):$(OBJS)  
	 $(CC) -Wall -g $(OBJS) -o $(TARGET)     #另一种写法： $(CC) -o $(TARGET) $(OBJS)
 %.o:%.c
	 $(CC) $(INCLUDE) -c $^ -o $@   #另一种写法：  $(CC) $(INCLUDE) -c -o $@ $^                                                                                                                                                                       
 
 .PHONY:clean
 clean:
	 rm $(OBJS) $(TARGET) 
