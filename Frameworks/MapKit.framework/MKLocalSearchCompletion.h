/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompletion : NSObject {
    bool  _alreadySentFeedback;
    <GEOCompletionItem> * _item;
    NSString * _localizedSectionHeader;
    MKMapItem * _mapItem;
    NSString * _sourceID;
}

@property (getter=_alreadySentFeedback, nonatomic, readonly) bool alreadySentFeedback;
@property (nonatomic, readonly) GEOSearchCategory *category;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) <GEOCompletionItem> *geoCompletionItem;
@property (nonatomic, copy) NSString *localizedSectionHeader;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *subtitleHighlightRanges;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *titleHighlightRanges;
@property (getter=_type, nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)_alreadySentFeedback;
- (long long)_type;
- (id)calloutTitle;
- (id)category;
- (id)copyStorage;
- (id)description;
- (id)displayLines;
- (id)geoCompletionItem;
- (bool)getCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1;
- (unsigned long long)hash;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)iconWithScale:(double)arg1;
- (id)initWithGeoCompletionItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)localizedSectionHeader;
- (id)mapItem;
- (id)queryLine;
- (void)sendFeedback;
- (void)setLocalizedSectionHeader:(id)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;
- (id)subtitle;
- (id)subtitleHighlightRanges;
- (id)title;
- (id)titleHighlightRanges;

@end
