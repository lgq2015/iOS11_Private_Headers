/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODisplayHeaderSubstitute : NSObject {
    GEOPDDisplayHeaderSubstitute * _displayHeaderSubstitute;
    GEORelatedSearchSuggestion * _relatedSearchSuggestion;
}

@property (nonatomic, retain) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute;
@property (nonatomic, readonly) NSString *interpretedQuery;
@property (nonatomic, retain) GEORelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic, readonly) int substituteType;

- (void).cxx_destruct;
- (id)displayHeaderSubstitute;
- (id)initWithPDDisplayHeaderSubstitute:(id)arg1;
- (id)interpretedQuery;
- (id)relatedSearchSuggestion;
- (void)setDisplayHeaderSubstitute:(id)arg1;
- (void)setRelatedSearchSuggestion:(id)arg1;
- (int)substituteType;

@end
