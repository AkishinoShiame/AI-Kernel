#!/usr/bin/python

import sys
import getopt
import jieba

jieba.dt.cache_file = 'jieba.cache.new'

input_path = 'input.txt'
output_path = 'output.txt'

def scut2word(input_path, output_path):
    input_fd  = open(input_path, "r")
    output_fd = open(output_path, "w")

    for line in input_fd:
        print("[Info] Origional Line:", line, end='')
        seg_list = jieba.cut(line)
        after_cut_line = " ".join(seg_list)
        print("[Info] Finished Cut Line from origional:", after_cut_line, end='')
        output_fd.write(after_cut_line)

    input_fd.close()
    output_fd.close()
    
    print("[System Message]: Finished Cut!!! Output to", output_path)


def main(argv):
   inputfile = False
   outputfile = False
   try:
      opts, args = getopt.getopt(argv,"hi:o:",["ifile=","ofile="])
   except getopt.GetoptError:
      print('Tool_JiebaCut_PreProcess.py -i <inputfile> -o <outputfile>')
      sys.exit(2)
   for opt, arg in opts:
      if opt == '-h':
         print('test.py -i <inputfile> -o <outputfile>')
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = arg
      elif opt in ("-o", "--ofile"):
         outputfile = arg

   if not inputfile or not outputfile:
       print('Tool_JiebaCut_PreProcess.py -i <inputfile> -o <outputfile>')
       sys.exit(2)

   print("[System Message]: Preprocess file Word cut for input file", input_path)
   scut2word(inputfile, outputfile)

if __name__ == "__main__":
   main(sys.argv[1:])
