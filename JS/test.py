from Bio.Affy import CelFile
import numpy as np
import matplotlib.pyplot as plt
with open("C:\\Users\\Nilesh Bhanot\\Desktop\\GSM706039.CEL") as handle:
    c = CelFile.read(handle)
    print(c.intensities)
    arr = np.array(c.intensities)
    arr = arr.reshape((712, 712, -1))
    print(arr.shape)
    plt.imshow(arr)