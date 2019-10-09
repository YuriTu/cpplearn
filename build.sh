#emcc wasm.cpp -s WASM=1 -s EXIT_RUNTIME=1 -o hello.html
emcc wasm.cpp -s WASM=1 -s EXIT_RUNTIME=0 -s EXPORTED_FUNCTIONS="['_main']" -o factorial.js