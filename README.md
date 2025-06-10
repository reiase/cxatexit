# cxatexit

# `__cxa_atexit` 清理顺序与 `atexit` 执行顺序说明

1.  C 标准库 (如 glibc) 中会维护一个退出函数列表 (exit_function_list)，通过 `__cxa_atexit` 注册的析构函数和通过 `atexit` 注册的处理函数都会被添加到此列表中；
2.  全局对象和静态对象的析构函数会通过 `__cxa_atexit` 被添加到此列表中，其注册顺序与这些对象所在共享库 (shared object, .so 文件) 的加载顺序以及对象在编译单元内的定义顺序有关；
3.  进程退出时，将按照注册到列表中的顺序的逆序执行这些清理函数。