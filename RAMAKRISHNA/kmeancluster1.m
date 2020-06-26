%{
x1 = randi([0 1],100,1);
x2 = randi([0 3],100,1);
y1 = pskmod(x1,2);
y2 = qammod(x2,4);
y1 = awgn(y1,-10);
y2 = awgn(y2,-10);
y1 = [y1;y2];
%}

y1 = [2, 4, 10, 12, 3, 20, 30, 11, 25];
C1 = 4;
C2 = 11;
for j = 1:5
    cluster1 = [];
    cluster2 = [];
    %{
    cluster3 = [];
    cluster4 = [];
    cluster5 = [];
    cluster6 = [];
    %}
    
    

    for i=1:length(y1)
        temp1 = norm(y1(i)-C1);
        temp2 = norm(y1(i)-C2);
        %{
        temp3 = norm(y1(i)-C3);
        temp4 = norm(y1(i)-C4);
        temp5 = norm(y1(i)-C5);
        temp6 = norm(y1(i)-C6);
        %}
        temp = min([temp1,temp2]);
        if(temp==temp1)
            cluster1(end+1) = y1(i);
            %{
        else(temp==temp2)
            cluster2(end+1) = y1(i);
            
        elseif(temp==temp3)
            cluster3(end+1) = y1(i);
        elseif(temp==temp4)
            cluster4(end+1) = y1(i);
        elseif(temp==temp5)
            cluster5(end+1) = y1(i);
            %}
           
            
        else
            cluster2(end+1) = y1(i);
        end
            
            
    end
    j
    cluster1
    cluster2
    C1 = sum(cluster1)/length(cluster1)
    C2 = sum(cluster2)/length(cluster2)
    %{
    
    C3 = sum(cluster3)/length(cluster3)
    C4 = sum(cluster4)/length(cluster4)
    C5 = sum(cluster5)/length(cluster5)
    C6 = sum(cluster6)/length(cluster6)
    %}
    
    
    figure(j);
    plot([1:length(cluster1)],(cluster1),'r+',[1:length(cluster2)],(cluster2),'k+')
   
end
