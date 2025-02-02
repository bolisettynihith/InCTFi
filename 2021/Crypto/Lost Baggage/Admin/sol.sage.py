

# This file was *autogenerated* from the file sol.sage
from sage.all_cmdline import *   # import sage library

_sage_const_1 = Integer(1); _sage_const_2 = Integer(2)
from Crypto.Util.number import long_to_bytes as l2b
import pickle

val = pickle.load(open('enc.pickle', 'rb'))

def atk(val, nbit):
	A = Matrix(ZZ, nbit+_sage_const_1 ,nbit+_sage_const_1 )
	for i in range(nbit):
		A[i,i] = _sage_const_2 
		A[i,nbit] = val['pbkey'][i]
		A[nbit,i] = _sage_const_1 
	A[nbit,nbit] = val['cip']
	return A.LLL()

nbit = len(val['pbkey'])
res = atk(val, nbit)
for i in range(nbit):
	if all([j in range(-_sage_const_2 , _sage_const_2 ) for j in res[i][_sage_const_1 :-_sage_const_1 ]]):
		print(res[i])
		msg = int(''.join(['1' if i<=-_sage_const_1  else '0' for i in res[i][:-_sage_const_1 ][::-_sage_const_1 ]]), _sage_const_2 )
		print(l2b(msg))

