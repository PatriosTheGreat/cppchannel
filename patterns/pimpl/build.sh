clang++ -c ChatHistoryService.cc -o ChatHistoryService.o
clang++ -c main.cc -o main.o
clang++ main.o ChatHistoryService.o -o main