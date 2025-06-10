import sys

import ctypes

for arg in sys.argv[1:]:
    ctypes.CDLL(f"./{arg}.so")