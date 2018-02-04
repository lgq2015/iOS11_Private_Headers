/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARLightEstimationData : NSObject <ARResultData> {
    ARLightEstimate * _lightEstimate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARLightEstimate *lightEstimate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)lightEstimate;
- (void)setLightEstimate:(id)arg1;

@end
