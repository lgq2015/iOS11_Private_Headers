/* made by EzioChiu
   Image: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
 */

@interface DCDevice : NSObject

@property (getter=isSupported, readonly) bool supported;

+ (id)currentDevice;

- (void)generateTokenWithCompletionHandler:(id /* block */)arg1;
- (bool)isSupported;

@end
