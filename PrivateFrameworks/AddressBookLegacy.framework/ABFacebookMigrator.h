/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABFacebookMigrator : NSObject {
    ACAccountStore * _accountStore;
    void * _addressBook;
    NSString * _destinationDescription;
    long long  _facebookContactsCount;
    void * _facebookSource;
    bool  _mayHaveFacebookSource;
    int  _mergeDestinationSourceID;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic) void*addressBook;
@property (getter=isCheckDone, nonatomic) bool checkDone;
@property (nonatomic, retain) NSString *destinationDescription;
@property (nonatomic) long long facebookContactsCount;
@property (nonatomic) void*facebookSource;
@property (nonatomic) bool mayHaveFacebookSource;
@property (nonatomic) int mergeDestinationSourceID;

+ (int)_findFacebookStoreID:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; void *x5; int (*x6)(); int (*x7)(); void *x8; unsigned int x9; bool x10; }*)arg1;
+ (bool)_performQuery:(id)arg1 withStoreID:(int)arg2 connection:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; void *x5; int (*x6)(); int (*x7)(); void *x8; unsigned int x9; bool x10; }*)arg3;
+ (bool)isAccountTypeFacebook:(id)arg1;
+ (bool)isSourceFacebook:(void*)arg1;
+ (bool)mayHaveFacebookContacts:(void*)arg1;
+ (bool)removeFacebookSensitiveInformation:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; void *x5; int (*x6)(); int (*x7)(); void *x8; unsigned int x9; bool x10; }*)arg1;

- (void).cxx_destruct;
- (void)_detectFacebookSource;
- (bool)_mergeContactsFromAccount:(void*)arg1 toDestinationSourceID:(int)arg2;
- (bool)_removeContactsAccount:(void*)arg1;
- (void)_startDatabaseDoctorToPerformAction:(id)arg1;
- (id)accountStore;
- (void*)addressBook;
- (bool)canMergeFacebookContacts;
- (void)dealloc;
- (void)deleteFacebookContacts;
- (id)destinationDescription;
- (long long)facebookContactsCount;
- (void*)facebookSource;
- (int)findBestMergeDestinationSourceID;
- (id)initWithAddressBook:(void*)arg1;
- (bool)isCheckDone;
- (bool)mayHaveFacebookSource;
- (int)mergeDestinationSourceID;
- (void)mergeFacebookContacts;
- (void)performPendingMergeOrDeleteAction;
- (void)setAccountStore:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setCheckDone:(bool)arg1;
- (void)setDestinationDescription:(id)arg1;
- (void)setFacebookContactsCount:(long long)arg1;
- (void)setFacebookSource:(void*)arg1;
- (void)setMayHaveFacebookSource:(bool)arg1;
- (void)setMergeDestinationSourceID:(int)arg1;

@end
