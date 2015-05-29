from distutils.core import setup, Extension
import pkg_resources
from Cython.Build import cythonize

data_dir = pkg_resources.resource_filename("autowrap", "data_files")

setup(ext_modules = cythonize(Extension(
           "number",                                            # our Cython source
           sources=["build/number.pyx", "../Number.cpp"],             # additional source file(s)
           include_dirs=[data_dir],
           language="c++",                                      # generate C++ code
      )))

setup(ext_modules = cythonize(Extension(
           "hello",                                             # our Cython source
           sources=["build/hello.pyx", "../hello.cpp"],               # additional source file(s)
           include_dirs=[data_dir],
           language="c++",                                      # generate C++ code
      )))

