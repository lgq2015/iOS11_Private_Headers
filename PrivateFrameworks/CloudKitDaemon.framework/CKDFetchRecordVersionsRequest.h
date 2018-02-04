/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordVersionsRequest : CKDURLRequest {
    NSArray * _desiredKeys;
    bool  _isDeleted;
    NSString * _minimumVersionETag;
    NSMutableDictionary * _recordIDByRequestID;
    NSArray * _recordIDs;
    id /* block */  _recordVersionsFetchedBlock;
    bool  _shouldFetchAssetContent;
}

@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic) bool isDeleted;
@property (nonatomic, retain) NSString *minimumVersionETag;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ recordVersionsFetchedBlock;
@property (nonatomic) bool shouldFetchAssetContent;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id)generateRequestOperations;
- (id)initWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3;
- (bool)isDeleted;
- (id)minimumVersionETag;
- (int)operationType;
- (id)recordIDByRequestID;
- (id)recordIDs;
- (id /* block */)recordVersionsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setDesiredKeys:(id)arg1;
- (void)setIsDeleted:(bool)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordVersionsFetchedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneIDsToLock;

@end
