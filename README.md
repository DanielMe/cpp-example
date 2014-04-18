cpp-example
===========

An example how to get the haskell/c++ interop working.

 * Checkout this repository
 * cd into the src folder
 * run the following commands:

```Shell
cpp-example/src> g++ -o dist/build/c/example_interface.so -fpic -shared c/example_interface.cpp       (b'master'|✔) (daniel)
cpp-example/src> ghci dist/build/c/example_interface.so -lstdc++                                      (b'master'|✔) (daniel)
GHCi, version 7.6.3: http://www.haskell.org/ghc/  :? for help
Loading package ghc-prim ... linking ... done.
Loading package integer-gmp ... linking ... done.
Loading package base ... linking ... done.
Loading object (dynamic) dist/build/c/example_interface.so ... done
Loading object (dynamic) /usr/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/../../../../lib/libstdc++.so ... done
final link ... done
Prelude> :load "Example/Interface.hs"
[1 of 1] Compiling Example.Interface ( Example/Interface.hs, interpreted )
Ok, modules loaded: Example.Interface.
*Example.Interface> runTest
Hello from C++
*Example.Interface> 
```