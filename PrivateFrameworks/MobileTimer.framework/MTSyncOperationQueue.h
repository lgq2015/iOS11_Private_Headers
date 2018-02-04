/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncOperationQueue : NSObject {
    NSMutableArray * _operations;
}

@property (nonatomic, retain) NSMutableArray *operations;

- (void).cxx_destruct;
- (id)dequeue;
- (id)description;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)operations;
- (id)peek;
- (void)removeAllOperations;
- (void)setOperations:(id)arg1;
- (bool)shouldEnqueue:(id)arg1;

@end
