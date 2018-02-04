/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEditorialLayoutMetrics : PXLayoutMetrics {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _interTileSpacing;
    unsigned long long  _lowerItemCountThreshold;
    unsigned long long  _numberOfColumns;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) unsigned long long lowerItemCountThreshold;
@property (nonatomic) unsigned long long numberOfColumns;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)interTileSpacing;
- (unsigned long long)lowerItemCountThreshold;
- (unsigned long long)numberOfColumns;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInterTileSpacing:(double)arg1;
- (void)setLowerItemCountThreshold:(unsigned long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;

@end
