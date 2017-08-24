#!/bin/sh
ifconfig | grep 'ether' | sed "s/[[:blank:]]//g;s/ether//"
