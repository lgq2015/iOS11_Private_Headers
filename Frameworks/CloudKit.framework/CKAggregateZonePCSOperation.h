/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAggregateZonePCSOperation : CKDatabaseOperation {
    id /* block */  _aggregateZonePCSCompletionBlock;
    NSArray * _sourceZoneIDs;
    CKRecordZone * _targetZone;
}

@property (nonatomic, copy) id /* block */ aggregateZonePCSCompletionBlock;
@property (nonatomic, copy) NSArray *sourceZoneIDs;
@property (nonatomic, copy) CKRecordZone *targetZone;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)aggregateZonePCSCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2;
- (void)performCKOperation;
- (void)setAggregateZonePCSCompletionBlock:(id /* block */)arg1;
- (void)setSourceZoneIDs:(id)arg1;
- (void)setTargetZone:(id)arg1;
- (id)sourceZoneIDs;
- (id)targetZone;

@end
