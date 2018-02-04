/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVCornerUtilities : NSObject

+ (struct CGPath { }*)createPathForRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGPath { }*)createPathForRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isContinuous:(bool)arg3;
+ (struct TVCornerRadii { double x1; double x2; double x3; double x4; })flipCGOriginRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
+ (struct TVCornerRadii { double x1; double x2; double x3; double x4; })radiiFromRadius:(double)arg1;
+ (bool)radiiIsZero:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
+ (double)radiusFromCornerRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;

@end
