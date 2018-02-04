/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageRenderRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    <NUExtentPolicy> * _extentPolicy;
    NUPixelFormat * _pixelFormat;
    <NURegionPolicy> * _regionPolicy;
    <NUScalePolicy> * _scalePolicy;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (retain) <NUExtentPolicy> *extentPolicy;
@property (retain) NUPixelFormat *pixelFormat;
@property (retain) <NURegionPolicy> *regionPolicy;
@property (retain) <NUScalePolicy> *scalePolicy;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extentPolicy;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)pixelFormat;
- (id)regionPolicy;
- (id)scalePolicy;
- (void)setColorSpace:(id)arg1;
- (void)setExtentPolicy:(id)arg1;
- (void)setPixelFormat:(id)arg1;
- (void)setRegionPolicy:(id)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
