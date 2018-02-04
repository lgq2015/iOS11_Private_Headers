/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARMarkerTrackingConfiguration : ARConfiguration {
    NSArray * _markers;
}

@property (nonatomic, copy) NSArray *markers;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)markers;
- (void)setMarkers:(id)arg1;
- (id)techniques;

@end
