/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate> {
    <BLTSectionInfoListDelegate> * _delegate;
    bool  _loaded;
    bool  _loading;
    NSMutableArray * _loadingCompletionHandlers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    <BLTSectionInfoListProvider> * _overrideProvider;
    NSMutableDictionary * _sectionInfoListItemsBySectionID;
    <BLTSectionInfoListProvider> * _sectionInfoProvider;
    NSMutableSet * _sectionInfoSectionIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=hasLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, retain) <BLTSectionInfoListProvider> *overrideProvider;
@property (nonatomic, retain) <BLTSectionInfoListProvider> *sectionInfoProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1;
- (id)bbSectionInfoForSectionID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (bool)hasLoaded;
- (id)init;
- (id)originalSettings;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (id)overriddenSettings;
- (id)overrideProvider;
- (id)overrides;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)removedSectionWithSectionID:(id)arg1;
- (id)sectionIDs;
- (id)sectionInfoProvider;
- (id)sectionOverrideOnlyForSectionID:(id)arg1;
- (id)sectionOverridesOnly;
- (void)setDelegate:(id)arg1;
- (void)setOverrideProvider:(id)arg1;
- (void)setSectionInfoProvider:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 withUniversalSectionID:(id)arg2 displayName:(id)arg3;

@end
