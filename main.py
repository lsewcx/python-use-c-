import ctypes

ll = ctypes.CDLL("./test.so")
ll.get()
