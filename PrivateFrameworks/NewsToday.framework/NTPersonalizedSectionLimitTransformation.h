/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTPersonalizedSectionLimitTransformation : NSObject <FCFeedTransforming> {
    unsigned long long  _limit;
    NSOrderedSet * _mandatoryArticleIDs;
    NSOrderedSet * _personalizedArticleIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) NSOrderedSet *mandatoryArticleIDs;
@property (nonatomic, copy) NSOrderedSet *personalizedArticleIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)limit;
- (id)mandatoryArticleIDs;
- (id)personalizedArticleIDs;
- (void)setLimit:(unsigned long long)arg1;
- (void)setMandatoryArticleIDs:(id)arg1;
- (void)setPersonalizedArticleIDs:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
