ldapsearch -Q "uid=z*" cn | sort -r | grep -i "cn" | sed /#/d
