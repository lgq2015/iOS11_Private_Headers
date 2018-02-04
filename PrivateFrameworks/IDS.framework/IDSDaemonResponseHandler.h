/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDaemonResponseHandler : NSObject {
    id  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)block;
- (id)initWithBlock:(id)arg1 queue:(id)arg2;
- (id)queue;

@end
