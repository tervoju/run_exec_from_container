# trial to run local exec program from docker container

container as python code

local exec file as C

binding local folder to container and running exec with 

os.popen(cmd).read()


docker run --mount type=bind,source=/home/jte/Development/rawhefe,target=/app/rawhefe sandbox