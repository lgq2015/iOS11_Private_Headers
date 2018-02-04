/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceCollectionUpdateBlock : NSObject {
    id /* block */  _block;
    NSNumber * _desiredIndex;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSNumber *desiredIndex;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)desiredIndex;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;
- (void)setDesiredIndex:(id)arg1;
- (void)setQueue:(id)arg1;

@end
