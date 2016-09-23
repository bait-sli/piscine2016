#!/bin/sh
ls -l | sed "N;P;d" | grep -v "total"
