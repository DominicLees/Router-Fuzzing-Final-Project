#!/bin/bash

mkdir includes
docker build -t fuzz -f Dockerfile .