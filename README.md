# ROS_Package_example
## I. Installation
1. Ubuntu 16.04 or newer
2. One of these following version of [ROS](https://ros.org)
    - [Lunar Loggerhead](http://wiki.ros.org/lunar)
    - [Melodic Morenia](http://wiki.ros.org/melodic)
    - It is recommended to install the full version
      ```
      $ sudo apt-get install ros-<distro>-desktop-full
      ```
3. Create catkin workspace
    ```
    $ mkdir -p ~/catkin_ws/src
    $ cd ~/catkin_ws/
    $ catkin_make
    $ echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
    $ source ~/.bashrc
    ```
  
4. Install rosbridge-suite
    ```
    $ sudo apt-get install ros-<distro>-rosbridge-server
    ```  
    - Note that if you are using VirtualBox, you will need to do some addition [steps](https://github.com/siemens/ros-sharp/wiki/User_Inst_UbuntuOnOracleVM).

5. Clone this repository
    - Install `git` and `git-lfs` if you haven't
    - `cd` to the `catkin` source folder
    ```
    $ cd ~/catkin_ws/src
    ```
    - `clone` the repo
    ```
    $ git clone https://github.com/fpt-corp/ROS_Package_example [(optional) shorter_file_name]
    ```
6. `make` the `src` and run some ros nodes
    - `cd` back to the workspace
    ```
    $ cd ~/catkin_ws
    ```
    - `make` the `src`
    ```
    $ catkin_make
    ```
    - Add the maked `src` to the terminal
    ```
    $ source devel/setup.bash
    ```
        + You will need to run these steps everytime you change "something".
    - Launch ros nodes
    ```
    $ roslaunch lane_detect lane_detect.launch
    ```
    - You will need to leave this terminal as it is in order to run the simulator.
- Now, let's run the [simulator](unity/README.md).
