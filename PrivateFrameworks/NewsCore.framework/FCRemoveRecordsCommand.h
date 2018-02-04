/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRemoveRecordsCommand : FCCommand {
    NSArray * _recordIDs;
}

@property (nonatomic, copy) NSArray *recordIDs;

- (void).cxx_destruct;
- (bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (void)handleBatchOfRecordIDs:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)handleRecordIDsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (id)recordIDs;
- (void)setRecordIDs:(id)arg1;

@end
