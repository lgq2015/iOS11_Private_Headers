/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal * _videoLayer;
}

+ (id)defaultActionForKey:(id)arg1;

- (void)_sendVideoLayerIsBeingServicedNotification;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isVideoLayerBeingServiced;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)layerDisplayName;
- (void)notificationBarrier;

@end