# Simple benchmark to test Eigen compatibility

## Build with docker

Note: all commands should be run inside current directory.

Build docker image:
```shell
./build_docker.sh
```

Build binary:
```shell
./build_with_docker.sh
```

Result file will be located inside: `./build/demo_eigen_bench`.


## Environment

* OS: `ubuntu 22.04`
* Toolchains: `g++-aarch64-linux-gnu`, `gcc-aarch64-linux-gnu`
* Extra libs: `libeigen3-dev`
* Build system: `cmake`

