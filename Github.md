主要讲解4个知识点：

（1）安装git客户端（windows版本）；

（2）在IDEA中配置Git；

（3）在IDEA中配置Github；

（4）从Github上下载项目导入到IDEA；

下面是录制的视频课程，视频时长为8分钟，建议在wifi环境下观看：

不方便观看视频的网友，也可以阅读下面的图文教程：

安装git

Git是目前比较流行的一个版本管理工具（以前使用SVN作为版本控制工具），在企业开发中使用非常普遍，IntelliJ IDEA也对集成Git客户端提供了很好的支持，在IDEA中配置Git之前，首先要在自己电脑上安装Git客户端工具。

登录git的官方网站下载windows版本的git客户端：

https://git-scm.com/download/win


由于我的电脑是64位的操作系统，所以我下载的是64-bit的版本，请根据自己的操作系统下载对应的版本进行安装。

下载好git客户端到本地磁盘上，是一个名为Git-2.15.1.2-64-bit.exe的可执行文件，双击即可安装，安装过程也是非常的简单，一路点击next（下一步）直到安装完成：


注意，要记住自己把git安装到了磁盘的哪个目录下，后面在IDEA中进行配置git的时候需要用到。我将git安装到了D:\java\Git目录下。git安装完成后，在桌面上点击鼠标右键，如果能看到"Git GUI Here"和"Git Base Here"这两个命令，说明git客户端安装成功。

可以选择"Git Base Here"打开一个git的命令行窗口，输入"git --version"目录来查看git的版本：


在IDEA中配置Git

通过在IntelliJ IDEA开发工具中配置Git客户端，可以使用IDEA提供的图形化命令来管理git服务器上的代码，比如可以从git服务器更新代码、向git服务器提交代码以及解决版本冲突等，功能非常强大，所以即使你不懂git命令也可以熟练操作（后面我们会通过视频专门讲解IDEA提供的Git图形化工具的使用，比如更新代码、提交代码以及解决代码冲突等操作，请持续关注本公众号更新的内容）。

要配置git，首先需要打开IDEA的Settings（配置）窗口，有3种打开方式：

（1）在欢迎界面，点击右下角的齿轮图标Configuration，在下拉菜单中选择Settings；

（2）选择菜单栏File->Settings；

（3）使用快捷键Ctrl+Alt+S；

打开Settings窗口之后，在左侧展开Version Control，选择Git，然后在右侧选择自己刚才安装好的git的安装目录中的bin目录下面的git.exe可执行文件：


点击右侧的“Test”按钮，如果弹出如下提示，说明IDEA中的git配置成功：


配置GitHub

只有在IDEA中配置好了Git，才可以配置Github，因为Github是依赖于Git客户端的。

使用快捷键Ctrl+Alt+S打开Settings配置窗口，在左侧找到Version Control，展开后选择GitHub，然后在右侧Auth Type选择Password，表示通过用户名和密码的方式配置GitHub，填写好github的官方域名以及自己的github用户名和密码之后，点击右边的“Test”按钮进行测试：


点击“Test”按钮之后，如果弹出如下提示，说明在IDEA中github配置成功：


将github上的项目导入到IDEA开发工具中

我已经在github网站上面创建好了一个maven工程，在浏览器访问如下地址可以找到该项目：

https://github.com/xuebus/xbs-springboot-maven-jar

点击“Clone or download”并拷贝该项目的地址：


然后在IDEA中依次选择菜单栏中的VCS->Checkout from Version Control->GitHub：


如果你正处在IDEA的欢迎界面，可以选择Checkout from Version Control->GitHub：


你将打开如下窗口：


将刚才从github网站上拷贝的项目地址粘贴到上面的URL输入框中，并填写项目的保存路径，然后点击clone按钮。

选择Yes：

选择第二项Import project from external model，并选择Maven（因为我们要导入的是一个Maven工程），然后点击Next：


点击Next：


点击Next：


选择JDK版本，点击Next：


填写项目名称，点击Finish完成：


如果是初次打开项目，可能需要等待一段时间，IDEA会从Maven仓库下载依赖包，请耐心等待IDEA底部的进度条加载完成。你可以展开IDEA右侧边栏中的Maven Project（前提是你的IDEA中已经配置好了Maven）来查看依赖包的情况：


由于该项目是一个SpringBoot工程，可以通过运行MavenApplication类中的main方法来启动工程。

如果在控制台中看到Tomcat started on port:8080字样，说明工程启动成功：


在浏览器中访问 http://localhost:8080 如果看到服务器端返回一个时间戳，说明项目运行正常：

