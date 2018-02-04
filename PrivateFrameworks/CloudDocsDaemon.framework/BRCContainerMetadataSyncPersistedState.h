/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState {
    CKOperationGroup * _ckGroup;
    NSDate * _lastSyncDate;
    bool  _needsContainerMetadataSyncDown;
    bool  _needsSharedDBSyncDown;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) CKOperationGroup *ckGroup;
@property (retain) NSDate *lastSyncDate;
@property (nonatomic) bool needsContainerMetadataSyncDown;
@property (nonatomic) bool needsSharedDBSyncDown;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckGroup;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastSyncDate;
- (bool)needsContainerMetadataSyncDown;
- (bool)needsSharedDBSyncDown;
- (id)serverChangeToken;
- (void)setCkGroup:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setNeedsContainerMetadataSyncDown:(bool)arg1;
- (void)setNeedsSharedDBSyncDown:(bool)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
