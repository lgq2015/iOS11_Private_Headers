/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublishAssetsOperation : CKDDatabaseOperation {
    unsigned long long  _URLOptions;
    id /* block */  _assetPublishedBlock;
    NSOperation * _fetchRecordsOperation;
    NSMutableDictionary * _fetchedRecordsByID;
    NSDictionary * _fileNamesByAssetFieldNames;
    NSArray * _recordIDs;
    unsigned long long  _requestedTTL;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, copy) id /* block */ assetPublishedBlock;
@property (retain) NSOperation *fetchRecordsOperation;
@property (nonatomic, retain) NSMutableDictionary *fetchedRecordsByID;
@property (nonatomic, retain) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) unsigned long long requestedTTL;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(struct _OpaquePCSShareProtection { }*)arg3 error:(id)arg4;
- (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)assetPublishedBlock;
- (void)cancel;
- (id)fetchRecordsOperation;
- (id)fetchedRecordsByID;
- (id)fileNamesByAssetFieldNames;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)recordIDs;
- (unsigned long long)requestedTTL;
- (void)setAssetPublishedBlock:(id /* block */)arg1;
- (void)setFetchRecordsOperation:(id)arg1;
- (void)setFetchedRecordsByID:(id)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setURLOptions:(unsigned long long)arg1;

@end
