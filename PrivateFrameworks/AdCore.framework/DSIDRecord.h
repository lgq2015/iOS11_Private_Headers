/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface DSIDRecord : NSObject <NSCopying> {
    NSMutableDictionary * _ADIDRecords;
    NSString * _DSID;
    NSString * _IDFA;
    bool  _accountIsT13;
    bool  _accountIsU13;
    bool  _accountIsU18;
    bool  _accountLimitAdTrackingEnabled;
    NSString * _iAdIDBeforeReset;
    NSString * _iCloudDSID;
    bool  _isActiveRecord;
    bool  _isPlaceholderAccount;
    long long  _lastJingleLimitAdTrackingResponse;
    double  _lastPOSTLimitAdTrackingTimestamp;
    double  _lastSegmentServedTimestamp;
    bool  _lastSentLimitAdTrackingStatus;
    double  _lastSentLimitAdTrackingTimestamp;
    double  _lastSentSegmentDataTimestamp;
    double  _limitAdTrackingTimestamp;
    NSString * _segmentData;
    double  _segmentDataTimestamp;
}

@property (retain) NSMutableDictionary *ADIDRecords;
@property (nonatomic, retain) NSString *DSID;
@property (nonatomic, retain) NSString *IDFA;
@property (nonatomic) bool accountIsT13;
@property (nonatomic) bool accountIsU13;
@property (nonatomic) bool accountIsU18;
@property (nonatomic) bool accountLimitAdTrackingEnabled;
@property (nonatomic, retain) NSString *iAdIDBeforeReset;
@property (nonatomic, retain) NSString *iCloudDSID;
@property (nonatomic, readonly) bool isActiveRecord;
@property (nonatomic) bool isPlaceholderAccount;
@property (nonatomic, readonly) bool isRestrictedAccount;
@property (nonatomic) long long lastJingleLimitAdTrackingResponse;
@property (nonatomic) double lastPOSTLimitAdTrackingTimestamp;
@property (nonatomic) double lastSegmentServedTimestamp;
@property (nonatomic) bool lastSentLimitAdTrackingStatus;
@property (nonatomic) double lastSentLimitAdTrackingTimestamp;
@property (nonatomic) double lastSentSegmentDataTimestamp;
@property (nonatomic, readonly) bool limitAdTrackingEnabled;
@property (nonatomic) double limitAdTrackingTimestamp;
@property (nonatomic, retain) NSString *segmentData;
@property (nonatomic) double segmentDataTimestamp;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (void).cxx_destruct;
- (id)ADIDRecords;
- (id)DSID;
- (id)IDFA;
- (bool)accountIsT13;
- (bool)accountIsU13;
- (bool)accountIsU18;
- (bool)accountLimitAdTrackingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedIDForClientType:(long long)arg1;
- (id)iAdIDBeforeReset;
- (id)iCloudDSID;
- (id)idForClientType:(long long)arg1;
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;
- (bool)isActiveRecord;
- (bool)isPlaceholderAccount;
- (bool)isRestrictedAccount;
- (long long)lastJingleLimitAdTrackingResponse;
- (double)lastPOSTLimitAdTrackingTimestamp;
- (double)lastSegmentServedTimestamp;
- (bool)lastSentLimitAdTrackingStatus;
- (double)lastSentLimitAdTrackingTimestamp;
- (double)lastSentSegmentDataTimestamp;
- (bool)limitAdTrackingEnabled;
- (double)limitAdTrackingTimestamp;
- (id)segmentData;
- (double)segmentDataTimestamp;
- (void)setADIDRecords:(id)arg1;
- (void)setAccountIsT13:(bool)arg1;
- (void)setAccountIsU13:(bool)arg1;
- (void)setAccountIsU18:(bool)arg1;
- (void)setAccountLimitAdTrackingEnabled:(bool)arg1;
- (void)setDSID:(id)arg1;
- (void)setIAdIDBeforeReset:(id)arg1;
- (void)setICloudDSID:(id)arg1;
- (void)setID:(id)arg1 forClientType:(long long)arg2;
- (void)setIDFA:(id)arg1;
- (void)setIsPlaceholderAccount:(bool)arg1;
- (void)setLastJingleLimitAdTrackingResponse:(long long)arg1;
- (void)setLastPOSTLimitAdTrackingTimestamp:(double)arg1;
- (void)setLastSegmentServedTimestamp:(double)arg1;
- (void)setLastSentLimitAdTrackingStatus:(bool)arg1;
- (void)setLastSentLimitAdTrackingTimestamp:(double)arg1;
- (void)setLastSentSegmentDataTimestamp:(double)arg1;
- (void)setLimitAdTrackingTimestamp:(double)arg1;
- (void)setSegmentData:(id)arg1;
- (void)setSegmentDataTimestamp:(double)arg1;

// Image: /System/Library/PrivateFrameworks/AdID.framework/AdID

- (bool)LATStatusChangeInProgress;
- (void)ensureiAdIDs;
- (void)handleIDFAReset:(id /* block */)arg1;
- (bool)hasIDForClientType:(long long)arg1;
- (bool)isActiveRecord;
- (bool)isEqual:(id)arg1;
- (void)reconcileIDFAandLAT;
- (void)removeIDForClientType:(long long)arg1;
- (void)resetiAdIDs:(id /* block */)arg1;
- (void)retrieveSegmentDataFromiTunes:(id /* block */)arg1;
- (void)sendLATStatusToAdPlatforms:(id /* block */)arg1;
- (void)sendSegmentDataToAdPlatforms:(id /* block */)arg1;
- (void)sendSegmentsAndLATToAdPlatformsWithCompletionHandler:(id /* block */)arg1;
- (void)setLimitAdTrackingStatus:(bool)arg1 timestamp:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)updateDeviceLATStatusWithError:(id)arg1 completionHandler:(id /* block */)arg2;

@end
