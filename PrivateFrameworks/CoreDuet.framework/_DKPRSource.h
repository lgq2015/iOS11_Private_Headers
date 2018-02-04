/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRSource : PBCodable <NSCopying> {
    NSString * _bundleID;
    NSString * _deviceID;
    NSString * _groupID;
    struct { 
        unsigned int userID : 1; 
    }  _has;
    NSString * _itemID;
    NSString * _sourceID;
    int  _userID;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic, readonly) bool hasDeviceID;
@property (nonatomic, readonly) bool hasGroupID;
@property (nonatomic, readonly) bool hasItemID;
@property (nonatomic, readonly) bool hasSourceID;
@property (nonatomic) bool hasUserID;
@property (nonatomic, retain) NSString *itemID;
@property (nonatomic, retain) NSString *sourceID;
@property (nonatomic) int userID;

- (void).cxx_destruct;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (id)dictionaryRepresentation;
- (id)groupID;
- (bool)hasBundleID;
- (bool)hasDeviceID;
- (bool)hasGroupID;
- (bool)hasItemID;
- (bool)hasSourceID;
- (bool)hasUserID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHasUserID:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setUserID:(int)arg1;
- (id)sourceID;
- (int)userID;
- (void)writeTo:(id)arg1;

@end
