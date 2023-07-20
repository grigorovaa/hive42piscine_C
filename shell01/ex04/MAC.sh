#!/bin/bash
echo $(ifconfig -a | grep -w ether | awk '{print $2}') | xargs -n1
