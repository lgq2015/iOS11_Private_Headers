/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSysdiagnoseLogCollector : NSObject

+ (id)sharedInstance;

- (void)_collectSysdiagnoseLog:(id /* block */)arg1;
- (void)collectSysdiagnoseLog:(id /* block */)arg1;
- (id)init;

@end
