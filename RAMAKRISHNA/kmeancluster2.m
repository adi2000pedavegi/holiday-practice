%sample test code for clustering

load idptry
y1 = frame;
%loading the data from a random data file 

%{
cluster centroids are pre determined as these are constellation points for
bpsk and qpsk
%}

C1 = 1 + 0i;
C2 = -1 + 0i;
C3 = (-1 + 1i)/sqrt(2);
C4 = (-1 - 1i)/sqrt(2);
C5 = (1 + 1i)/sqrt(2);
C6 = (1 - 1i)/sqrt(2);

%kmeans logic

for j = 1:5
    cluster1 = [];
    cluster2 = [];
    cluster3 = [];
    cluster4 = [];
    cluster5 = [];
    cluster6 = [];
    
    %minimum distance logic
    for i=1:length(y1)
        temp1 = norm(y1(i)-C1);
        temp2 = norm(y1(i)-C2);
        temp3 = norm(y1(i)-C3);
        temp4 = norm(y1(i)-C4);
        temp5 = norm(y1(i)-C5);
        temp6 = norm(y1(i)-C6);
        temp = min([temp1,temp2,temp3,temp4,temp5,temp6]);
        %updating the cluster every time
        if(temp==temp1)
            cluster1(end+1) = y1(i);
        elseif(temp==temp2)
            cluster2(end+1) = y1(i);
        elseif(temp==temp3)
            cluster3(end+1) = y1(i);
        elseif(temp==temp4)
            cluster4(end+1) = y1(i);
        elseif(temp==temp5)
            cluster5(end+1) = y1(i);
        else
            cluster6(end+1) = y1(i);
        end
    end
    j
    %updating the centroid
    C1 = sum(cluster1)/length(cluster1)
    C2 = sum(cluster2)/length(cluster2)
    C3 = sum(cluster3)/length(cluster3)
    C4 = sum(cluster4)/length(cluster4)
    C5 = sum(cluster5)/length(cluster5)
    C6 = sum(cluster6)/length(cluster6)
    %plotting the clusters every time
    figure(j);
    plot(real(cluster1),imag(cluster1),'r+',real(cluster2),imag(cluster2),'k+',real(cluster3),imag(cluster3),'g+',real(cluster4),imag(cluster4),'c+',real(cluster5),imag(cluster5),'b+',real(cluster6),imag(cluster6),'y+')
end

%As most of the points are assigned to cluster 3,4,5,6 we can say it is
%QPSK modulated.