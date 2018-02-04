/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIFileManager : NSObject

+ (id)defaultManager;

- (bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(bool)arg3 error:(id*)arg4;
- (bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(bool)arg3 error:(id*)arg4;
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(bool)arg2;
- (id)_realPathWhatExistsInPath:(id)arg1;
- (bool)_removeACLAtPath:(const char *)arg1 isDir:(bool)arg2 error:(id*)arg3;
- (bool)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(id /* block */)arg3;
- (bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int*)arg3;
- (bool)bundleAtURLIsPlaceholder:(id)arg1;
- (bool)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(bool)arg3 failureIsFatal:(bool)arg4 withError:(id*)arg5;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5;
- (bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 error:(id*)arg4;
- (bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2;
- (bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3;
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id*)arg2;
- (id)installTypeForBundle:(id)arg1 error:(id*)arg2;
- (bool)itemDoesNotExistAtURL:(id)arg1;
- (bool)itemExistsAtURL:(id)arg1;
- (bool)itemExistsAtURL:(id)arg1 error:(id*)arg2;
- (bool)markBundleAsPlaceholder:(id)arg1 withError:(id*)arg2;
- (bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(id /* block */)arg3 error:(id*)arg4;
- (bool)setInstallType:(id)arg1 onBundle:(id)arg2 error:(id*)arg3;
- (bool)setUniqueInstallID:(id)arg1 onBundle:(id)arg2 error:(id*)arg3;
- (bool)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned int)arg2 GID:(unsigned int)arg3 validateSymlinks:(bool)arg4 removeACLs:(bool)arg5 error:(id*)arg6;
- (id)uniqueInstallIDForBundle:(id)arg1 error:(id*)arg2;
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(bool)arg2 error:(id*)arg3;

@end
