#!/usr/bin/bash

CUR_DIR=$(pwd)
docker run --rm -it -v $CUR_DIR:/project -w /project --network=host --user=$UID eigen_bench:latest /bin/bash ./build.sh


