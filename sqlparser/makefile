## Portions Copyright (c) 2021 Huawei Technologies Co.,Ltd.
## Portions Copyright (c) 2016 SQLines

SRCS = $(wildcard ./*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
INC_PATH = ../sqlines/

TARGET = sqlparser
$(TARGET) : $(OBJS)
	ar -rcs $(TARGET).a $^
$(OBJS) : %.o : %.cpp
	g++ -c -O0 -g $^ -o $@ -I$(INC_PATH) -fpermissive

.PHONY = clean
clean : 
	rm -rf *.o *.a


