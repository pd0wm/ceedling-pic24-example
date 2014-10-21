OUT_FILE = "test/simulation/out.txt"
File.delete OUT_FILE if File.exists? OUT_FILE 
# sim_io = IO.popen("sim30 test/simulation/sim_instructions.txt")
sim_io = IO.popen("/Applications/microchip/mplabx/mplab_ide.app/Contents/Resources/mplab_ide/bin/mdb.sh test/simulation/mdb_instructions.txt")


Process.wait(sim_io.pid)

if File.exists? OUT_FILE 
    file_contents = File.read OUT_FILE
    print file_contents
end