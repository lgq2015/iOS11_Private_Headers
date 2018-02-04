/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionColorMarker : AXMVisionColor {
    NSString * _localizedName;
}

@property (nonatomic, retain) NSString *localizedName;

+ (id)allColorMarkers;
+ (id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2;
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)localizedName;
- (void)setLocalizedName:(id)arg1;

@end
