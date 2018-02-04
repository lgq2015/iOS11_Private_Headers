/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSource : NSObject <NSSecureCoding, _DKProtobufConverting> {
    NSString * _bundleID;
    NSString * _deviceID;
    NSString * _groupID;
    NSString * _itemID;
    NSString * _sourceID;
    NSNumber * _userID;
}

@property (readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceID;
@property (readonly) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *itemID;
@property (readonly) NSString *sourceID;
@property (readonly) Class superclass;
@property (readonly) NSNumber *userID;

+ (id)defaultSourceID;
+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)intentsSourceID;
+ (id)sourceForInteraction:(id)arg1 bundleID:(id)arg2;
+ (id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2;
+ (id)spotlightSourceID;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (void)setDeviceID:(id)arg1;
- (id)sourceID;
- (id)toPBCodable;
- (id)userID;

@end
