
# Reader
a **Simple** &amp; **Minimalist** 'cat' clon

The most notable difference is that in reality this program only copies the basic functionality of __Cat__, which would be displaying the content of a file that is passed through the terminal

> Note from the Dev
> 
> I made this program out of boredom, entertainment and learning, I do not recommend its use, literally cat is installed with GNU Utils and is much more complete.

## Use

You have to pass a single file as the first parameter, something like this:

` $ reader FileTest.txt `

The program **does not** **support** more than 1 file per call, it will give an **Error** if too many or too few arguments are passed

## Compile & Installation (From Source)
Clone the repository:
`$ git clone https://github.com/lithinium67/Reader.git `

Run Make:
`$ make`
> This will generate a Binary in the same folder.

If you want the binary to be installed on the system, execute:

`$ make install`

and if you want to clean the binary (inside the repo folder) run

`$ make clean`

# License
The Program is under the MIT license, as clarified by the **LICENSE** file.
