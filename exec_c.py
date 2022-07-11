
import os
cmd = './rawhefe/cexec 2000000 0'
so = os.popen(cmd).read()
print(so)
print()

absolute_path = os.path.abspath(__file__)
print("Full path: " + absolute_path)
print("Directory Path: " + os.path.dirname(absolute_path))