/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSEntitlementUtilities : NSObject

+ (bool)auditToken:(struct { unsigned int x1[8]; }*)arg1 hasEntitlement:(id)arg2;
+ (bool)currentProcessHasEntitlement:(id)arg1;

@end
