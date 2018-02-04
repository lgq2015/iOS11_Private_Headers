/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying> {
    struct { 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } topLeft; 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } bottomRight; 
    }  _gridRange;
    double  _inset;
    bool  _reoriginToZero;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } gridRange;
@property (nonatomic) double inset;
@property (nonatomic) bool reoriginToZero;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })gridRange;
- (unsigned long long)hash;
- (double)inset;
- (bool)isEqual:(id)arg1;
- (bool)reoriginToZero;
- (void)setGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (void)setInset:(double)arg1;
- (void)setReoriginToZero:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
