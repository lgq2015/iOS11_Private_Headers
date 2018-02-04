/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    NSIndexPath * _playingItemIndexPath;
    MPCPlayerResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *playingItemIndexPath;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)playingItemIndexPath;
- (id)response;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)setPlayingItemIndexPath:(id)arg1;

@end
