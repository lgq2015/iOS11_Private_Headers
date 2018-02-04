/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {
    unsigned long long  _accountID;
    long long  _delegateInfoID;
    NSString * _deviceGUID;
    NSString * _deviceName;
    struct { 
        unsigned int accountID : 1; 
        unsigned int delegateInfoID : 1; 
        unsigned int systemReleaseType : 1; 
    }  _has;
    NSString * _requestUserAgent;
    int  _systemReleaseType;
    NSString * _timeZoneName;
    NSString * _uuid;
}

@property (nonatomic) unsigned long long accountID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic, retain) NSString *deviceGUID;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) bool hasAccountID;
@property (nonatomic) bool hasDelegateInfoID;
@property (nonatomic, readonly) bool hasDeviceGUID;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic, readonly) bool hasRequestUserAgent;
@property (nonatomic) bool hasSystemReleaseType;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *requestUserAgent;
@property (nonatomic) int systemReleaseType;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic, retain) NSString *uuid;

+ (id)currentDeviceDelegateInfo;

- (void).cxx_destruct;
- (void)_getPlaybackRequestEnvironmentWithBaseEnvironment:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)delegateInfoID;
- (id)description;
- (id)deviceGUID;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasAccountID;
- (bool)hasDelegateInfoID;
- (bool)hasDeviceGUID;
- (bool)hasDeviceName;
- (bool)hasRequestUserAgent;
- (bool)hasSystemReleaseType;
- (bool)hasTimeZoneName;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestUserAgent;
- (void)setAccountID:(unsigned long long)arg1;
- (void)setDelegateInfoID:(long long)arg1;
- (void)setDeviceGUID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasAccountID:(bool)arg1;
- (void)setHasDelegateInfoID:(bool)arg1;
- (void)setHasSystemReleaseType:(bool)arg1;
- (void)setRequestUserAgent:(id)arg1;
- (void)setSystemReleaseType:(int)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setUuid:(id)arg1;
- (int)systemReleaseType;
- (id)timeZoneName;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
