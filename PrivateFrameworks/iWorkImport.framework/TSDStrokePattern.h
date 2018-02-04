/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    unsigned long long  mCount;
    double  mPattern;
    double  mPhase;
    int  mType;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) bool isDash;
@property (nonatomic, readonly) bool isRoundDash;
@property (nonatomic, readonly) double*pattern;
@property (nonatomic, readonly) int patternType;
@property (nonatomic, readonly) double phase;

+ (id)dashPatternWithSpacing:(double)arg1;
+ (id)emptyPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)shortDashPattern;
+ (id)solidPattern;
+ (id)strokePatternWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3;

- (void)applyToCAShapeLayer:(id)arg1;
- (void)applyToContext:(struct CGContext { }*)arg1 lineWidth:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hash;
- (void)i_applyToContext:(struct CGContext { }*)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long*)arg3;
- (id)initWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (bool)isDash;
- (bool)isEqual:(id)arg1;
- (bool)isRoundDash;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2;
- (id)p_initWithType:(int)arg1 pattern:(const double*)arg2 count:(unsigned long long)arg3 phase:(double)arg4;
- (double*)pattern;
- (int)patternType;
- (double)phase;

@end
