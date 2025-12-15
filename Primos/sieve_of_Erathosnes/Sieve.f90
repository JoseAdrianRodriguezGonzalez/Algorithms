program Sieve
    implicit none
    integer ::i,j
    integer, parameter ::N=100000000
    logical ,dimension(N)::a
    a=.true.
    a(1)=.false. 
    do i=2,int(sqrt(real(N)))
        if(a(i)) then 
            do j=i*i,N,i
                a(j)=.false.
            end do
        end if
    end do
    print *,"Numeros primos hasta "   ,N,":"
    do i=2,N 
        if(a(i)) then 
            print*,i
        end if
    end do
end program Sieve