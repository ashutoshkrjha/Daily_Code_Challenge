function [J, grad] = costFunctionReg(theta, X, y, lambda)
%COSTFUNCTIONREG Compute cost and gradient for logistic regression with regularization
%   J = COSTFUNCTIONREG(theta, X, y, lambda) computes the cost of using
%   theta as the parameter for regularized logistic regression and the
%   gradient of the cost w.r.t. to the parameters. 

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(theta));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost of a particular choice of theta.
%               You should set J to the cost.
%               Compute the partial derivatives and set grad to the partial
%               derivatives of the cost w.r.t. each parameter in theta

L=size(X);
n=L(2)-1;
Htheta=sigmoid(X*theta);
sum1=0;
sum2=0;
sum3=0;
for i=1:m
    J=J+((y(i)*log(Htheta(i)))+((1-y(i))*(log(1-Htheta(i)))));
    sum1=sum1+((Htheta(i)-y(i))*X(i,1));
    sum2=sum2+((Htheta(i)-y(i))*X(i,2));
    sum3=sum3+((Htheta(i)-y(i))*X(i,3));
end
J=-1*J/m;
J=J+((lambda/(2*m))*theta(2)*theta(2))+((lambda/(2*m))*theta(3)*theta(3));

sum1=sum1/m;
sum2=(sum2+lambda*theta(2))/m;
sum3=(sum3+lambda*theta(3))/m;

grad(1)=sum1;
grad(2)=sum2;
grad(3)=sum3;




% =============================================================

end
