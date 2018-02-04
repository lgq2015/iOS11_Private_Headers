/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUpload : NSObject <BRCTransfer> {
    BRCClientZone * _clientZone;
    unsigned long long  _doneSize;
    BRCItemID * _itemID;
    BRCProgress * _progress;
    bool  _progressPublished;
    CKRecord * _record;
    NSString * _stageID;
    long long  _throttleID;
    unsigned long long  _totalSize;
}

@property (nonatomic) unsigned long long doneSize;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRCProgress *progress;
@property (nonatomic) bool progressPublished;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, retain) CKRecord *secondaryRecord;
@property (nonatomic, readonly) CKRecordID *secondaryRecordID;
@property (nonatomic, readonly) NSString *stageID;
@property (nonatomic, readonly) long long throttleID;
@property (nonatomic, readonly) unsigned long long totalSize;
@property (nonatomic, readonly) NSNumber *transferID;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)doneSize;
- (id)etag;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3;
- (id)itemID;
- (id)progress;
- (bool)progressPublished;
- (id)record;
- (id)recordID;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void)setDoneSize:(unsigned long long)arg1;
- (void)setProgressPublished:(bool)arg1;
- (void)setRecord:(id)arg1;
- (void)setSecondaryRecord:(id)arg1;
- (id)stageID;
- (long long)throttleID;
- (unsigned long long)totalSize;
- (id)transferID;

@end
