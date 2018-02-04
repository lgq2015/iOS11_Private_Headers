/* made by EzioChiu.
 */

@protocol MusicEntityProviding <SKUIEntityProviding>

@required

- (void)configureEntityValueContextOutput:(MusicEntityValueContext *)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(MusicEntityValueContext *)arg1;
- (void)configureSectionEntityValueContextOutput:(MusicSectionEntityValueContext *)arg1 forIndex:(unsigned long long)arg2;
- (<IKEntityValueProviding> *)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;
- (bool)hasEntities;
- (SKUIIndexBarEntry *)indexBarEntryAtIndex:(unsigned long long)arg1;
- (NSIndexPath *)indexPathForEntityValueContext:(MusicEntityValueContext *)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@optional

- (NSSet *)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(MusicEntityValueContext *)arg1;
- (bool)hasEntitiesNotInLibrary;
- (bool)hasExplicitContent;
- (bool)hasMultipleEntitiesIncludingStoreContent;
- (bool)setEditing:(bool)arg1;

@end
