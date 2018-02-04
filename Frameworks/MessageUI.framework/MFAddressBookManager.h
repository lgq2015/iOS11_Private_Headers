/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressBookManager : NSObject {
    void * _addressBook;
    struct __CFDictionary { } * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (bool)isAuthorizedToUseAddressBook;
+ (id)sharedManager;

- (id)_clientWeakReferences;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;
- (void)addClient:(id)arg1;
- (void*)addressBook;
- (void)dealloc;
- (id)init;
- (void)removeClient:(id)arg1;

@end
