/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation * _decryptOperation;
    NSArray * _desiredKeys;
    NSObject<OS_dispatch_group> * _fetchVersionsGroup;
    bool  _isDeleted;
    NSString * _minimumVersionETag;
    NSArray * _recordIDs;
    id /* block */  _recordVersionFetchedBlock;
    bool  _shouldFetchAssetContent;
}

@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchVersionsGroup;
@property (nonatomic) bool isDeleted;
@property (nonatomic, retain) NSString *minimumVersionETag;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ recordVersionFetchedBlock;
@property (nonatomic) bool shouldFetchAssetContent;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(bool)arg2 versions:(id)arg3 responseCode:(id)arg4;
- (id)activityCreate;
- (id)desiredKeys;
- (id)fetchVersionsGroup;
- (bool)hasDecryptOperation;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isDeleted;
- (void)main;
- (id)minimumVersionETag;
- (id)recordDecryptOperation;
- (id)recordIDs;
- (id /* block */)recordVersionFetchedBlock;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchVersionsGroup:(id)arg1;
- (void)setIsDeleted:(bool)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordVersionFetchedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;

@end
