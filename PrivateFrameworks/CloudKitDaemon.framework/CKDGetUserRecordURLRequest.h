/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserRecordURLRequest : CKDURLRequest {
    id /* block */  _recordFetchedBlock;
    CKRecord * _userRecord;
}

@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) CKRecord *userRecord;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (int)operationType;
- (id /* block */)recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setUserRecord:(id)arg1;
- (id)userRecord;

@end
