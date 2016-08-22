all: fakechown.so demo
	
fakechown.so: fakechown.c
	gcc -shared -fPIC fakechown.c -o fakechown.so

demo:
	strace chown $$USER .
