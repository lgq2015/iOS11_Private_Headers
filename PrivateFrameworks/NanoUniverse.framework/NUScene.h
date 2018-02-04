/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUScene : NSObject <NUAnimatable> {
    NSMutableArray * _animations;
    unsigned long long  _backgroundType;
    id /* block */  _currentDateBlock;
    NSDate * _date;
    NUSpheroid * _focus;
    unsigned int  _isUpdatable;
    unsigned int  _isUpdateNeeded;
    int  _minFrameInterval;
    float  _orbit;
    void _position;
    unsigned long long  _projectionType;
    float  _roll;
    unsigned long long  _snap;
    NSMutableArray * _spheroids;
    void _target;
    void _up;
    float  _yearsSince1970;
}

@property (nonatomic, readonly) int acceptableFrameInterval;
@property (nonatomic) unsigned long long backgroundType;
@property (nonatomic, copy) id /* block */ currentDateBlock;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NUSpheroid *focus;
@property (readonly) unsigned long long hash;
@property (nonatomic) int minFrameInterval;
@property (nonatomic) float orbit;
@property (nonatomic, readonly) void position;
@property (nonatomic) unsigned long long projectionType;
@property (nonatomic) float roll;
@property (nonatomic) unsigned long long snap;
@property (nonatomic, readonly) NSArray *spheroids;
@property (readonly) Class superclass;
@property (nonatomic, readonly) void target;
@property (nonatomic, readonly) void up;
@property (nonatomic) bool updatable;
@property (nonatomic, readonly) float yearsSince1970;

- (void).cxx_destruct;
- (int)acceptableFrameInterval;
- (void)addAnimation:(id)arg1;
- (void)animatedFloatForKey:(unsigned long long)arg1;
- (unsigned long long)backgroundType;
- (id /* block */)currentDateBlock;
- (id)date;
- (id)focus;
- (id)initWithSphereoids:(unsigned long long)arg1 currentDateBlock:(id /* block */)arg2;
- (bool)isAnimating:(id)arg1 forKeys:(unsigned long long)arg2;
- (int)minFrameInterval;
- (float)orbit;
- (void)position;
- (unsigned long long)projectionType;
- (void)removeAllAnimationsFor:(id)arg1 withKeys:(unsigned long long)arg2;
- (void)removeAnimation:(id)arg1;
- (float)roll;
- (void)setAnimatedFloat:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: unsigned long long
- (void)setBackgroundType:(unsigned long long)arg1;
- (void)setCamera:(void *)arg1 target:(void *)arg2 up:(void *)arg3 roll:(void *)arg4; // needs 4 arg types, found 1: float
- (void)setCurrentDateBlock:(id /* block */)arg1;
- (void)setDate:(id)arg1;
- (void)setFocus:(id)arg1;
- (void)setMinFrameInterval:(int)arg1;
- (void)setOrbit:(float)arg1;
- (void)setProjectionType:(unsigned long long)arg1;
- (void)setRoll:(float)arg1;
- (void)setSnap:(unsigned long long)arg1;
- (void)setUpdatable:(bool)arg1;
- (unsigned long long)snap;
- (id)spheroidOfType:(unsigned long long)arg1;
- (id)spheroids;
- (void)target;
- (void)up;
- (bool)updatable;
- (void)update:(float)arg1;
- (void)updateFromDateIfNeeded;
- (void)updateSunLocation;
- (void)updateSunLocationForDate:(id)arg1 animated:(bool)arg2;
- (float)yearsSince1970;

@end
