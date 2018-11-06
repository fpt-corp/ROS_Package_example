## Requirements
- Completed previous [guides](../README.md).
- OpenGL 3.2 or later
    - If you are using VirtualBox, you will not able to run this program yet because VirtualBox only support OpenGL 2.x
    - If you are using any virtual machine other than VirtualBox, you may not able to setup these [steps](https://github.com/siemens/ros-sharp/wiki/User_Inst_UbuntuOnOracleVM) although they may not suffer OpenGL problem.

## Installation
    - If your `test.x86_64` file is just a text file looks similar like this
    ```
    version https://git-lfs.github.com/spec/v1
    oid sha256:4882eb05e85521b333621a15f0f76083c45ae66f869557d5d6c4838ffe8e3930
    size 100719740
    ```
    then you will need to run the following comand to get the actual file because `git clone` hasn't `pull` this file down for you yet.
    ```
    $ git lfs pull --include "test.x86_64"
    ```
    or you can download the [file](https://github.com/fpt-corp/ROS_Package_example/blob/master/unity/test.x86_64) directly from github and put it wherever you want.
    - 