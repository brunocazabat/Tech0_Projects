#!/bin/bash                                                                                                                                                                                   

export MY_LINE1=24
export MY_LINE2=42

cat "Day02/passwd" | cut -d":" -f1 | rev | sed -n 0~2p | sort -r | sed -n ""$MY_LINE1",\
"$MY_LINE2" p" | xargs | sed -e 's/ /,\ /g' -e 's/$/./g'

