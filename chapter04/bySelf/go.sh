clear

FILE_NAME=$1

if [ -e a.out ];then
	rm a.out
fi

if [ $FILE_NAME != "" ];then
	g++ -std=c++17 $FILE_NAME
	./a.out
fi
