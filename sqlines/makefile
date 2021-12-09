
## Portions Copyright (c) 2021 Huawei Technologies Co.,Ltd.
## Portions Copyright (c) 2016 SQLines

SRCS += $(wildcard ./*.cpp)
TARGET = sqlines
SUB_TARGET = ../sqlparser/sqlparser.a
SRCS += $(SUB_TARGET)
subdir = ../sqlparser/
$(TARGET) : $(SRCS)
	g++ -O0 -g -o $(TARGET) $^  -fpermissive
$(SUB_TARGET):
	make -C ../sqlparser 

.PHONY = clean
clean :
	rm -rf *.o $(TARGET) $(TARGET).log
	make -C ../sqlparser clean
