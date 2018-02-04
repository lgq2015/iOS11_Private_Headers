/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKGemUserLocationView : MKUserLocationView {
    CALayer * _gemLayer;
}

- (void).cxx_destruct;
- (id)_baseLayer;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setupLayers;
- (void)_updateLayers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)normalImage;
- (id)staleImage;

@end
