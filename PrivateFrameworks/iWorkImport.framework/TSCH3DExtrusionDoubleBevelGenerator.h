/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {
    float  mBevelHeight;
    long long  mBevelSlices;
    bool  mEnableBevelEdges;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    }  mInputSpinePoints;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    }  mScaleValues;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    }  mSpinePoints;
}

@property (nonatomic) float bevelHeight;
@property (nonatomic) long long bevelSlices;
@property (nonatomic, readonly) long long bottomBevelStartIndex;
@property (nonatomic, readonly) long long bottomNonBevelStartIndex;
@property (nonatomic) bool enableBevelEdges;

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustBottomOffset;
- (void)adjustBottomScales;
- (void)adjustTopScales;
- (float)bevelHeight;
- (long long)bevelSlices;
- (long long)bottomBevelStartIndex;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })bottomDirection;
- (long long)bottomNonBevelStartIndex;
- (long long)bottomSlices;
- (void)createSpinePointArray;
- (bool)enableBevelEdges;
- (void)generate;
- (void)generateBottom;
- (void)generateTop;
- (id)init;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)inputSpinePoints;
- (void)resetAllScales;
- (float)scaleUValueAtIndex:(long long)arg1;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)scaleValues;
- (void)setBevelHeight:(float)arg1;
- (void)setBevelSlices:(long long)arg1;
- (void)setEnableBevelEdges:(bool)arg1;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)spinePoints;
- (float)spineUValueAtIndex:(long long)arg1;
- (long long)topBevelStartIndex;
- (long long)topSlices;

@end
