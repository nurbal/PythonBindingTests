all: 
	autowrap --out build/number.pyx pxd/number_if.pxd
	autowrap --out build/hello.pyx pxd/hello_if.pxd
	python setup.py build_ext --inplace
	
test: all
	python main.py

clean:
	rm -rf build/*
	rm -f *.so
	rm -f *.cpp
	rm -f *.pyx
