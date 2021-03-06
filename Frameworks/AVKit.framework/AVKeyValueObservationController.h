/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVKeyValueObservationController : NSObject {
    NSObject<OS_dispatch_queue> * _controllerIvarAccessQueue;
    id  _owner;
    NSMutableDictionary * _proxyObserversByTokens;
}

- (void).cxx_destruct;
- (void)_stopAllObservation;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(bool)arg3 observationHandler:(id /* block */)arg4;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(bool)arg3 observationHandler:(id /* block */)arg4;
- (void)stopAllObservation;
- (void)stopObserving:(id)arg1;

@end
