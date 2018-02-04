/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface _NAKeyValueObserverProxy : _NAObserverProxy {
    bool  _isObserving;
    NSString * _keyPath;
    id  _observedObject;
    id /* block */  _observerBlock;
}

@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id observedObject;
@property (nonatomic, readonly, copy) id /* block */ observerBlock;

- (void).cxx_destruct;
- (id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(id /* block */)arg5;
- (void)invalidate;
- (id)keyPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (id /* block */)observerBlock;

@end
