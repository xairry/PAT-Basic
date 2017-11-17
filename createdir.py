# -*- coding: utf-8 -*-
import os
for i in range(1005,1076):
   # print i
    File_Path = os.getcwd() +'\\'+ str(i)
         #获取到当前文件的目录，并检查是否有report文件夹，如果不存在则自动新建report文件
    print (File_Path)
    if not os.path.exists(File_Path):
        os.makedirs(File_Path)