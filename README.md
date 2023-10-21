# KCPTube Generator (KCPTube 配置生成器)

## 简介
这是 [KCPTube](https://github.com/cnbatch/kcptube) 的配置生成器，如果实在不想手写配置文件，用这个工具即可创建一份配置文件。

创建完成后，可以用纯文本编辑器打开配置文件，自己再进一步微调、增删。

注意，本程序不提供“自定义映射模式”的设置，如果需要使用“自定义映射模式”，请参考 [使用自定义映射模式](https://github.com/cnbatch/kcptube/wiki/%E8%87%AA%E5%AE%9A%E4%B9%89%E6%98%A0%E5%B0%84%E6%A8%A1%E5%BC%8F)

## 预编译二进制
目前提供 3 个平台的预编译二进制：
- Windows
- Linux (wxQt, glibc 2.31)
- FreeBSD (wxQt)

暂时只提供 x86-64 版本。

如同 kcptube 一样：
- 预编译的二进制全部都是静态编译。
    - Linux 版本基本上都是静态编译，但 libc 除外。
- 无法提供 macOS 版本。

本 GUI 程序不提供 Docker 版本。

## 编译
编译器须支持 C++17

需要的依赖库（理论上）只有一个：wxWidgets (≥ 3.1)

### Windows
请事先使用 vcpkg 安装 wxWidgets：

```
vcpkg install wxwidgets:x64-windows-static
```

然后用 Visual Studio 打开 `KCPTubeGenerator.sln` 自行编译。

### FreeBSD & Linux
#### 动态库版本
请使用系统自带包管理器安装 wxGTK3 或 wxQT，再使用 cmake 编译

```
mkdir build
cd build
cmake ..
make
```

编译出来的是使用动态库的版本。

#### 静态编译
请下载最新版 [wxWidgets](https://www.wxwidgets.org/) 编译一份静态库版本

编译指南：
- wxGTK 方式：[Compiling and getting started](https://wiki.wxwidgets.org/Compiling_and_getting_started)
- wxQT 方式：[WxQt](https://wiki.wxwidgets.org/WxQt)

请务必使用 `--disable-shared` 以及 `--enable-monolithic` 选项。`--prefix=` 建议选在自己 home 目录内的任意文件夹，编译完成后使用 `make install` 时会把编译好的库安装进去。

以下假设 prefix 的位置是 `/home/yourname/wxlib`

**第一步：**

首先，进入 bin 目录：

```
cd /home/yourname/wxlib/bin
```

接着，运行命令

```
./wx-config --cxxflags
```
以及
```
./wx-config --libs
```

**第二步**

这里假定已经下载完 KCPTubeGenerator 源码。

1. 进入 KCPTubeGenerator 项目文件夹
2. 打开 CMakeLists.txt，该文件与 README.md 处于同一层文件夹
    1. 找到 `find_package(wxWidgets`，删除包括这一行在内的往下 4 行
    2. 解除 `#add_compile_options()` 的注释（删除井号）
    3. 把刚才 `./wx-config --cxxflags` 获得的输出内容粘贴到 `add_compile_options` 的括号内
3. 打开 src/CMakeLists.txt
    1. 找到 `if(wxWidgets_FOUND)`，删除包括这一行在内的往下 3 行
    2. 解除 `#target_link_libraries(${PROJECT_NAME} PRIVATE CUSTOM_WXWIDGETS)` 的注释（删除井号）
    3. 用刚才 `./wx-config --libs` 获得的输出内容替换掉 `CUSTOM_WXWIDGETS`

完成后，继续正常编译流程即可
```
mkdir build
cd build
cmake ..
make
```

#### Gnome 提示 ‘Could Not Display’ 错误
无论静态编译还是动态编译，无论使用 wxGTK 还是 wxQt，Gnome 用户都可能会遇到 ‘There is no application installed of “shared library” files’ 的错误，此时可以用两种方法之一解决：
- 方法1：改用 KDE 的 Dolphin 文件管理器
- 方法2：当前目录用鼠标右键单击空白处，打开终端，键入 `./KCPTubeGenerator` 然后回车