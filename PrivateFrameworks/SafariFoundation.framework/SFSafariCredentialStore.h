/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFSafariCredentialStore : NSObject

+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isAppAutoFillAvailable;

@end
