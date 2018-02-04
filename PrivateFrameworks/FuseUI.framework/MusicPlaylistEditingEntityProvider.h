/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPlaylistEditingEntityProvider : NSObject <MusicEntityProviding> {
    <MusicEntityValueProviding> * _entityValueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleEntityValueProviderDidInvalidateNotification:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityValueProvider;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithPlaylistEntityValueProvider:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@end