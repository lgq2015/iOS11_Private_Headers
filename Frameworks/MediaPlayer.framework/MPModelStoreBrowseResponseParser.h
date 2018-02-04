/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseResponseParser : NSObject {
    MPSectionedCollection * _additionalContentIdentifiers;
    MPStoreItemMetadataResponse * _additionalStoreItemMetadataResponse;
    NSArray * _allAdditionalContentIdentifiersNeedingLookup;
    MPChangeDetails * _changeDetails;
    MPModelStoreBrowseContentItemBuilder * _contentItemBuilder;
    struct { 
        bool useCarPlayBrowseTopLevelContentOnly; 
        bool useCarPlayBrowseTopLevelRequestReorderingHeuristics; 
    }  _options;
    long long  _parseOnceToken;
    MPModelStoreBrowseResponseParser * _previousParser;
    id  _rawResponseOutput;
    MPSectionedCollection * _results;
    MPModelStoreBrowseSectionBuilder * _sectionBuilder;
    NSDictionary * _storePlatformDataResults;
    NSSet * _unavailableContentIdentifiers;
}

@property (nonatomic, readonly) MPSectionedCollection *additionalContentIdentifiers;
@property (nonatomic, readonly) MPStoreItemMetadataResponse *additionalStoreItemMetadataResponse;
@property (nonatomic, readonly) NSArray *allAdditionalContentIdentifiersNeedingLookup;
@property (nonatomic, readonly) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) MPModelStoreBrowseContentItemBuilder *contentItemBuilder;
@property (nonatomic, readonly) struct { bool x1; bool x2; } options;
@property (nonatomic, readonly) MPModelStoreBrowseResponseParser *previousParser;
@property (nonatomic, readonly) id rawResponseOutput;
@property (nonatomic, readonly) MPSectionedCollection *results;
@property (nonatomic, readonly) MPModelStoreBrowseSectionBuilder *sectionBuilder;

- (void).cxx_destruct;
- (void)_parse;
- (bool)_parseFeaturedContentChild:(id)arg1 isMemberOfChartSet:(bool)arg2 insertingResultsToSectionedCollection:(id)arg3 atSectionIndex:(long long)arg4 additionalContentIdentifiers:(id)arg5 allAdditionalContentIdentifiersNeedingLookup:(id)arg6;
- (void)_parseFeaturedContentStructureModelChildren:(id)arg1;
- (void)_parseSingleContentListFromPageDataDictionary:(id)arg1 isMemberOfChartSet:(bool)arg2;
- (void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;
- (void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)arg1;
- (void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)arg1;
- (id)_storeItemMetadataForContentIdentifier:(id)arg1;
- (bool)_storeItemMetadataIsAvailableForContentIdentifier:(id)arg1;
- (id)additionalContentIdentifiers;
- (id)additionalStoreItemMetadataResponse;
- (id)allAdditionalContentIdentifiersNeedingLookup;
- (id)changeDetails;
- (id)contentItemBuilder;
- (id)initWithPreviousParser:(id)arg1 additionalStoreItemMetadataResponse:(id)arg2 options:(struct { bool x1; bool x2; })arg3 sectionBuilder:(id)arg4 contentItemBuilder:(id)arg5;
- (id)initWithRawResponseOutput:(id)arg1 options:(struct { bool x1; bool x2; })arg2 sectionBuilder:(id)arg3 contentItemBuilder:(id)arg4;
- (struct { bool x1; bool x2; })options;
- (id)previousParser;
- (id)rawResponseOutput;
- (id)results;
- (id)sectionBuilder;

@end
