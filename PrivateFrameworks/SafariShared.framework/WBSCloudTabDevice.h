/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudTabDevice : NSObject <NSCopying> {
    bool  _closeRequestSupported;
    bool  _cloudKitBookmarkSyncingSupported;
    bool  _ephemeralDevice;
    bool  _hasDuplicateName;
    NSDate * _lastModified;
    NSString * _name;
    NSArray * _tabs;
    NSString * _uuid;
}

@property (getter=isCloseRequestSupported, nonatomic, readonly) bool closeRequestSupported;
@property (getter=isCloudKitBookmarkSyncingSupported, nonatomic, readonly) bool cloudKitBookmarkSyncingSupported;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=isEphemeralDevice, nonatomic, readonly) bool ephemeralDevice;
@property (nonatomic, readonly) bool hasDuplicateName;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *tabs;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 isEphemeralDevice:(bool)arg5;
+ (id)deviceNameInDictionary:(id)arg1;
+ (bool)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (bool)isCloudTabDeviceDictionary:(id)arg1;
+ (bool)isEphemeralDeviceInDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceByRemovingTab:(id)arg1;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDuplicateName;
- (unsigned long long)hash;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(bool)arg6;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;
- (bool)isCloseRequestSupported;
- (bool)isCloudKitBookmarkSyncingSupported;
- (bool)isEphemeralDevice;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)name;
- (id)tabs;
- (id)uuid;

@end
