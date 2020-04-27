all:
	gcc -c libnaloga1.c -o libnaloga1.o
	ar rcs libnaloga1.a libnaloga1.o 
	gcc naloga1.c -o naloga1_staticno libnaloga1.a
	gcc -c -fPIC libnaloga1.c
	ld -shared -soname libnaloga1.so.1 -o libnaloga1.so.1.0 libnaloga1.o
	ldconfig -v -n .
	ln -sf libnaloga1.so.1 libnaloga1.so
	gcc naloga1.c -o naloga1_implicintno -L. -lnaloga1
	export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
	gcc naloga1_explicitno.c -o naloga1_explicitno -ldl
clean:
	rm -rf libnaloga1.o
	rm -rf libnaloga1.a
	rm -rf libnaloga1_staticno
	rm -rf libnaloga1.so.1.0
	rm -rf libnaloga1.so.1
	rm -rf libnaloga1.so
	rm -rf naloga1_explicitno
	rm -rf naloga1_staticno
	rm -rf naloga1_implicintno
