/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADContext : NSObject <NSCopying> {
    NSString * _requestJSON;
    NSMutableSet * _tags;
}

@property (nonatomic, copy) NSString *requestJSON;
@property (nonatomic, retain) NSMutableSet *tags;

- (bool)_matchesClause:(id)arg1 inContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fullContext;
- (id)initWithTags:(id)arg1;
- (bool)isFeed;
- (bool)matchesForNewContext:(id)arg1 matchClauses:(id)arg2 excludeTags:(id)arg3;
- (id)requestJSON;
- (void)setContextInfoForConfiguration:(id)arg1;
- (void)setRequestJSON:(id)arg1;
- (void)setTags:(id)arg1;
- (id)tags;

@end
