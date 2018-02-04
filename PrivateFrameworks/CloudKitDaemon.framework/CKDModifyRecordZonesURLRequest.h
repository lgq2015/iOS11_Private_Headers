/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {
    NSDate * _lastMissingManateeIdentityErrorDate;
    bool  _markZonesAsUserPurged;
    NSMutableDictionary * _recordZoneIDByRequestID;
    NSArray * _recordZoneIDsToDelete;
    id /* block */  _recordZoneModifiedBlock;
    NSArray * _recordZonesToSave;
}

@property (nonatomic, retain) NSDate *lastMissingManateeIdentityErrorDate;
@property (nonatomic) bool markZonesAsUserPurged;
@property (nonatomic, retain) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic, retain) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) id /* block */ recordZoneModifiedBlock;
@property (nonatomic, retain) NSArray *recordZonesToSave;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (id)lastMissingManateeIdentityErrorDate;
- (bool)markZonesAsUserPurged;
- (int)operationType;
- (id)recordZoneIDByRequestID;
- (id)recordZoneIDsToDelete;
- (id /* block */)recordZoneModifiedBlock;
- (id)recordZonesToSave;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setLastMissingManateeIdentityErrorDate:(id)arg1;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setRecordZoneIDByRequestID:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZoneModifiedBlock:(id /* block */)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (bool)shouldSendKeyIDs;
- (id)zoneIDsToLock;

@end
