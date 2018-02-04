/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKGeofenceRelevanceProvider : NTKRelevanceProvider {
    CLCircularRegion * _region;
}

@property (nonatomic, readonly) CLCircularRegion *region;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithRegion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)region;

@end
