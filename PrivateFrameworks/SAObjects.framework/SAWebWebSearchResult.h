/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *imageResults;
@property (nonatomic, copy) NSArray *newsResults;
@property (nonatomic, copy) NSArray *relatedSearchResults;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *totalImageResults;
@property (nonatomic, copy) NSNumber *totalNewsResults;
@property (nonatomic, copy) NSNumber *totalVideoResults;
@property (nonatomic, copy) NSNumber *totalWebResults;
@property (nonatomic, copy) NSArray *videoResults;
@property (nonatomic, copy) NSArray *webResults;

+ (id)webSearchResult;
+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResults;
- (id)newsResults;
- (id)relatedSearchResults;
- (void)setImageResults:(id)arg1;
- (void)setNewsResults:(id)arg1;
- (void)setRelatedSearchResults:(id)arg1;
- (void)setTotalImageResults:(id)arg1;
- (void)setTotalNewsResults:(id)arg1;
- (void)setTotalVideoResults:(id)arg1;
- (void)setTotalWebResults:(id)arg1;
- (void)setVideoResults:(id)arg1;
- (void)setWebResults:(id)arg1;
- (id)totalImageResults;
- (id)totalNewsResults;
- (id)totalVideoResults;
- (id)totalWebResults;
- (id)videoResults;
- (id)webResults;

@end
