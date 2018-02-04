/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
 */

@interface PlistProcessor : NSObject

+ (id)sharedPlistProcessor;

- (id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2;
- (void)scanPlistsAtPath:(id)arg1 execBlock:(id /* block */)arg2;
- (bool)verifyPlist:(id)arg1 forMountPoint:(id)arg2;

@end
