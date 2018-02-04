/* made by EzioChiu.
 */

@protocol MSPContainerObserver <NSObject>

@required

- (void)container:(MSPContainer *)arg1 didEditWithNewContents:(NSArray *)arg2 orderedEdits:(NSArray *)arg3 cause:(long long)arg4 context:(id <NSObject><NSCopying>)arg5;

@optional

- (void)containerWillEraseContents:(MSPContainer *)arg1;
- (NSObject<OS_dispatch_queue> *)observationQueueForContainer:(MSPContainer *)arg1;

@end
