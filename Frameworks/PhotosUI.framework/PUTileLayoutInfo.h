/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileLayoutInfo : NSObject <NSCopying> {
    double  _alpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    <PUTilingCoordinateSystem> * _coordinateSystem;
    struct { 
        double left; 
        double right; 
        double top; 
        double bottom; 
    }  _expandedRectInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestOutset;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    PUTileIdentifier * _tileIdentifier;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    double  _zPosition;
}

@property (setter=_setAlpha:, nonatomic) double alpha;
@property (setter=_setCenter:, nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (setter=_setCoordinateSystem:, nonatomic, retain) <PUTilingCoordinateSystem> *coordinateSystem;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } expandedRectInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestOutset;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (setter=_setSize:, nonatomic) struct CGSize { double x1; double x2; } size;
@property (setter=_setTileIdentifier:, nonatomic, retain) PUTileIdentifier *tileIdentifier;
@property (nonatomic, readonly) NSString *tileKind;
@property (setter=_setTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (setter=_setZPosition:, nonatomic) double zPosition;

- (void).cxx_destruct;
- (void)_setAlpha:(double)arg1;
- (void)_setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setCoordinateSystem:(id)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTileIdentifier:(id)arg1;
- (void)_setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setZPosition:(double)arg1;
- (double)alpha;
- (struct CGPoint { double x1; double x2; })center;
- (id)clone;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)coordinateSystem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropInsets;
- (id)dataSourceIdentifier;
- (id)description;
- (struct { double x1; double x2; double x3; double x4; })expandedRectInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestOutset;
- (id)indexPath;
- (id)init;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 coordinateSystem:(id)arg8;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 hitTestOutset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg8 coordinateSystem:(id)arg9;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3;
- (id)layoutInfoWithAlpha:(double)arg1;
- (id)layoutInfoWithCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 alpha:(double)arg3 tranform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 zPosition:(double)arg5 coordinateSystem:(id)arg6;
- (id)layoutInfoWithCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 tranform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)layoutInfoWithCoordinateSystem:(id)arg1;
- (id)layoutInfoWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (id)layoutInfoWithZPosition:(double)arg1;
- (struct CGPoint { double x1; double x2; })parallaxOffset;
- (void)setExpandedRectInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tileIdentifier;
- (id)tileKind;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (double)zPosition;

@end
