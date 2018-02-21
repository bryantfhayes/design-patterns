## Intent
Provide an interface for creating families of related or dependent objects without specifying their concrete classes

## Also Known As
Kit

## Motivation
Consider user-interface "widgets". They typically have a certain look-and-feel, which you don't want to hardcode into your aaplication. We can solve this problem by defining an abstract _WidgetFactory_ class that declares an interface for creating each type of widget. There is also an abstract class for each kind of widget, and concrete subclass implementations that specify different look-and-feels. _WidgetFactory_'s interface has an operation that returns a new widget object for each abstract widget class. Clients can call these operations to obtain widget instances, but clients are not aware of the concrete classes that they are using. Thus, clients stay independent of prevailing look and feel.

![alt text](https://paginas.fe.up.pt/~aaguiar/as/gof/hires/Pictures/abfac109.gif "Figure-1")

There is a concrete subclass of WidgetFactory for each look-and-feel standard. Each subclass implements the operations to create the appropriate widget for the specified look-and-feel. Clients only have to commit to an interface defined by an abstract class, not a particular concrete class.

## Application
Use the _Abstract Factory_ pattern when:
* a system should be independent of how its products are created, composed, and represented.
* a system should be configured with one of multiple families of products
* a family of related product objects is designed to be used together, and tou need to enforce this constraint.
* you want to provide a class library of products, and you want to reveal just their interfaces, not their implementations

## Structure
![alt text](http://www.c-jump.com/CIS75/Week11/const_images/abstract_factory_structure.png "Abstract Factory Structure")

## Participants
* _AbstractFactory_ (WidgetFactory)
	- declares an interface for operations that create abstract product objects
* _ConcreteFactory_ (MotifWidgetFactory, PMWidgetFactory)
	- implements the operations to create concrete product objects
* _AbstractProduct_ (Window, Scrollbar)
	- declares an interface for a type of product object
* _ConcreteProduct_ (MotifWindow, MotifScrollbar)
	- defines a product object to be created by the corresponding concrete factory
	- implements the _AbstractProduct_ interface
* _Client_
	- uses only interfaces declared by _AbstractFactory_ and _AbstractProduct_ classes

## Collaborations
* 
