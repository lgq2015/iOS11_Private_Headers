/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying> {
    long long  _binCount;
    NUHistogram * _blue;
    NUHistogram * _green;
    NUHistogram * _luminance;
    struct { 
        double min; 
        double max; 
    }  _range;
    NUHistogram * _red;
    long long  _sampleCount;
}

@property (nonatomic, readonly) long long binCount;
@property (nonatomic, readonly) NUHistogram *blue;
@property (nonatomic, readonly) NUHistogram *green;
@property (nonatomic, readonly) NUHistogram *luminance;
@property (nonatomic, readonly) struct { double x1; double x2; } range;
@property (nonatomic, readonly) NUHistogram *red;
@property (nonatomic, readonly) long long sampleCount;

+ (Class)_histogramClass;

- (void).cxx_destruct;
- (long long)binCount;
- (id)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)green;
- (id)immutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithBinCount:(long long)arg1 range:(struct { double x1; double x2; })arg2;
- (id)luminance;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct { double x1; double x2; })range;
- (id)red;
- (long long)sampleCount;

@end
