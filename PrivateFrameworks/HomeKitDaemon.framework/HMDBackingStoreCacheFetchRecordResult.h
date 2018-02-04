/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {
    NSData * _data;
    unsigned long long  _encoding;
    HMDBackingStoreCacheGroup * _group;
    CKRecord * _record;
    HMDBackingStoreCacheShareGroup * _share;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long encoding;
@property (nonatomic, readonly) HMDBackingStoreCacheGroup *group;
@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly) HMDBackingStoreCacheShareGroup *share;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (unsigned long long)encoding;
- (id)group;
- (id)initWithGroup:(id)arg1 share:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 uuid:(id)arg6;
- (id)record;
- (id)share;
- (id)uuid;

@end
