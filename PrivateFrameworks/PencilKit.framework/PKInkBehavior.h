/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkBehavior : NSObject {
    NSString * _accessibilityToolName;
    NSString * _accessibilityToolSelectedString;
    NSString * _actionName;
    bool  _adjustEndCapParticleAlpha;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__first_; 
        } __end_cap_; 
    }  _aspectRatioOutput;
    double  _baseAlpha;
    double  _baseRadiusStylus;
    double  _baseRadiusTouchPad;
    double  _baseRadiusTouchPhone;
    double  _blendAlpha;
    unsigned long long  _blendMode;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__first_; 
        } __end_cap_; 
    }  _brushOpacityOutput;
    double  _dynamicStep;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__first_; 
        } __end_cap_; 
    }  _edgeWidthOutput;
    bool  _immutableVelocity;
    bool  _isEraser;
    bool  _isObjectEraser;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__first_; 
        } __end_cap_; 
    }  _opacityOutput;
    unsigned int  _particleCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _particleSize;
    double  _particleSpacing;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { 
            struct PKOutputFunction {} *__first_; 
        } __end_cap_; 
    }  _radiusOutput;
    bool  _randomRotation;
    bool  _rotateEachParticle;
    double  _rulerOffsetConstant;
    double  _rulerOffsetScale;
    bool  _showBrushIndicator;
    double  _stylusSmoothing;
    double  _targetMultiple;
    NSString * _textureName;
    bool  _timeDependent;
    NSString * _toolIcon;
    double  _touchEndCapFade;
    double  _touchEndCapTime;
    double  _touchSmoothing;
    double  _touchStartCapFade;
    double  _touchStartCapTime;
    unsigned long long  _type;
    bool  _usesAzimuth;
    bool  _variableSnappedWidth;
    double  _velocitySmoothing;
}

@property (nonatomic) NSString *accessibilityToolName;
@property (nonatomic) NSString *accessibilityToolSelectedString;
@property (nonatomic, copy) NSString *actionName;
@property (nonatomic) bool adjustEndCapParticleAlpha;
@property (nonatomic) double baseAlpha;
@property (nonatomic) double blendAlpha;
@property (nonatomic) unsigned long long blendMode;
@property (nonatomic) double dynamicStep;
@property (nonatomic) bool immutableVelocity;
@property (nonatomic) bool isEraser;
@property (nonatomic) bool isObjectEraser;
@property (nonatomic) unsigned int particleCount;
@property (nonatomic) struct CGSize { double x1; double x2; } particleSize;
@property (nonatomic) double particleSpacing;
@property (nonatomic) bool randomRotation;
@property (nonatomic) bool rotateEachParticle;
@property (nonatomic) double rulerOffsetConstant;
@property (nonatomic) double rulerOffsetScale;
@property (nonatomic) bool showBrushIndicator;
@property (nonatomic) double stylusSmoothing;
@property (nonatomic) double targetMultiple;
@property (nonatomic, copy) NSString *textureName;
@property (nonatomic) bool timeDependent;
@property (nonatomic, copy) NSString *toolIcon;
@property (nonatomic) double touchEndCapFade;
@property (nonatomic) double touchEndCapTime;
@property (nonatomic) double touchSmoothing;
@property (nonatomic) double touchStartCapFade;
@property (nonatomic) double touchStartCapTime;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool usesAzimuth;
@property (nonatomic) bool variableSnappedWidth;
@property (nonatomic) double velocitySmoothing;

+ (id)plistDictionaryForInk:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityToolName;
- (id)accessibilityToolSelectedString;
- (id)actionName;
- (bool)adjustEndCapParticleAlpha;
- (double)alphaForStroke:(id)arg1;
- (double)baseAlpha;
- (double)baseRadiusForInputType:(long long)arg1;
- (double)blendAlpha;
- (unsigned long long)blendMode;
- (double)brushOpacityForPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 context:(/* Warning: unhandled struct encoding: '{?={_PKStrokePoint=d{CGPoint=dd}ddddddd}Bqdddd@}' */ struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; }*)arg2;
- (double)dynamicStep;
- (bool)immutableVelocity;
- (id)init;
- (id)initWithInk:(id)arg1;
- (id)initWithInk:(id)arg1 version:(unsigned long long)arg2;
- (bool)isEraser;
- (bool)isObjectEraser;
- (void)loadBaseRadius:(id)arg1;
- (struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction {} *x_1_1_1; } x1; })loadFunction:(id)arg1;
- (void)loadInkWithDictionary:(id)arg1;
- (void)loadInkWithName:(id)arg1 version:(unsigned long long)arg2;
- (struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })loadOutput:(id)arg1;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })outputForPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg1 context:(/* Warning: unhandled struct encoding: '{?={_PKStrokePoint=d{CGPoint=dd}ddddddd}Bqdddd@}' */ struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; }*)arg2;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })outputTimePoint:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 atTime:(double)arg2 stillChanging:(bool*)arg3;
- (unsigned int)particleCount;
- (struct CGSize { double x1; double x2; })particleSize;
- (double)particleSpacing;
- (unsigned int)particleTexture;
- (bool)randomRotation;
- (bool)rotateEachParticle;
- (double)rulerOffsetConstant;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 inputType:(long long)arg2 inputScale:(double)arg3;
- (double)rulerOffsetScale;
- (void)setAccessibilityToolName:(id)arg1;
- (void)setAccessibilityToolSelectedString:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setAdjustEndCapParticleAlpha:(bool)arg1;
- (void)setBaseAlpha:(double)arg1;
- (void)setBlendAlpha:(double)arg1;
- (void)setBlendMode:(unsigned long long)arg1;
- (void)setDynamicStep:(double)arg1;
- (void)setImmutableVelocity:(bool)arg1;
- (void)setIsEraser:(bool)arg1;
- (void)setIsObjectEraser:(bool)arg1;
- (void)setParticleCount:(unsigned int)arg1;
- (void)setParticleSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParticleSpacing:(double)arg1;
- (void)setRandomRotation:(bool)arg1;
- (void)setRotateEachParticle:(bool)arg1;
- (void)setRulerOffsetConstant:(double)arg1;
- (void)setRulerOffsetScale:(double)arg1;
- (void)setShowBrushIndicator:(bool)arg1;
- (void)setStylusSmoothing:(double)arg1;
- (void)setTargetMultiple:(double)arg1;
- (void)setTextureName:(id)arg1;
- (void)setTimeDependent:(bool)arg1;
- (void)setToolIcon:(id)arg1;
- (void)setTouchEndCapFade:(double)arg1;
- (void)setTouchEndCapTime:(double)arg1;
- (void)setTouchSmoothing:(double)arg1;
- (void)setTouchStartCapFade:(double)arg1;
- (void)setTouchStartCapTime:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUsesAzimuth:(bool)arg1;
- (void)setVariableSnappedWidth:(bool)arg1;
- (void)setVelocitySmoothing:(double)arg1;
- (id)setupParticleShader:(id)arg1 resourceHandler:(id)arg2;
- (id)shaderFrom:(id)arg1;
- (bool)showBrushIndicator;
- (double)solve:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; }*)arg1 forPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; bool x7; long long x8; double x9; bool x10; })arg2 context:(/* Warning: unhandled struct encoding: '{?={_PKStrokePoint=d{CGPoint=dd}ddddddd}Bqdddd@}' */ struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; }*)arg3;
- (double)solveForTime:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; }*)arg1 forTime:(double)arg2 stillChanging:(bool*)arg3;
- (double)stylusSmoothing;
- (double)targetMultiple;
- (id)textureName;
- (bool)timeDependent;
- (id)toolIcon;
- (double)touchEndCapFade;
- (double)touchEndCapTime;
- (double)touchSmoothing;
- (double)touchStartCapFade;
- (double)touchStartCapTime;
- (unsigned long long)type;
- (bool)usesAzimuth;
- (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier { int (**x1)(); struct vector<double, std::__1::allocator<double> > { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_2_1_3; } x2; struct vector<double, std::__1::allocator<double> > { double *x_3_1_1; double *x_3_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_3_1_3; } x3; struct vector<double, std::__1::allocator<double> > { double *x_4_1_1; double *x_4_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_4_1_3; } x4; struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_5_1_1; struct vector<double, std::__1::allocator<double> > {} *x_5_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_5_1_3; } x5; }*)arg1;
- (bool)variableSnappedWidth;
- (double)velocitySmoothing;
- (void)verifyParameters;

@end
