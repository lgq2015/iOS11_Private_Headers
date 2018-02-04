/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *providerId;
@property (nonatomic, copy) NSString *providerId2;
@property (nonatomic, retain) SALocalSearchRating *rating;
@property (nonatomic, copy) NSArray *selectReviews;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *totalReviewCount;

+ (id)reviewList;
+ (id)reviewListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)providerId;
- (id)providerId2;
- (id)rating;
- (id)selectReviews;
- (void)setProviderId2:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setSelectReviews:(id)arg1;
- (void)setTotalReviewCount:(id)arg1;
- (id)totalReviewCount;

@end
