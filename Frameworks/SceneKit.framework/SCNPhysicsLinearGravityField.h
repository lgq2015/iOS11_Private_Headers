/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsLinearGravityField : SCNPhysicsField

- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_createField;
- (struct SCNVector3 { float x1; float x2; float x3; })gravity;
- (void)setDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (bool)supportsOffset;

@end
