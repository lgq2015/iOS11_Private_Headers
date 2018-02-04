/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {
    struct CAMediaTimingFunctionPrivate { float x1[2]; float x2[2]; } * _priv;
}

@property (nonatomic, readonly) TSDBezierPath *bezierPath;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
+ (id)functionWithName:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)CAMLType;
- (void)_getPoints:(double*)arg1;
- (float)_solveForInput:(float)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)sigmoidFunction;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_kbTimingFunction;
+ (id)uiFunctionWithControlPoints:(const struct CGPoint { double x1; double x2; }*)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_functionWithAnimationCurve:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

+ (id)is_timingFunctionWithISPlaybackTimingFunction:(int)arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (double)TSD_valueAtPercent:(double)arg1;
- (id)bezierPath;
- (double)solveForTime:(double)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (double)TSD_valueAtPercent:(double)arg1;

@end
