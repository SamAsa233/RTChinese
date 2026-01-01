# 《节奏天国》汉化版

（当前仓库正在施工中）

这是《节奏天国》汉化版项目组用于存储游戏文件的仓库，你可以使用该仓库自行构建ROM

构建该汉化版ROM需要一份rev.0版的《节奏天国》，该ROM请自行去寻找，在此不予提供。

另附两版《节奏天国》的sha1值：
* **rhythmtengoku.gba** `sha1: 67f8adacff79c15d028fffd90de3a77d9ad0602d`
* **rhythmtengoku_rev1.gba** `sha1: e0aaca45045e408e7e1072bde5b39278111e1952`


## 手动构建教程（未翻译）

以下内容来自https://github.com/arthurtilly/rhythmtengoku ，后续会对其进行修改

To install the decomp, you need access to a Linux terminal. If you are on Windows 10 or 11, you can access a Linux terminal easily by installing **WSL (Windows Subsystem for Linux)**. If you are already on Linux, you can skip to the **Installing Dependencies** section. Otherwise, follow this guide to install WSL:

#### 安装依赖

To install the required dependencies for the decomp, first run this command:

`sudo apt install build-essential binutils-arm-none-eabi git libpng-dev ffmpeg`

After this, you should also run this command:

`sudo ln -s /proc/self/mounts /etc/mtab`

This command can help with issues with WSL when installing devkitPro. It is not always necessary to run, and may throw an error. If it does error, don't worry and just move on to the next step.

After this, you will need to install devkitPro. This process is very involved, so just run all these listed commands in this order, entering your password when prompted:

`wget https://apt.devkitpro.org/install-devkitpro-pacman`
`chmod +x ./install-devkitpro-pacman`
`sudo ./install-devkitpro-pacman`
`export DEVKITPRO=/opt/devkitpro`
`export DEVKITARM=/opt/devkitpro/devkitARM`
`export DEVKITPPC=/opt/devkitpro/devkitPPC`
`sudo dkp-pacman -Sy`
`sudo dkp-pacman -S gba-dev`

After running the final command, press enter and then type `y` to finish installing.


#### 克隆仓库

Now you are ready to clone the repository. First, navigate to your home directory with `cd ~/` and then run this command:

`git clone https://github.com/arthurtilly/rhythmtengoku rt`

This will clone the repository into a folder named `rt` in your home directory. You can change `rt` to some other name if you wish to name the repository folder something else.

Before building the ROM, you will also need to install agbcc, the compiler used for Rhythm Tengoku. Make sure you are still in your home directory, and run

`git clone https://github.com/pret/agbcc`

After this, navigate to the agbcc directory with `cd ~/agbcc` and build the compiler by running `./build.sh`. Finally, install the compiler into the Rhythm Tengoku decomp repository by running `./install.sh ~/rt`.

Lastly, you will need to acquire an unmodified rev0 Rhythm Tengoku ROM in order to build the decomp. This ROM is not provided, and you must source it yourself. Once you obtain this ROM, rename it to `baserom.gba` and place it in the `rt` directory.


#### 构建ROM

You are finally ready to build the repository! Navigate to the repository folder with `cd ~/rt`, and build the ROM by running `make -j`. (The `-j` parameter makes the build process able to run on multiple cores of your CPU, heavily speeding up the process.) Once the ROM has finished building, it will output a file at `build/rhythmtengoku.gba`! This is your compiled ROM.