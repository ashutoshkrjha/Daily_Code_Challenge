function [J, grad] = linearRegCostFunction(X, y, theta, lambda)
%LINEARREGCOSTFUNCTION Compute cost and gradient for regularized linear 
%regression with multiple variables
%   [J, grad] = LINEARREGCOSTFUNCTION(X, y, theta, lambda) computes the 
%   cost of using theta as the parameter for linear regression to fit the 
%   data points in X and y. Returns the cost in J and the gradient in grad

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(theta));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost and gradient of regularized linear 
%               regression for a particular choice of theta.
%
%               You should set J to the cost and grad to the gradient.
%

n=size(theta,1);

Htheta=X*theta;

J1=sum((Htheta-y).*(Htheta-y));
J1=J1/(2*m);

Tsq=theta.*theta;
Tsq(1)=0;
J2=(lambda/(2*m))*sum(Tsq);

J=J1+J2;


G=(1/m)*((transpose(X))*(Htheta-y));
Greg=(lambda/m)*theta;
Greg(1)=0;

grad=G+Greg;




% =========================================================================

grad = grad(:);

end
