# Dockerfile with with G++, CMake and Google Test to run unit tests.

FROM alpine:latest

RUN apk add --no-cache -q -f git cmake make g++

RUN git clone -q https://github.com/google/googletest.git /googletest \
  && mkdir -p /googletest/build \
  && cd /googletest/build \
  && cmake .. && make && make install \
  && cd / && rm -rf /googletest

WORKDIR /cpprime
COPY . .

CMD [ "make", "test" ]