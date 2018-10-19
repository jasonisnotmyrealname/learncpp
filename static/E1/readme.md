Static可以用作函数和变量的前缀，和全局变量差不多。只不过全局变量放到data区域，谁都可能看到。static放到bss中，有的程序看不到，即A static variable is just a global variable that has limited scope（作用域）。
在本例子中，当没有static时，此时a和msg具有“外部链接性”，main可以看到a和msg，make可以通过。但是如果在a和msg的定义前加上static，那么a和msg的scope就被限定在当前文件中了，只具有“内部链接性”，main.c就看不到它们了，在make时会出错。
