from tensorflow.keras.datasets import mnist
import numpy as np
from sklearn import metrics
from sklearn import tree
from numba import jit
import sys

depth = int(sys.argv[1])
verbose = int(sys.argv[2])
@jit 
def quant(x_train, thresh): 
    for i in range(x_train.shape[0]): 
        for j in range(x_train.shape[1]): 
            for k in range(x_train.shape[2]): 
                if x_train[i,j,k]>thresh: 
                    x_train[i,j,k]=1 
                else: 
                    x_train[i,j,k]=0 
    return x_train 


for i in range(1,253):
    (x_train, y_train), (x_test, y_test) = mnist.load_data()
    x_train = quant(x_train, i)
    x_test = quant(x_test, i)
    x_train = np.reshape(x_train, [x_train.shape[0], x_train.shape[1]*x_train.shape[2]])
    x_test = np.reshape(x_test, [x_test.shape[0], x_test.shape[1]*x_test.shape[2]])    

    clf = tree.DecisionTreeClassifier(max_depth=depth)
    clf.fit(x_train, y_train)
    print(clf.predict(x_train[0:2]))
    y_pred = clf.predict(x_test) 
    if verbose:
        print("threshold: ",i)
        print("accuracy",metrics.accuracy_score(y_test, y_pred))

if not verbose:
    r = tree.export_text(clf)
    print(r)
