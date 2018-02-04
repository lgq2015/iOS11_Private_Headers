/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } quaternion;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } rotationMatrix;
@property (nonatomic, readonly) double yaw;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)multiplyByInverseOfAttitude:(id)arg1;
- (double)pitch;
- (struct { double x1; double x2; double x3; double x4; })quaternion;
- (double)roll;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })rotationMatrix;
- (void)setQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;
- (double)yaw;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (void)cam_getDistanceFromFlat:(out float*)arg1 relativeRoll:(out float*)arg2;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

- (union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })GLKQuaternion;

@end
