/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageGeometry : NSObject <NUSpaceMapping> {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _extent;
    long long  _orientation;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _renderScale;
    <NUSpaceMapping> * _spaceMap;
}

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } extent;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct { long long x1; long long x2; } renderScale;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scaledExtent;
@property (nonatomic, readonly) struct { long long x1; long long x2; } scaledSize;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (nonatomic, readonly) <NUSpaceMapping> *spaceMap;

- (void).cxx_destruct;
- (id)description;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })extent;
- (id)init;
- (id)initWithExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 renderScale:(struct { long long x1; long long x2; })arg2;
- (id)initWithExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 renderScale:(struct { long long x1; long long x2; })arg2 orientation:(long long)arg3;
- (id)initWithExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 renderScale:(struct { long long x1; long long x2; })arg2 orientation:(long long)arg3 spaceMap:(id)arg4;
- (long long)orientation;
- (struct { long long x1; long long x2; })renderScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledExtent;
- (struct { long long x1; long long x2; })scaledSize;
- (struct { long long x1; long long x2; })size;
- (id)spaceMap;
- (id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id*)arg3;

@end
