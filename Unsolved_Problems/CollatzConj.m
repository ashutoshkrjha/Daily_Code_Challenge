S=[]; %Matrix for stopping times

for n = 1:10000000
    x=n;
    count=0;
    while x ~= 1
        if mod(x,2) == 0
            x=x/2;
            count=count+1;
        else
            x=3*x+1;
            count=count+1;
        end
    end
    S(end+1)=count;
end

n= 1:10000000;
figure(1)
plot(n,S,'.');