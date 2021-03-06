/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMultiQueue : NSObject {
    NSMutableDictionary * _queueMap;
}

- (void)_addBlock:(id /* block */)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (void)addBlock:(id /* block */)arg1 forKey:(id)arg2 description:(id)arg3;
- (void)addBlock:(id /* block */)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)dealloc;

@end
