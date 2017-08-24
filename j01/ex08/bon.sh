#!/bin/sh
ldapsearch -xLLL sn='*'bon'*' dn | grep "dn" | wc -l | sed "s/ //g"
