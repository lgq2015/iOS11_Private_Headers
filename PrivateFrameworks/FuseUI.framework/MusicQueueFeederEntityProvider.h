/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicQueueFeederEntityProvider : NSObject <MusicEntityProviding> {
    bool  _canUseMetadataItemsForEntities;
    bool  _hasValidCanUseMetadataItemsForEntities;
    MPQueueFeeder * _queueFeeder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPQueueFeeder *queueFeeder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)_getItemIdentifierCollection:(id*)arg1 entityValueProvider:(id*)arg2 atIndex:(unsigned long long)arg3;
- (void)_queueFeederContentsDidChangeNotification:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forItem:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithQueueFeeder:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (id)queueFeeder;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@end
