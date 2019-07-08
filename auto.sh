#!/bin/bash

rm -rf docs/*

make clean
make html

cp -r build/html/* docs/

make clean

touch docs/.nojekyll
