/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTelevisionControllerBlockCallback : NSObject {
    id /* block */  _callbackBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ callbackBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id /* block */)callbackBlock;
- (void)dealloc;
- (id)initWithCallbackBlock:(id /* block */)arg1 queue:(id)arg2;
- (id)queue;

@end
