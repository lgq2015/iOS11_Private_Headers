/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCache : NSObject {
    TSUNoCopyDictionary * mCache;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)barWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; bool x2; bool x3; bool x4; bool x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; long long x_2_2_2; long long x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;
+ (id)instance;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)p_barWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; bool x2; bool x3; bool x4; bool x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; long long x_2_2_2; long long x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
