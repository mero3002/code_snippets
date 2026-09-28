#!/bin/bash

if [[ "$#" -ne 1 ]]; then
	echo "only one argument is required.">&2
	exit 1
fi

SRC_PATH=$(realpath "$1")
DES="/home/ajal/Backups"

if [[ ! -d "$SRC_PATH" ]]; then
	echo "path does not exist.">&2
	exit 1
fi

if [[ ! -d "$DES" ]]; then
	echo "NO BACKUPS FOLDER FOUND, CREATING ONE..."
	mkdir "$DES"
	sleep 2
fi

SRC_NAME="${SRC_PATH//\//_}"
timestamp=$(date +"%Y-%m-%d_%H-%M-%S")

bak_name="${SRC_NAME}_${timestamp}.tar.gz"

echo "BACKING UP..."
sleep 3

if tar -czf "${DES}/${bak_name}" "${SRC_PATH}" 2>/dev/null; then
	echo "BACKUP DROPPED IN $DES"
else
	echo "BACKUP FAILED.">&2
	exit 1
fi

