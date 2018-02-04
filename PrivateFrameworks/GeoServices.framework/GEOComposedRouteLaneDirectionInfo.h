/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding> {
    float  _angle;
    int  _direction;
}

@property (nonatomic, readonly) float angle;
@property (nonatomic, readonly) int direction;

+ (bool)supportsSecureCoding;

- (float)angle;
- (int)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneArrowHead:(id)arg1;

@end
