/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmStripViewIndicatorInfo : NSObject {
    UIColor * _color;
    double  _normalizedLocation;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double normalizedLocation;

- (void).cxx_destruct;
- (id)color;
- (unsigned long long)hash;
- (id)initWithLocation:(double)arg1 color:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)normalizedLocation;

@end
