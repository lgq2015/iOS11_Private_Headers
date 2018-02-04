/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIBadgeView : HKGLView <UIGestureRecognizerDelegate> {
    UIImage * _backAppleLogo;
    GLKTextureInfo * _backTexture;
    bool  _backTextureNeedsRegeneration;
    NSAttributedString * _backsideAttributedString;
    FIUIBadge * _badge;
    <FIUIBadgeViewDelegate> * _badgeDelegate;
    NSString * _badgeModelPath;
    NSString * _badgePlistPath;
    NSString * _badgeTexturePath;
    GLKTextureInfo * _colorTexture;
    GLKTextureInfo * _envTexture;
    unsigned int  _faceProgram;
    struct __UniformBindings { 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } viewProjectionMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } modelMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } cameraPosition; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTexture; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTextureShine; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useFullColorEnamel; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } color; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } enamelColor; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } colorSampler; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentSampler; 
    }  _faceUniformBindings;
    int * _groupTriangleCounts;
    unsigned int  _indexBuffer;
    bool  _magnetsEngaged;
    int * _materialIndices;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _modelBaseColor;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _modelEnamelColor;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    }  _modelTransform;
    bool  _modelUsesFullColorEnamel;
    int  _numGroups;
    unsigned int  _program;
    unsigned long long  _shape;
    id /* block */  _shortenedBadgeBacksideStringProvider;
    double  _spinRate;
    UIPanGestureRecognizer * _spinRecognizer;
    UITapGestureRecognizer * _tapRecognizer;
    NSDictionary * _tweakableUniforms;
    struct __UniformBindings { 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } viewProjectionMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } modelMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } cameraPosition; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTexture; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTextureShine; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useFullColorEnamel; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } color; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } enamelColor; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } colorSampler; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentSampler; 
    }  _uniformBindings;
    unsigned int  _vertexBuffer;
    bool  _verticalPanningDisabled;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    }  _viewProjectionMatrix;
}

@property (nonatomic) <FIUIBadgeViewDelegate> *badgeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ shortenedBadgeBacksideStringProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool verticalPanningDisabled;

+ (double)badgeAspectRatio;

- (void).cxx_destruct;
- (void)_applyImpulse:(double)arg1;
- (id)_attributedStringForUserName:(id)arg1 achievement:(id)arg2 usingSmallVariant:(bool)arg3 smallDateVariant:(bool)arg4;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })_colorVectorFromString:(id)arg1;
- (void)_context_createBuffers;
- (void)_context_destroyBuffers;
- (void)_context_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_context_loadBadgeModel;
- (void)_context_loadShaders;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_setup;
- (void)_context_setupScene;
- (id)_defaultTweaks;
- (void)_disengageMagnets;
- (void)_engageMagnets;
- (void)_forEachProgram:(id /* block */)arg1;
- (void)_generateBackTexture;
- (float)_normalizeAngle:(float)arg1;
- (void)_panned:(id)arg1;
- (void)_setBackTextureNeedsRegeneration;
- (void)_tapped:(id)arg1;
- (id)_valueForTweak:(id)arg1;
- (id)badgeDelegate;
- (void)configureForAchievement:(id)arg1 userName:(id)arg2 usingSmallVariant:(bool)arg3;
- (void)dealloc;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (double)playFlipInAnimation;
- (double)playFlipOutAnimation;
- (void)playRevealAnimationWithDuration:(double)arg1;
- (long long)preferredStatusBarStyle;
- (void)render360RotationPNGSequenceWithNumberOfFrames:(unsigned long long)arg1;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBadgeBacksideAttributedString:(id)arg1;
- (void)setBadgeBacksideIcon:(id)arg1;
- (void)setBadgeDelegate:(id)arg1;
- (void)setBadgeModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;
- (void)setFixedBadgeAngle:(double)arg1;
- (void)setShortenedBadgeBacksideStringProvider:(id /* block */)arg1;
- (void)setVerticalPanningDisabled:(bool)arg1;
- (id /* block */)shortenedBadgeBacksideStringProvider;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)update;
- (bool)verticalPanningDisabled;

@end
