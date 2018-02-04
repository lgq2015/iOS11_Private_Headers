/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableRowProperties : NSObject <NSCopying> {
    WDCharacterProperties * mCharacterProperties;
    unsigned int  mOriginal;
    struct { 
        short widthBefore; 
        int widthBeforeType; 
        short widthAfter; 
        int widthAfterType; 
        long long height; 
        int heightType; 
        unsigned int widthBeforeOverridden : 1; 
        unsigned int widthBeforeTypeOverridden : 1; 
        unsigned int widthAfterOverridden : 1; 
        unsigned int widthAfterTypeOverridden : 1; 
        unsigned int heightOverridden : 1; 
        unsigned int heightTypeOverridden : 1; 
        unsigned int header : 1; 
        unsigned int headerOverridden : 1; 
    }  mOriginalProperties;
    unsigned int  mResolved;
    WDTableProperties * mTableProperties;
    unsigned int  mTracked;
    struct { 
        short widthBefore; 
        int widthBeforeType; 
        short widthAfter; 
        int widthAfterType; 
        long long height; 
        int heightType; 
        unsigned int widthBeforeOverridden : 1; 
        unsigned int widthBeforeTypeOverridden : 1; 
        unsigned int widthAfterOverridden : 1; 
        unsigned int widthAfterTypeOverridden : 1; 
        unsigned int heightOverridden : 1; 
        unsigned int heightTypeOverridden : 1; 
        unsigned int header : 1; 
        unsigned int headerOverridden : 1; 
    }  mTrackedProperties;
}

- (void)addProperties:(id)arg1;
- (void)addPropertiesValues:(struct { short x1; int x2; short x3; int x4; long long x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; }*)arg1 to:(struct { short x1; int x2; short x3; int x4; long long x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; }*)arg2;
- (id)characterProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)header;
- (long long)height;
- (int)heightType;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (bool)isHeaderOverridden;
- (bool)isHeightOverridden;
- (bool)isHeightTypeOverridden;
- (bool)isWidthAfterOverridden;
- (bool)isWidthAfterTypeOverridden;
- (bool)isWidthBeforeOverridden;
- (bool)isWidthBeforeTypeOverridden;
- (int)resolveMode;
- (void)setHeader:(bool)arg1;
- (void)setHeight:(long long)arg1;
- (void)setHeightType:(int)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setWidthAfter:(short)arg1;
- (void)setWidthAfterType:(int)arg1;
- (void)setWidthBefore:(short)arg1;
- (void)setWidthBeforeType:(int)arg1;
- (id)tableProperties;
- (short)widthAfter;
- (int)widthAfterType;
- (short)widthBefore;
- (int)widthBeforeType;

@end
