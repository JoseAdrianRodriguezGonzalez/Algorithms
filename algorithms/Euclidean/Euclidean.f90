program Euclidean
    implicit none
    integer :: a,b,result
    print *,"Put two numbers"
    read *,a
    read* ,b
    call exchange(a,b)
    result=Euclid(a,b)
    print *, "The greatest common divisor is", result
contains
subroutine exchange(a,b)
    integer, intent(inout)::a,b
    integer::aux
    if(b>a) then
        aux = b
        b = a
        a = aux
    end if
end subroutine exchange
integer function Euclid(a,b)
    integer, intent(in)::a,b
    integer::r
    integer :: x, y
    x = a
    y = b
    do while (y/=0)
        r=mod(x,y)
        x=y
        y=r
    end do
    Euclid=x
end function Euclid
end program Euclidean