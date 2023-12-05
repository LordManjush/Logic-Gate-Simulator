# Logic-Gate-Simulator

Version ```c++ 14```
*Single header*

How to start with the library
Add the ```LGS.h``` file to your project

Example
* Starting out
```cpp
#include "LGS.h"

namespace cg = CodeGate;

cg::Logic_VM vm;

int main()
{
    return 0;
}
```
* Contains AND, OR, NOT, NAND gates
  
* Example for AND gate
```cpp
  
#include "LGS.h"

namespace cg = CodeGate;

cg::Logic_VM vm;

int main()
{
    bool result;
    vm.AND(cg::ON, cg::ON, result);
    if(result)
    {
        printf("Works!");
    }

    return 0;
}
```
Result - ```Works!```
* Example for OR gate
```cpp
  
#include "LGS.h"

namespace cg = CodeGate;

cg::Logic_VM vm;

int main()
{
    bool result;
    vm.OR(cg::ON, cg::OFF, result);
    if(result)
    {
        printf("Works!");
    }

    return 0;
}
```
Result - ```Works!```

* Example for NOT gate
```cpp
  
#include "LGS.h"

namespace cg = CodeGate;

cg::Logic_VM vm;

int main()
{
    bool result;
    vm.NOT(cg::ON, result);
    if(result)
    {
        printf("Works!");
    }
    return 0;
}
```
Result - ```Works!```

* Example for NAND gate
```cpp
  
#include "LGS.h"

namespace cg = CodeGate;

cg::Logic_VM vm;

int main()
{
    bool result;
    vm.NOT(cg::OFF, cg::OFF, result);
    if(result)
    {
        printf("Works!");
    }
    return 0;
}
```
Result - ```Works!```
