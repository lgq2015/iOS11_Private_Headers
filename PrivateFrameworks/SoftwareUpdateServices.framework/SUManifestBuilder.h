/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManifestBuilder : NSObject

+ (bool)isManifestRequiredForDescriptor:(id)arg1;
+ (id)manifestFromDescriptor:(id)arg1 outRequired:(bool*)arg2;

@end
