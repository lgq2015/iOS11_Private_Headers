/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResults : NSObject <NSCopying> {
    NSMutableDictionary * _entriesBySection;
    id /* block */  _entryComparator;
    NSMutableSet * _explicitlyAddedSectionEntries;
    bool  _needsSorting;
    id /* block */  _sectionComparator;
    NSMutableArray * _sectionEntries;
    bool  _treatSectionEntriesAsRegularEntries;
}

@property (nonatomic, copy) id /* block */ entryComparator;
@property (nonatomic, copy) id /* block */ sectionComparator;
@property (nonatomic) bool treatSectionEntriesAsRegularEntries;

- (void).cxx_destruct;
- (id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)allSectionEntries;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)entriesInSectionAtIndex:(unsigned long long)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id /* block */)entryComparator;
- (id)init;
- (void)mergeWithResults:(id)arg1;
- (unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSectionEntries;
- (unsigned long long)removeEntries:(id)arg1;
- (bool)removeEntry:(id)arg1;
- (id)resultsByMergingWithResults:(id)arg1;
- (id /* block */)sectionComparator;
- (id)sectionEntryAtIndex:(unsigned long long)arg1;
- (void)setEntryComparator:(id /* block */)arg1;
- (void)setSectionComparator:(id /* block */)arg1;
- (void)setTreatSectionEntriesAsRegularEntries:(bool)arg1;
- (void)sortResults;
- (unsigned long long)totalNumberOfEntries;
- (bool)treatSectionEntriesAsRegularEntries;

@end
