/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *reviews;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASTTemplatePercentageRating *templatePercentageRating;

+ (id)movieRatingReviewItem;
+ (id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reviews;
- (void)setReviews:(id)arg1;
- (void)setTemplatePercentageRating:(id)arg1;
- (id)templatePercentageRating;

@end
