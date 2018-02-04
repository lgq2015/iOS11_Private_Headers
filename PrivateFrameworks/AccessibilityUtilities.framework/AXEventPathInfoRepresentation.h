/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventPathInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    float  _altitude;
    float  _azimuth;
    float  _barrelPressure;
    unsigned int  _didUpdateMask;
    float  _orbValue;
    float  _pathDensity;
    unsigned int  _pathEventMask;
    unsigned char  _pathIdentity;
    unsigned char  _pathIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pathLocation;
    float  _pathMajorRadius;
    float  _pathMajorRadiusTolerance;
    float  _pathMinorRadius;
    float  _pathPressure;
    unsigned char  _pathProximity;
    float  _pathQuality;
    float  _pathTwist;
    void * _pathWindow;
    unsigned int  _pathWindowContextID;
    unsigned int  _transducerType;
    unsigned int  _willUpdateMask;
}

@property (nonatomic) float altitude;
@property (nonatomic) float azimuth;
@property (nonatomic) float barrelPressure;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int didUpdateMask;
@property (readonly) unsigned long long hash;
@property (nonatomic) float orbValue;
@property (nonatomic) float pathDensity;
@property (nonatomic) unsigned int pathEventMask;
@property (nonatomic) unsigned char pathIdentity;
@property (nonatomic) unsigned char pathIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } pathLocation;
@property (nonatomic) float pathMajorRadius;
@property (nonatomic) float pathMajorRadiusTolerance;
@property (nonatomic) float pathMinorRadius;
@property (nonatomic) float pathPressure;
@property (nonatomic) unsigned char pathProximity;
@property (nonatomic) float pathQuality;
@property (nonatomic) float pathTwist;
@property (nonatomic) void*pathWindow;
@property (nonatomic) unsigned int pathWindowContextID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transducerType;
@property (nonatomic) unsigned int willUpdateMask;

+ (id)representationWithPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; void *x8; }*)arg1;
+ (bool)supportsSecureCoding;

- (id)accessibilityEventRepresentationTabularDescription;
- (float)altitude;
- (float)azimuth;
- (float)barrelPressure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)didUpdateMask;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)orbValue;
- (float)pathDensity;
- (unsigned int)pathEventMask;
- (unsigned char)pathIdentity;
- (unsigned char)pathIndex;
- (struct CGPoint { double x1; double x2; })pathLocation;
- (float)pathMajorRadius;
- (float)pathMajorRadiusTolerance;
- (float)pathMinorRadius;
- (float)pathPressure;
- (unsigned char)pathProximity;
- (float)pathQuality;
- (float)pathTwist;
- (void*)pathWindow;
- (unsigned int)pathWindowContextID;
- (void)setAltitude:(float)arg1;
- (void)setAzimuth:(float)arg1;
- (void)setBarrelPressure:(float)arg1;
- (void)setDidUpdateMask:(unsigned int)arg1;
- (void)setOrbValue:(float)arg1;
- (void)setPathDensity:(float)arg1;
- (void)setPathEventMask:(unsigned int)arg1;
- (void)setPathIdentity:(unsigned char)arg1;
- (void)setPathIndex:(unsigned char)arg1;
- (void)setPathLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPathMajorRadius:(float)arg1;
- (void)setPathMajorRadiusTolerance:(float)arg1;
- (void)setPathMinorRadius:(float)arg1;
- (void)setPathPressure:(float)arg1;
- (void)setPathProximity:(unsigned char)arg1;
- (void)setPathQuality:(float)arg1;
- (void)setPathTwist:(float)arg1;
- (void)setPathWindow:(void*)arg1;
- (void)setPathWindowContextID:(unsigned int)arg1;
- (void)setTransducerType:(unsigned int)arg1;
- (void)setWillUpdateMask:(unsigned int)arg1;
- (unsigned int)transducerType;
- (unsigned int)willUpdateMask;
- (void)writeToPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; unsigned int x7; void *x8; }*)arg1;

@end
