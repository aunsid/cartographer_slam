# Slam using Google Cartogapher

The setup for this project is a os-1-64 mounted to a cart that is attached to a computer.


## Dependencies
`ROS-Kinetic`

## Hardware Setup
os-1-64 mounted to a cart that is attached to a computer.

## Software setup
1. set up cartographer  
https://google-cartographer-ros.readthedocs.io/en/latest/compilation.html
2. setup ouster using the sotware manual and the ouster repo  
https://www.ouster.io/downloads  
https://github.com/aunsid/ouster

## BAGGING DATA FOR BUILDING MAP

1. create ouster_ws  
2. <ouster ws>$git clone https://github.com/ouster-lidar/ouster_example.git  
3. get the ouster hostname   
4. change the ip address and ouster hostname in os1.launch  
5. <ouster ws>$ roslaunch ouster_ros os1.launch  
6. new terminal : $rosbag record -a    

Note: Make sure that you are not running rviz while bagging as publishes  /tf and /tf_static topics.   

## MAKING OFFLINE MAP

1. after recording the data, move the bag file to the created cartographer workspace. preferrably rename the bag file to something else.  
2. change line 19 in file offline_cart_2d.launch with the path to your bag file name in var name default  
3. <cartographer ws>$ roslaunch cartographer_ros offline_cart_2d.launch  
4. watch the map build and see if it happens to have defects. if yes, tune params in the configuration_files/cart_2d.lua - read documentation for more tuning insights!!!  
5. once the offline map is built you get <bag_filename>.bag.pbstream file. note the location of this file.
  
  Result  
https://www.youtube.com/watch?v=vHXnUiaOZ_c&t=143s
  
## REALTIME LOCALIZATION

1. in terminal 1: $ source ouster_ws/devel/setup.bash  
2. in terminal 2: $ source slam_ws/install /setup.bash   
3. in terminal 1: $ roslaunch ouster_ros os2.launch  
4. in terminal 2: $ roslaunch cartographer_ros cart2d_localization.launch  

  Result  
  https://www.youtube.com/watch?v=A7l2gZiFOmw  
  
  
## References
1. https://google-cartographer.readthedocs.io/en/latest/
2.https://www.wilselby.com/2019/06/ouster-os-1-lidar-and-google-cartographer-integration/
