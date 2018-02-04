/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedOverviewEntityProvider : MusicMediaEntityProvider {
    unsigned long long  _entityLimit;
    bool  _hasValidOverviewEntityValueProvider;
    MusicLibraryRecentlyAddedOverviewEntityValueProvider * _overviewEntityValueProvider;
}

@property (nonatomic) unsigned long long entityLimit;

- (void).cxx_destruct;
- (void)_handleMediaQueryDataSourceDidInvalidate;
- (id)_overviewEntityValueProvider;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (unsigned long long)entityLimit;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)init;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setEntityLimit:(unsigned long long)arg1;

@end
