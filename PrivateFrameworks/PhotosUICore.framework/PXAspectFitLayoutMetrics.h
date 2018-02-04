/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAspectFitLayoutMetrics : PXLayoutMetrics {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _interTileSpacing;
    long long  _maxTilesPerRow;
    double  _minRowAspectRatio;
    long long  _minTilesPerRow;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) long long maxTilesPerRow;
@property (nonatomic) double minRowAspectRatio;
@property (nonatomic) long long minTilesPerRow;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)interTileSpacing;
- (long long)maxTilesPerRow;
- (double)minRowAspectRatio;
- (long long)minTilesPerRow;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInterTileSpacing:(double)arg1;
- (void)setMaxTilesPerRow:(long long)arg1;
- (void)setMinRowAspectRatio:(double)arg1;
- (void)setMinTilesPerRow:(long long)arg1;

@end
