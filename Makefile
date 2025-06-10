all: a.so b.so atexit.so

a.so:
	g++ a.cc -shared -fPIC -o a.so

b.so:
	g++ b.cc -shared -fPIC -o b.so

atexit.so:
	g++ atexit.cc -shared -fPIC -o atexit.so

