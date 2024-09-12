FROM ubuntu:22.04

RUN apt update && apt install -y \
  gcc g++ cmake libeigen3-dev gcc-aarch64-linux-gnu g++-aarch64-linux-gnu \
  && rm -rf /var/cache/apk/* && apt autoremove -y && apt clean

