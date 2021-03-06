/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSFolder : UserFSItem

- (id)_pathForChildNamed:(id)arg1;
- (id)childNamed:(id)arg1 error:(id*)arg2;
- (bool)deleteChildNamed:(id)arg1 error:(id*)arg2;
- (bool)enumerateChildrenAndReturnError:(id*)arg1 callback:(id /* block */)arg2;
- (bool)isDirectory;

@end
