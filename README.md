# python-use-c-
python调用c++函数

# 方法将c++代码通过g++编译成.so文件再通过python ctype库加载函数
参考命令:
g++ -o test.so -shared -fPIC main1.cpp \
test.so你要生成的.so文件的名字 \
-shared动态库的意思 \
-fPIC：表示编译为位置独立的代码，不用此选项的话编译后的代码是位置相关的所以动态载入时是通过代码拷贝的方式来满足不同进程的需要，而不能达到真正代码段共享的目的。 \
main1.cpp你要生成的cpp的名字 \
可以通过vscode编译选项里面去加命令去编译一些额外的库
