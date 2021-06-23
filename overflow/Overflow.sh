#!/bin/sh

if [[ $(cat /home/brandon/.repos/dwmblocks/overflow/status) != 1 ]]; then
    killall dwmblocks && xsetroot -name " " && overflow & disown
    echo "1" > /home/brandon/.repos/dwmblocks/overflow/status
elif [[ $(cat /home/brandon/.repos/dwmblocks/overflow/status) == 1 ]]; then
    killall overflow && xsetroot -name " " && dwmblocks & disown
    echo "0" > /home/brandon/.repos/dwmblocks/overflow/status
fi
