/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    bool  _needsUpdateAggregateContainerInfo;
}

@property (nonatomic, retain) NSMutableDictionary *info;

- (id)_info;
- (id)_infoForContainer:(id)arg1;
- (id)_infoForItem:(id)arg1;
- (void)_notifyInfoChanged;
- (unsigned long long)_persistingOptions;
- (void)_updateAggregateContainerInfoIfNeeded;
- (void)_writeInfo;
- (id)initWithTarget:(unsigned long long)arg1;
- (unsigned long long)playabilityForContainer:(id)arg1;
- (float)progressForContainer:(id)arg1;
- (void)setItems:(id)arg1 forContainer:(id)arg2;
- (void)setProgressBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 forItem:(id)arg3;
- (void)setStatus:(unsigned long long)arg1 forItem:(id)arg2;
- (void)setUserInfo:(id)arg1 forContainer:(id)arg2;
- (void)setUserInfo:(id)arg1 forItem:(id)arg2;
- (unsigned long long)statusForContainer:(id)arg1;
- (void)synchronize;

@end