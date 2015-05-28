import Number

# on refait la meme chose que dans main.cpp...

i1 = Number.NumberInt()
i2 = Number.NumberInt(1)
f1 = Number.NumberFloat()
f2 = Number.NumberFloat(1.0)

i1.printValue()
i2.printValue()
f1.printValue()
f2.printValue()

i1.setData("One","Un")
i1.setData("Car","Vehicule de type automobile")

print('getData("Car") = '.i1.getData("Car"))
print("printDatas() :")
i1.printDatas()
