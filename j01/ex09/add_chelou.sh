#!/bin/sh
echo "obase=13;ibase=5; $FT_NBR1 + $FT_NBR2" | sed "y_['\\\"?!]_[01234]_;y_[mrdoc]_[01234]_;s/3base/obase/g" | bc | sed "y_[0123456789ABC]_[gtaio luSnemf]_"
