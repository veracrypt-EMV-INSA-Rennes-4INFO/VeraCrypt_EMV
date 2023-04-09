#!/usr/bin/expect

# Set variables
set count 10
set keyfile "emv://slot/0"
set mount_dir "/tmp/test"

# Loop through the command
for {set i 0} {$i < $count} {incr i} {

    # Execute the command
    spawn Main/veracrypt -t $mount_dir --keyfiles=$keyfile
	expect {
        "Enter mount directory*" {
            send "\n"
            exp_continue
        }
        "Enter password*" {
            send "\n"
            exp_continue
        }
        "Enter PIM*" {
            send "\n"
            exp_continue
        }
        "Protect hidden volume*" {
            send "n\r"
            expect eof
        }
        timeout {
            puts "Error: timeout"
            exit 1
        }
        eof {
            puts "Error: unexpected end of file"
            exit 1
        }
    }
    # Wait for a few seconds before executing the next command
    sleep 10
    spawn Main/veracrypt -t  -d $mount_dir
    expect eof
}