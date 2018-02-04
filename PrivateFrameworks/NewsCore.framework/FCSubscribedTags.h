/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscribedTags : NSObject {
    NSArray * _autoFavoriteTags;
    NSArray * _groupableTags;
    NSArray * _mutedTags;
    NSArray * _subscribedTags;
}

@property (nonatomic, copy) NSArray *autoFavoriteTags;
@property (nonatomic, copy) NSArray *groupableTags;
@property (nonatomic, copy) NSArray *mutedTags;
@property (nonatomic, copy) NSArray *subscribedTags;

- (void).cxx_destruct;
- (id)autoFavoriteTags;
- (id)groupableTags;
- (id)initWithSubscribedTags:(id)arg1 mutedTags:(id)arg2 autoFavoriteTags:(id)arg3 groupableTags:(id)arg4;
- (id)mutedTags;
- (void)setAutoFavoriteTags:(id)arg1;
- (void)setGroupableTags:(id)arg1;
- (void)setMutedTags:(id)arg1;
- (void)setSubscribedTags:(id)arg1;
- (id)subscribedTags;

@end
