all: demo

whydidyouleave.so: whydidyouleave.c
	gcc -shared -fPIC whydidyouleave.c -o whydidyouleave.so

demo: exiter whydidyouleave.so
	LD_PRELOAD=whydidyouleave.so ./exiter

exiter: exiter.c
	gcc -g exiter.c -o exiter
