/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerResponseTracklist : NSObject {
    long long  _globalItemCount;
    MPSectionedCollection * _items;
    long long  _lastChangeDirection;
    long long  _playingItemGlobalIndex;
    NSIndexPath * _playingItemIndexPath;
    long long  _repeatType;
    MPCPlayerResponse * _response;
    long long  _shuffleType;
    long long  _upNextItemCount;
}

@property (nonatomic, readonly) long long globalItemCount;
@property (nonatomic, readonly, copy) MPSectionedCollection *items;
@property (nonatomic, readonly) long long lastChangeDirection;
@property (nonatomic, readonly) long long playingItemGlobalIndex;
@property (nonatomic, readonly, copy) NSIndexPath *playingItemIndexPath;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) long long upNextItemCount;

- (void).cxx_destruct;
- (id)changeItemCommand;
- (long long)globalItemCount;
- (id)initWithResponse:(id)arg1;
- (id)insertCommand;
- (id)items;
- (long long)lastChangeDirection;
- (long long)playingItemGlobalIndex;
- (id)playingItemIndexPath;
- (id)reorderCommand;
- (id)repeatCommand;
- (long long)repeatType;
- (id)resetCommand;
- (id)response;
- (id)shuffleCommand;
- (long long)shuffleType;
- (long long)upNextItemCount;

@end
