/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider> {
    CALayer * _aboveRepsLayerHost;
    CALayer * _overlayLayerHost;
    CALayer * _underRepsLayerHost;
}

@property (nonatomic, retain) CALayer *aboveRepsLayerHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *overlayLayerHost;
@property (readonly) Class superclass;
@property (nonatomic, retain) CALayer *underRepsLayerHost;

- (void).cxx_destruct;
- (id)aboveRepsLayerHost;
- (id)directLayerHostForRep:(id)arg1;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg1;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg1;
- (void)directLayerHostUpdateRepOverlayLayers:(id)arg1;
- (id)overlayLayerHost;
- (void)setAboveRepsLayerHost:(id)arg1;
- (void)setOverlayLayerHost:(id)arg1;
- (void)setUnderRepsLayerHost:(id)arg1;
- (id)underRepsLayerHost;

@end
