/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKDeviceTouchID : BKDevice

+ (bool)deviceAvailableWithError:(id*)arg1;

- (id)createEnrollOperationWithError:(id*)arg1;
- (id)createExtendEnrollTouchIDOperationWithError:(id*)arg1;
- (id)createMatchOperationWithError:(id*)arg1;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (bool)enableBackgroundFingerDetection:(bool)arg1 error:(id*)arg2;

@end
