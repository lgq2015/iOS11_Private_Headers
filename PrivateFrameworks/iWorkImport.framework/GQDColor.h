/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDColor : NSObject <GQDNameMappable> {
    double  mAlpha;
    double  mBlue;
    double  mGreen;
    double  mRed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)blackColor;
+ (id)cmykColorFromReader:(struct _xmlTextReader { }*)arg1;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (void)readColorFromProcessor:(id)arg1 reader:(struct _xmlTextReader { }*)arg2;
+ (id)rgbColorFromReader:(struct _xmlTextReader { }*)arg1 calibrated:(bool)arg2;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (id)whiteColorFromReader:(struct _xmlTextReader { }*)arg1 calibrated:(bool)arg2;

- (double)alphaComponent;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)blueComponent;
- (id)description;
- (void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (double)greenComponent;
- (int)htmlBlue;
- (int)htmlGreen;
- (int)htmlRed;
- (id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)redComponent;

@end