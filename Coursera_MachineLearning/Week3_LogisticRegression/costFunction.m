function [J, grad] = costFunction(theta, X, y)
%COSTFUNCTION Compute cost and gradient for logistic regression
%   J = COSTFUNCTION(theta, X, y) computes the cost of using theta as the
%   parameter for logistic regression and the gradient of the cost
%   w.r.t. to the parameters.

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
%
% Note: grad should have the same dimensions as theta
%
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
sum1=sum1/m;
sum2=sum2/m;
sum3=sum3/m;

grad(1)=sum1;
grad(2)=sum2;
grad(3)=sum3;

% =============================================================

end
