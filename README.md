# cxatexit

cxa清理顺序与atexit执行顺序说明：

1. libc中会维护exit_function_list, cxa析构与atexit的handler都会进入这个列表；
2. 全局变量和静态变量的析构函数会被添加到这个列表里，添加顺序与变量所在so的加载顺序有关；
3. 进程退出时，按照添加顺序的逆序执行清理动作；