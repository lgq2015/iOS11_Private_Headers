/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemReviewStatistics : NSObject <NSCopying> {
    float  _averageUserRating;
    long long  _numberOfUserRatings;
    NSString * _numberOfUserRatingsString;
    long long  _numberOfUserReviews;
    NSString * _numberOfUserReviewsString;
}

@property (nonatomic) float averageUserRating;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic, copy) NSString *numberOfUserRatingsString;
@property (nonatomic) long long numberOfUserReviews;
@property (nonatomic, copy) NSString *numberOfUserReviewsString;

- (float)averageUserRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfUserRatings;
- (id)numberOfUserRatingsString;
- (long long)numberOfUserReviews;
- (id)numberOfUserReviewsString;
- (void)setAverageUserRating:(float)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setNumberOfUserRatingsString:(id)arg1;
- (void)setNumberOfUserReviews:(long long)arg1;
- (void)setNumberOfUserReviewsString:(id)arg1;

@end
