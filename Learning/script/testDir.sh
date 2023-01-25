#!/bin/bash


# Source files
# SRC_VIMRC="/home/$USER/.myDotFiles/.config/nvim/init.vim"

# Destination files

BACKUP_DIR="/home/$USER/Desktop/.DotBackup"
DST_VIMRC="/home/$USER/Documents/hosts"
mkdir -p ~/Desktop/.DotBackup/ 

[ -f "$DST_VIMRC" ] && mkdir -p $BACKUP_DIR/.vim/ && cp $DST_VIMRC $BACKUP_DIR/.vim/

#ln -sfv $SRC_VIMRC $DST_VIMRC

#if [[ ! -f "$DST_VIMRC" ]]; then
	#rm -rf $DST_VIMRC
#ln -s $SRC_VIMRC $DST_VIMRC
#elif [[ ! -f "$DST_ZSHRC" ]]; then
	#rm -rf $DST_ZSHRC
#ln -s $SRC_ZSHRC $DST_ZSHRC
#fi
