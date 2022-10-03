# python script top rename files
import os

#read in file from the directory
for filename in os.listdir():
    #rename files by removing every string before -.
    try:
        os.rename(filename, filename.split(sep='-', maxsplit=1)[1])
    except:
        IndexError