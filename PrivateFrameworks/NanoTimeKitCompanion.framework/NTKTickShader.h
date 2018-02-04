/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTickShader : SKShader {
    UIColor * _backgroundColor;
    SKUniform * _backgroundColorUniform;
    SKUniform * _filterUniform;
    double  _filterWidth;
    double  _tickWidth;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) double filterWidth;
@property (nonatomic, readonly) double tickWidth;

+ (id)shaderWithTickWidth:(float)arg1 filterWidth:(float)arg2;

- (void).cxx_destruct;
- (id)backgroundColor;
- (double)filterWidth;
- (id)init;
- (id)initWithTickWidth:(float)arg1 filterWidth:(float)arg2;
- (void)setBackgroundColor:(id)arg1;
- (double)tickWidth;

@end
