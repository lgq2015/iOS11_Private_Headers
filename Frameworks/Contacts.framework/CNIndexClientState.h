/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNIndexClientState : NSObject {
    long long  _fullSyncOffset;
    CNChangeHistoryAnchor * _fullSyncSnapshotAnchor;
    long long  _indexVersion;
    bool  _isFullSyncDone;
}

@property (nonatomic) long long fullSyncOffset;
@property (nonatomic, retain) CNChangeHistoryAnchor *fullSyncSnapshotAnchor;
@property (nonatomic) long long indexVersion;
@property (nonatomic) bool isFullSyncDone;

+ (id)clientStateWithData:(id)arg1 logger:(id)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (long long)fullSyncOffset;
- (id)fullSyncSnapshotAnchor;
- (long long)indexVersion;
- (id)init;
- (bool)isFullSyncDone;
- (void)setFullSyncOffset:(long long)arg1;
- (void)setFullSyncSnapshotAnchor:(id)arg1;
- (void)setIndexVersion:(long long)arg1;
- (void)setIsFullSyncDone:(bool)arg1;

@end
