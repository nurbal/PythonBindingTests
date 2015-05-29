Ca utilise CYTHON + AUTOWRAP

https://github.com/cython/
https://github.com/uweschmitt/autowrap

start with:
autowrap --out build/number.pyx pxd/number.pxd
autowrap --out build/hello.pyx pxd/hello.pxd

To generate the pyx (Python side of the wrapper) from the pxd (C-side of the wrapper)

then:
python setup.py build_ext --inplace (to compile the module)

Attention aux noms ! 
