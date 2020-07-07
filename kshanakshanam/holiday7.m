%Basics of deep neural networks and classification using a trained networks
[trainx,trainy] = digitTrain4DArrayData;

%Neural network used for training data(completely using in-buit commands)
layers = [ ...
    imageInputLayer([28 28 1])     %image input(3-dimension) of 4-dimension(number of images)
    convolution2dLayer(5,20)       %Convolution layer of filter size(1-D) and netwidth
    reluLayer                      %Retified linear unit
    maxPooling2dLayer(2,'Stride',2) %max pooling of 1-Dimensional value
    fullyConnectedLayer(10)
    softmaxLayer
    classificationLayer];

options = trainingOptions('sgdm'); %Setting training options to schostic gradient descent momentum using in-buit commands
net = trainNetwork(trainx,trainy,layers,options);

[testx,testy]  = digitTest4DArrayData;
ypred  = classify(net,testx);    %Input arguments for classify should be of 4-Dimension

acc = mean(ypred==testy)

