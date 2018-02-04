/* made by EzioChiu.
 */

@protocol MKMapItemProviderRatingSnippet <NSObject>

@required

- (NSDate *)_date;
- (GEOMapItemTip *)_geoMapItemTIp;
- (<GEOMapItemReview> *)_geoReview;
- (NSString *)_localizedSnippet;
- (NSString *)_localizedSnippetLocale;
- (double)_maxScore;
- (double)_normalizedScore;
- (NSURL *)_reviewerImageURL;
- (NSString *)_reviewerName;
- (double)_score;
- (void)showWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSString *, void*

@end
