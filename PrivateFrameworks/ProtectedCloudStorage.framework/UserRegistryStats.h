/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface UserRegistryStats : NSObject <NSSecureCoding> {
    long long  _fetchRecordZoneChanges;
    long long  _lastfetchRecordZoneChangesAtStart;
    long long  _pushNotifications;
    long long  _recordFetch;
    long long  _recordModify;
    long long  _zoneReset;
}

@property long long fetchRecordZoneChanges;
@property long long lastfetchRecordZoneChangesAtStart;
@property long long pushNotifications;
@property long long recordFetch;
@property long long recordModify;
@property long long zoneReset;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)fetchRecordZoneChanges;
- (id)getUserRegistryStats;
- (id)initWithCoder:(id)arg1;
- (long long)lastfetchRecordZoneChangesAtStart;
- (void)printUserRegistryStats:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (long long)pushNotifications;
- (long long)recordFetch;
- (long long)recordModify;
- (void)setFetchRecordZoneChanges:(long long)arg1;
- (void)setLastfetchRecordZoneChangesAtStart:(long long)arg1;
- (void)setPushNotifications:(long long)arg1;
- (void)setRecordFetch:(long long)arg1;
- (void)setRecordModify:(long long)arg1;
- (void)setZoneReset:(long long)arg1;
- (long long)zoneReset;

@end
