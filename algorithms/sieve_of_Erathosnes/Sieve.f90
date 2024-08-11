program Sieve
    implicit none
    integer ::N
    N=10
contains 
integer function Sieve()
    integer , intent(inout)