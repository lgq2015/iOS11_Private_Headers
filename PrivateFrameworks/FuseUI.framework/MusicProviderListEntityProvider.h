/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProviderListEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {
    MusicClientContext * _clientContext;
    NSArray * _entityProviderList;
}

@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entityProviderList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_getEntityProvider:(id*)arg1 forIndexBarEntryIndex:(unsigned long long)arg2 returningLocalIndexBarEntryIndex:(unsigned long long*)arg3;
- (id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1;
- (id)clientContext;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityProviderList;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)getEntityProvider:(id*)arg1 forSectionIndex:(unsigned long long)arg2 returningLocalSectionIndex:(unsigned long long*)arg3;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithEntityProviderList:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setClientContext:(id)arg1;
- (bool)setEditing:(bool)arg1;
- (void)setEntityProviderList:(id)arg1;

@end
