/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlSpringInstance : NSObject {
    float  _alphaDecay;
    float  _alphaFactor;
    unsigned long long  _axisOrientation;
    void _color;
    bool  _grayscale;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _initialMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _matrix;
    float  _scale;
    float  _scaleDest;
    unsigned long long  _springState;
    void _target;
    void _value;
    FLSpring * springs;
}

@property unsigned long long axisOrientation;
@property (nonatomic) bool grayscale;
@property (nonatomic) unsigned long long springState;
@property (nonatomic) void target;
@property (nonatomic) void value;

- (void).cxx_destruct;
- (unsigned long long)axisOrientation;
- (void)color;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })createAxisRotationMatrix;
- (bool)grayscale;
- (id)initWithInitialRotationcolor;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrix;
- (void)setAxisOrientation:(unsigned long long)arg1;
- (void)setGrayscale:(bool)arg1;
- (void)setParameters:(struct FLSpringParameters { double x1; double x2; double x3; double x4; })arg1;
- (void)setSpringState:(unsigned long long)arg1;
- (void)setTarget;
- (void)setValue;
- (unsigned long long)springState;
- (void)step:(double)arg1;
- (void)target;
- (void)value;
- (void)velocity;

@end
