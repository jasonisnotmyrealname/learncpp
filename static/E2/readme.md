本例子用于进一步解释static的scope范围:
1.static count放到fun内部，因此它的作用域就是代码块fun（只有fun能看到它）。
2.static count被分配到bss，因此在fun执行结束，它也不会消失。
3.static count在程序第一次启动时被赋值，如果没被赋值，它的值是0。
