#!/bin/sh

find . -name "*.sh" -type f -print | sed "s/.sh$//g"
