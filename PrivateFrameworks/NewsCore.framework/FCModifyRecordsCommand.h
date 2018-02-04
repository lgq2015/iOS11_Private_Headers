/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCModifyRecordsCommand : FCCommand {
    NSArray * _localRecords;
    id /* block */  _localRecordsGenerator;
    bool  _merge;
}

@property (nonatomic, copy) NSArray *localRecords;
@property (nonatomic, copy) id /* block */ localRecordsGenerator;
@property (nonatomic) bool merge;
@property (nonatomic, readonly) NSArray *t_localRecords;

+ (id)desiredKeys;

- (void).cxx_destruct;
- (bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (void)handleBatchOfLocalRecords:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)handleLocalRecordsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalRecords:(id)arg1 merge:(bool)arg2;
- (id)initWithLocalRecordsGenerator:(id /* block */)arg1 merge:(bool)arg2;
- (id)localRecords;
- (id /* block */)localRecordsGenerator;
- (bool)merge;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (void)setLocalRecords:(id)arg1;
- (void)setLocalRecordsGenerator:(id /* block */)arg1;
- (void)setMerge:(bool)arg1;
- (id)t_localRecords;

@end
