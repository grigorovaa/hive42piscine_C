#!/bin/bash
echo $(id -Gn $FT_USER) | tr " " "," | tr -d "\n"
