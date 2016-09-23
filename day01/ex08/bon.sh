#!/bin/sh
ldapsearch -Q 'cn=*' @attrs = "cn" | grep cn | cut -d ":" -f2 | sed "s/ //" | grep bon | cut -d " " -f1 | wc -l | sed "s/ //g
