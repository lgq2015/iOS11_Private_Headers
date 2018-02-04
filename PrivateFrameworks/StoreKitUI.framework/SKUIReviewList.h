/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewList : NSObject <SKUICacheCoding> {
    NSDictionary * _dictionary;
    NSMutableArray * _reviews;
}

@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fiveStarRatingCount;
@property (nonatomic, readonly) long long fourStarRatingCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic, readonly) long long oneStarRatingCount;
@property (nonatomic, readonly) long long ratingCount;
@property (nonatomic, readonly) NSArray *reviews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long threeStarRatingCount;
@property (nonatomic, readonly) long long twoStarRatingCount;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) NSURL *writeReviewURL;

- (void).cxx_destruct;
- (void)addReviews:(id)arg1;
- (id)cacheRepresentation;
- (long long)fiveStarRatingCount;
- (long long)fourStarRatingCount;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithReviewListDictionary:(id)arg1;
- (long long)numberOfPages;
- (long long)oneStarRatingCount;
- (long long)ratingCount;
- (id)reviews;
- (long long)threeStarRatingCount;
- (long long)twoStarRatingCount;
- (float)userRating;
- (id)writeReviewURL;

@end
