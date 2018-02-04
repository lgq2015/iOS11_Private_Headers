/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyItem : MPCPlayerItem {
    MPAVItem * _avItem;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
    }  _snapshot;
}

@property (nonatomic, readonly) MPAVItem *avItem;

- (void).cxx_destruct;
- (void)_artworkDidChangeNotification:(id)arg1;
- (void)_durationAvailablityDidChangeNotification:(id)arg1;
- (void)_explicitDidChangeNotification:(id)arg1;
- (void)_modelGenericObjectDidChangeNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_titlesDidChangeNotification:(id)arg1;
- (void)_updateSnapshot;
- (id)albumName;
- (id)artistName;
- (id)artworkCatalog;
- (id)avItem;
- (id)composerName;
- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })durationSnapshot;
- (id)initWithAVItem:(id)arg1;
- (bool)isExplicit;
- (id)modelGenericObjectRepresentation;
- (id)title;

@end
