/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPBPlayActivityEnqueuerProperties : PBCodable <NSCopying> {
    NSString * _buildVersion;
    NSString * _deviceGUID;
    NSString * _deviceName;
    struct { 
        unsigned int storeAccountID : 1; 
        unsigned int systemReleaseType : 1; 
        unsigned int sBEnabled : 1; 
    }  _has;
    bool  _sBEnabled;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
    int  _systemReleaseType;
    NSString * _timeZoneName;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *deviceGUID;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) bool hasBuildVersion;
@property (nonatomic, readonly) bool hasDeviceGUID;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic) bool hasSBEnabled;
@property (nonatomic) bool hasStoreAccountID;
@property (nonatomic, readonly) bool hasStoreFrontID;
@property (nonatomic) bool hasSystemReleaseType;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic) bool sBEnabled;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, retain) NSString *storeFrontID;
@property (nonatomic) int systemReleaseType;
@property (nonatomic, retain) NSString *timeZoneName;

- (void).cxx_destruct;
- (int)StringAsSystemReleaseType:(id)arg1;
- (id)buildVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceGUID;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasBuildVersion;
- (bool)hasDeviceGUID;
- (bool)hasDeviceName;
- (bool)hasSBEnabled;
- (bool)hasStoreAccountID;
- (bool)hasStoreFrontID;
- (bool)hasSystemReleaseType;
- (bool)hasTimeZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)sBEnabled;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceGUID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasSBEnabled:(bool)arg1;
- (void)setHasStoreAccountID:(bool)arg1;
- (void)setHasSystemReleaseType:(bool)arg1;
- (void)setSBEnabled:(bool)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (void)setSystemReleaseType:(int)arg1;
- (void)setTimeZoneName:(id)arg1;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (int)systemReleaseType;
- (id)systemReleaseTypeAsString:(int)arg1;
- (id)timeZoneName;
- (void)writeTo:(id)arg1;

@end
