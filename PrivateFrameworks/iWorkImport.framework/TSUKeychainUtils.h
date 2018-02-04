/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUKeychainUtils : NSObject

+ (bool)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 error:(id*)arg4;
+ (bool)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 error:(id*)arg3;
+ (bool)removeGenericItem:(id)arg1 error:(id*)arg2;
+ (bool)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 error:(id*)arg7;
+ (bool)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 error:(id*)arg6;

@end
