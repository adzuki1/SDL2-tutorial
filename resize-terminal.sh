#!/bin/bash

# Set terminal window size (width x height)
WIDTH=93
HEIGHT=30

xdotool windowsize $(xdotool getactivewindow) $((WIDTH*8)) $((HEIGHT*17))

