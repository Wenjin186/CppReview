# Github命令总结
#### 1. 设置使用git时的姓名和邮箱地址：
git config --global user.name "Wenjin186"  
git config --global user.email "zhangwenjin186@gmail.com"
#### 2. 打印github的配置信息
cat ~/.gitconfig
#### 3. 使输出的命令拥有更高的可读性
git config --global color.ui auto
#### 4. 查看当前的git状态
git status
#### 5. 使没有被track的文件进入版本管理系统之下
git add . 所有文件  
git add filename 指定文件
#### 6. 提交
git commit -m "xxxxxx"
#### 7. 查看提交情况
git log  
git log --pretty=short 打印缩略信息
#### 8. 更新仓库
git push
#### 9. 回到最新的commit
git reset --hard HEAD