# ServerAlive2-Remote-enumeration-of-network-interfaces

使用的是IObjectExporter的ServerAlive2 方法，不需要用户验证（https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dcom/c898afd6-b75d-4641-a2cd-b50cb9f5556d）。

该项目可以枚举目标计算机中的IP地址，前提是你能ping通,效果如下。

![](img\1.png)

你可以按照你的需求来改，这里的ip是写死的

![](img\2.png)

参考：

https://airbus-cyber-security.com/the-oxid-resolver-part-1-remote-enumeration-of-network-interfaces-without-any-authentication/