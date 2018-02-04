/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSharedAddressBook : CHSynchronizedLoggable {
    NSMutableDictionary * _addressBookCache;
}

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void).cxx_destruct;
- (id)addressBookCache;
- (void)cleanUpAddressBookCache_sync;
- (void)dealloc;
- (id)description;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (id)init;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)arg1;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)setAddressBookCache:(id)arg1;

@end
