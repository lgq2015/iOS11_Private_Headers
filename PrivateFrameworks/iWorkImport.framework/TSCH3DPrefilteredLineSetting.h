/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineSetting : NSObject {
    bool  mCullBackfaces;
    bool  mDisableColorOutput;
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    }  mFilterRadius;
    float  mLineWidth;
    TSDStroke * mStroke;
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    }  mStrokeColor;
    bool  mUseNormals;
}

@property (nonatomic) bool cullBackfaces;
@property (nonatomic) bool disableColorOutput;
@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } filterRadius;
@property (nonatomic) float lineWidth;
@property (nonatomic, copy) TSDStroke *stroke;
@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } strokeColor;
@property (nonatomic) bool useNormals;

+ (id)setting;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cullBackfaces;
- (void)dealloc;
- (bool)disableColorOutput;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })filterRadius;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (float)lineWidth;
- (void)setCullBackfaces:(bool)arg1;
- (void)setDisableColorOutput:(bool)arg1;
- (void)setFilterRadius:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setLineWidth:(float)arg1;
- (void)setStroke:(id)arg1;
- (void)setStrokeColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setUseNormals:(bool)arg1;
- (id)stroke;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })strokeColor;
- (bool)useNormals;

@end
