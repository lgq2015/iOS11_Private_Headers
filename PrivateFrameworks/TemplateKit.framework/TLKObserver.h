/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKObserver : NSObject {
    id /* block */  _callback;
    bool  _disable;
    id  _observer;
    NSObject<OS_dispatch_group> * _observerGroup;
    NSArray * _propertiesToObserve;
    bool  _shouldNotRecurse;
}

@property (copy) id /* block */ callback;
@property (nonatomic) bool disable;
@property id observer;
@property (retain) NSObject<OS_dispatch_group> *observerGroup;
@property (retain) NSArray *propertiesToObserve;
@property bool shouldNotRecurse;

+ (void)addBlock:(id /* block */)arg1 async:(bool)arg2 group:(id)arg3;
+ (bool)objectsAreHomogenousForArray:(id)arg1;
+ (id)observerForObject:(id)arg1 properties:(id)arg2 changeHandler:(id /* block */)arg3;
+ (id)observerForObject:(id)arg1 properties:(id)arg2 changeHandler:(id /* block */)arg3 shouldNotRecurse:(bool)arg4;
+ (id)observerForObservable:(id)arg1 changeHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addObservableObject:(id)arg1 add:(bool)arg2 async:(bool)arg3;
- (void)addObservableProperties:(id)arg1 onObject:(id)arg2 isAdding:(bool)arg3 async:(bool)arg4;
- (id /* block */)callback;
- (bool)disable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (id)observerGroup;
- (id)propertiesToObserve;
- (void)removeAllObservers;
- (void)setCallback:(id /* block */)arg1;
- (void)setDisable:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setObserverGroup:(id)arg1;
- (void)setPropertiesToObserve:(id)arg1;
- (void)setShouldNotRecurse:(bool)arg1;
- (bool)shouldNotRecurse;

@end
