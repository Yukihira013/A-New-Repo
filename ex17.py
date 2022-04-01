
from sys import argv
script, from_file, to_file = argv

file1 = open(from_file)
fromstuff = file1.read()

file2 = open(to_file,'w')
file2.write(fromstuff) 