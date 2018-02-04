/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGreatStoriesYouMissedFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {
    unsigned long long  _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;

+ (void)setupDebug;
+ (void)tearDownDebug;

- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (unsigned long long)limit;
- (id)name;
- (void)setLimit:(unsigned long long)arg1;

@end
