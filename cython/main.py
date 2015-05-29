# -*- coding: utf-8 -*-
from number import NumberInt, NumberFloat
from hello import Hello

h = Hello()
h.sayHello()

i1 = NumberInt();
f1 = NumberFloat();
i2 = NumberInt(1);
f2 = NumberFloat(1.0);

i1.printValue()
i2.printValue()
f1.printValue();
f2.printValue();

# petit test avec les datas...
i1.setData("One","Un");
i1.setData("Car","Véhicule de type automobile");

print("getData('Car') = "),
print(i1.getData("Car"));

print("getData('One') = "),
print(i1.getData("One"));


print("====== printDatas() =======");
i1.printDatas();

