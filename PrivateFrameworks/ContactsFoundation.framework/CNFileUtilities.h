/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFileUtilities : NSObject {
    <CNFileServices> * _services;
}

+ (id)requestSharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedLockDirectoryURLWithFileServices:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithFileServices:(id)arg1;
- (bool)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:(id)arg1;

@end
