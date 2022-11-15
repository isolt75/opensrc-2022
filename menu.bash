#!/bin/bash
# 사용법: ./menu.bash

echo 명령어 메뉴
cat << MENU
    d: 날짜 시간
    l: 현재 디렉터리 내용
    w: 사용자 보기
    q: 끝냄
MENU
stop=0

while (($stop == 0))
do
    echo -n '? '
    read reply
    case $reply in
     "d") date;;
     "l") ls;;
     "w") whoami;;
     "q") stop=1;;
      *) echo error!;;
    esac
done