#!/bin/bash

mkdir -p includes
docker build -t fuzz -f Dockerfile .