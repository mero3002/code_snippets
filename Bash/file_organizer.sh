#!/bin/bash

docs=0
apps=0
audio=0
vids=0
pics=0
compressed=0
data=0
code=0

shopt -s nocaseglob

if compgen -G '*.pdf' > /dev/null ||
   compgen -G '*.docx' > /dev/null ||
   compgen -G '*.txt' > /dev/null; then
    docs=1
fi

if compgen -G '*.exe' > /dev/null ||
   compgen -G '*.bin' > /dev/null; then
    apps=1
fi

if compgen -G '*.mp3' > /dev/null ||
   compgen -G '*.wav' > /dev/null; then
    audio=1
fi

if compgen -G '*.mp4' > /dev/null ||
   compgen -G '*.mkv' > /dev/null ||
   compgen -G '*.mov' > /dev/null; then
    vids=1
fi

if compgen -G '*.png' > /dev/null ||
   compgen -G '*.jpg' > /dev/null ||
   compgen -G '*.jpeg' > /dev/null; then
    pics=1
fi

if compgen -G '*.zip' > /dev/null ||
   compgen -G '*.7z' > /dev/null ||
   compgen -G '*.tar' > /dev/null ||
   compgen -G '*.bz2' > /dev/null ||
   compgen -G '*.gz' > /dev/null ||
   compgen -G '*.rar' > /dev/null; then
    compressed=1
fi

if compgen -G '*.json' > /dev/null ||
   compgen -G '*.csv' > /dev/null ||
   compgen -G '*.xml' > /dev/null ||
   compgen -G '*.md' > /dev/null ||
   compgen -G '*.log' > /dev/null; then
    data=1
fi

if compgen -G '*.py' > /dev/null ||
   compgen -G '*.cpp' > /dev/null ||
   compgen -G '*.c' > /dev/null ||
   compgen -G '*.h' > /dev/null ||
   compgen -G '*.java' > /dev/null ||
   compgen -G '*.js' > /dev/null ||
   compgen -G '*.ts' > /dev/null ||
   compgen -G '*.html' > /dev/null ||
   compgen -G '*.css' > /dev/null; then
    code=1
fi

shopt -u nocaseglob

# ------------------------------------------------------------------------------

if [[ "$docs" == 1 && ! -d "Documents" ]]; then
    mkdir Documents
fi
if [[ "$apps" == 1 && ! -d "Apps" ]]; then
    mkdir Apps
fi

if [[ "$audio" == 1 && ! -d "Audio" ]]; then
    mkdir Audio
fi

if [[ "$vids" == 1 && ! -d "Videos" ]]; then
    mkdir Videos
fi

if [[ "$pics" == 1 && ! -d "Pictures" ]]; then
    mkdir Pictures
fi

if [[ "$compressed" == 1 && ! -d "Compressed" ]]; then
    mkdir Compressed
fi

if [[ "$data" == 1 && ! -d "Data" ]]; then
    mkdir Data
fi

if [[ "$code" == 1 && ! -d "Code" ]]; then
    mkdir Code
fi

# ------------------------------------------------------------------------------

if (( docs )); then
    echo "Organizing Documents..."
    
    find . -maxdepth 1 -type f \
        \( -iname '*.pdf' -o -iname '*.docx' -o -iname '*.txt' \) \
        -exec mv -t Documents '{}' '+'
        
    sleep 2
    echo "<< Documents Organized >>"
    echo ""
fi

if (( apps )); then
    echo "Organizing Apps..."

    find . -maxdepth 1 -type f \
        \( -iname '*.exe' -o -iname '*.bin' \) \
        -exec mv -t Apps '{}' '+'
        
    sleep 2
    echo "<< Apps Organized >>"
    echo ""
fi

if (( audio )); then
    echo "Organizing Audio..."

    find . -maxdepth 1 -type f \
        \( -iname '*.mp3' -o -iname '*.wav' \) \
        -exec mv -t Audio '{}' '+'
        
    sleep 2
    echo "<< Audio Organized >>"
    echo ""
fi

if (( vids )); then
    echo "Organizing Videos..."

    find . -maxdepth 1 -type f \
        \( -iname '*.mp4' -o -iname '*.mkv' -o -iname '*.mov' \) \
        -exec mv -t Videos '{}' '+'
        
    sleep 2
    echo "<< Videos Organized >>"
    echo ""
fi

if (( pics )); then
    echo "Organizing Pictures..."
    
    find . -maxdepth 1 -type f \
        \( -iname '*.png' -o -iname '*.jpg' -o -iname '*.jpeg' \) \
        -exec mv -t Pictures '{}' '+'
        
    sleep 2
    echo "<< Pictures Organized >>"
    echo ""
fi

if (( compressed )); then
    echo "Organizing Compressed..."
    
    find . -maxdepth 1 -type f \
        \( -iname '*.zip' -o -iname '*.7z' -o -iname '*.tar' \
        -o -iname '*.bz2' -o -iname '*.gz' -o -iname '*.rar' \) \
        -exec mv -t Compressed '{}' '+'
        
    sleep 2
    echo "<< Compressed Organized >>"
    echo ""
fi

if (( data )); then
    echo "Organizing Data..."

    find . -maxdepth 1 -type f \
        \( -iname '*.json' -o -iname '*.csv' -o -iname '*.xml' \
        -o -iname '*.md' -o -iname '*.log' \) \
        -exec mv -t Data '{}' '+'
        
    sleep 2
    echo "<< Data Organized >>"
    echo ""
fi

if (( code )); then
    echo "Organizing Code..."

    find . -maxdepth 1 -type f \
        \( -iname '*.py' -o -iname '*.cpp' -o -iname '*.c' \
        -o -iname '*.h' -o -iname '*.java' -o -iname '*.js' \
        -o -iname '*.ts' -o -iname '*.html' -o -iname '*.css' \) \
        -exec mv -t Code '{}' '+'
        
    sleep 2
    echo "<< Code Organized >>"
    echo ""
fi
