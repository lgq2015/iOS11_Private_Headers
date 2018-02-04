/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLPlistHandler : NSObject

+ (id)_cplPlistPath;
+ (void)deleteCPLPlist;
+ (id)readCPLPlistWithError:(id*)arg1;
+ (void)saveCPLPlistVersion:(id)arg1 forVersionKey:(id)arg2;
+ (void)saveStoreUUID:(id)arg1;

@end
