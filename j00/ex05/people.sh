#!/bin/sh
ldapsearch -Q "(uid=z*)" -S cn | grep 'cn:' | cut -d':' -f 2 | sed '/^$/d' | sort -rf | sed 's/^ *//'
