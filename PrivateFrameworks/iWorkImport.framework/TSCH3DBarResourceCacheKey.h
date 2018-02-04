/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCacheKey : NSObject {
    struct BarExtrusionSetting { 
        float size; 
        bool hasTopBevel; 
        bool hasBottomBevel; 
        bool isCylindrical; 
        bool isStackedBar; 
        struct BarExtrusionDetails { 
            struct BarExtrusionCrossSectionDetails { 
                float detail; 
                float tension; 
                float adaptiveThreshold; 
                float creaseAngle; 
                int crossType; 
            } crossSection; 
            struct BarExtrusionSpineDetails { 
                float bevelHeight; 
                long long bevelSlices; 
                long long stride; 
                float creaseAngle; 
            } spine; 
        } details; 
    }  mSetting;
}

+ (id)keyWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; bool x2; bool x3; bool x4; bool x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; long long x_2_2_2; long long x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; bool x2; bool x3; bool x4; bool x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; long long x_2_2_2; long long x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;
- (bool)isEqual:(id)arg1;

@end
