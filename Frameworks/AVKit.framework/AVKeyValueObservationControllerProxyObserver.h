/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVKeyValueObservationControllerProxyObserver : NSObject {
    id /* block */  _changesBlock;
    void * _context;
    NSSet * _keyPaths;
    id  _observer;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _proxyObserverIvarAccessQueue;
    id  _retainedObservedObject;
    NSString * _token;
    id  _unsafeUnretainedObservedObject;
}

@property (nonatomic, readonly) id /* block */ changesBlock;
@property (nonatomic, readonly) NSSet *keyPaths;
@property (nonatomic, readonly) id observedObject;
@property (nonatomic, readonly) id observer;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)changesBlock;
- (id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(bool)arg4 options:(unsigned long long)arg5 changesBlock:(id /* block */)arg6;
- (id)keyPaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (id)observer;
- (unsigned long long)options;
- (void)startObserving;
- (void)stopObserving;
- (id)token;

@end
