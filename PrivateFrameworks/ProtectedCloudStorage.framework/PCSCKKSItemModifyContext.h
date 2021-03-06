/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKSItemModifyContext : NSObject {
    struct _PCSIdentityData { } * _currentIdentity;
    NSData * _currentItemReference;
    NSString * _dsid;
    NSData * _existingItemReference;
    NSData * _existingItemSHA1;
    struct __PCSLogContext { } * _log;
    struct __CFDictionary { } * _rollAttributes;
    struct _PCSIdentityData { } * _rollIdentity;
    NSData * _rollItemReference;
    NSData * _rollItemSHA1;
    NSDate * _server_NextRollDate;
    NSString * _service;
    struct _PCSIdentitySetData { } * _set;
}

@property struct _PCSIdentityData { }*currentIdentity;
@property (retain) NSData *currentItemReference;
@property (retain) NSString *dsid;
@property (retain) NSData *existingItemReference;
@property (retain) NSData *existingItemSHA1;
@property struct __PCSLogContext { }*log;
@property struct _PCSIdentityData { }*rollIdentity;
@property (retain) NSData *rollItemReference;
@property (retain) NSData *rollItemSHA1;
@property (retain) NSDate *server_NextRollDate;
@property (retain) NSString *service;
@property struct _PCSIdentitySetData { }*set;

- (void).cxx_destruct;
- (struct _PCSIdentityData { }*)currentIdentity;
- (id)currentItemReference;
- (void)dealloc;
- (id)dsid;
- (id)existingItemReference;
- (id)existingItemSHA1;
- (struct __PCSLogContext { }*)log;
- (void)resetIdentities;
- (struct _PCSIdentityData { }*)rollIdentity;
- (id)rollItemReference;
- (id)rollItemSHA1;
- (id)server_NextRollDate;
- (id)service;
- (struct _PCSIdentitySetData { }*)set;
- (void)setCurrentIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setCurrentItemReference:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setExistingItemReference:(id)arg1;
- (void)setExistingItemSHA1:(id)arg1;
- (void)setLog:(struct __PCSLogContext { }*)arg1;
- (void)setRollIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setRollItemReference:(id)arg1;
- (void)setRollItemSHA1:(id)arg1;
- (void)setServer_NextRollDate:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSet:(struct _PCSIdentitySetData { }*)arg1;

@end
