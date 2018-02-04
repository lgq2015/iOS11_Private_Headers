/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate> {
    GEOSearchCategory * _category;
    NSArray * _displayLines;
    GEOPDAutocompleteEntry * _entry;
    int  _entryIndex;
    int  _entryListIndex;
    NSArray * _lineHighlights;
    <GEOMapItem> * _mapItem;
    GEOMapServiceTraits * _traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) GEOPDAutocompleteEntry *entry;
@property (nonatomic, readonly) NSData *entryMetadata;
@property (nonatomic, readonly) <GEOMapItem> *geoMapItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSData *metadata;
@property (getter=_placeDataAutocompleteEntry, nonatomic, readonly) GEOPDAutocompleteEntry *placeDataAutocompleteEntry;
@property (nonatomic, readonly) GEOSearchCategory *searchCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_placeDataAutocompleteEntry;
- (id)calloutTitle;
- (id)displayLines;
- (id)entry;
- (id)entryMetadata;
- (id)geoMapItem;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (unsigned long long)hash;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)identifier;
- (id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 mapItems:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)queryLine;
- (id)searchCategory;
- (void)sendFeedback;
- (long long)type;

@end
