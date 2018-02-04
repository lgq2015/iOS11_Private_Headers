/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreEntityProvider : NSObject <MusicEntityProviding, NSCopying, NSSecureCoding> {
    long long  _entityType;
    NSArray * _filteredPlayableItemMetadataContexts;
    bool  _shouldIncludeUnplayableContent;
    bool  _shouldReloadEntityValueProvidersForInvalidation;
    bool  _shouldRespectSystemContentRestrictions;
    MPSparseArray * _storeEntityValueProviders;
    NSArray * _storeItemMetadataContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly, copy) NSArray *filteredPlayableItemMetadataContexts;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldIncludeUnplayableContent;
@property (nonatomic) bool shouldReloadEntityValueProvidersForInvalidation;
@property (nonatomic) bool shouldRespectSystemContentRestrictions;
@property (nonatomic, readonly, copy) NSArray *storeItemMetadataContexts;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2;
- (unsigned long long)_entityCount;
- (long long)_entityType;
- (id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_postInvalidationNotification;
- (void)_reloadFilteredPlayableItemMetadataContextsAllowingInvalidationNotification:(bool)arg1;
- (void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2 allowingInvalidationNotification:(bool)arg3;
- (id)_storeEntityValueProviderAtIndex:(unsigned long long)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)entityType;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (id)filteredPlayableItemMetadataContexts;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (bool)hasExplicitContent;
- (bool)hasMultipleEntitiesIncludingStoreContent;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexPathForStoreItemMetadataContext:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setShouldIncludeUnplayableContent:(bool)arg1;
- (void)setShouldReloadEntityValueProvidersForInvalidation:(bool)arg1;
- (void)setShouldRespectSystemContentRestrictions:(bool)arg1;
- (void)setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2;
- (bool)shouldIncludeUnplayableContent;
- (bool)shouldReloadEntityValueProvidersForInvalidation;
- (bool)shouldRespectSystemContentRestrictions;
- (id)storeItemMetadataContextAtIndexPath:(id)arg1;
- (id)storeItemMetadataContexts;

@end
