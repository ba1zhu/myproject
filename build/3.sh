cd ..
zip log.zip log.log
cp log.zip log
cd log
unzip log.zip
cat log.log | awk '$2=="student:"{print $2}'|uniq -c >1.txt
echo "修改学生信息次数："
cat 1.txt | awk '{print $1}'
read -p "请输入要查找的学生的学号:" c
flag=0
for a in `cat log.log | awk '{print $3}'`
do
if [ $a = $c ]
then
flag=1
break
else
flag=0
fi
done
if [ $flag -eq 1 ]
then
echo "Yes"
else
echo "No"
fi


