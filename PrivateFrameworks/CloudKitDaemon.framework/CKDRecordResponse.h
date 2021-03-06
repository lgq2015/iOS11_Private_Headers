/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordResponse : NSObject {
    NSString * _etag;
    CKRecord * _record;
    CKRecordID * _recordID;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, retain) CKRecordID *recordID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)etag;
- (id)record;
- (id)recordID;
- (void)setEtag:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
