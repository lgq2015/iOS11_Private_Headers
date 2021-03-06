/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSTopShelfPurgingAccountStore : VSAccountStore

- (void)_purgeTopShelfContent;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
