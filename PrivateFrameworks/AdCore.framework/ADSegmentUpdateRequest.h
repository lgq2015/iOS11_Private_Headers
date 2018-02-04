/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADSegmentUpdateRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _accountTypes;
    NSString * _advertisingIdentifier;
    int  _advertisingIdentifierMonthResetCount;
    NSData * _dPID;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _deviceModes;
    struct { 
        unsigned int iTunesRefreshTime : 1; 
        unsigned int updateSentTime : 1; 
        unsigned int advertisingIdentifierMonthResetCount : 1; 
        unsigned int timezone : 1; 
        unsigned int isFirstPartyIdentifier : 1; 
    }  _has;
    NSData * _iAdID;
    double  _iTunesRefreshTime;
    bool  _isFirstPartyIdentifier;
    NSString * _localeIdentifier;
    NSString * _osVersionAndBuild;
    NSString * _segmentInfo;
    float  _timezone;
    double  _updateSentTime;
}

@property (nonatomic, readonly) int*accountTypes;
@property (nonatomic, readonly) unsigned long long accountTypesCount;
@property (nonatomic, retain) NSString *advertisingIdentifier;
@property (nonatomic) int advertisingIdentifierMonthResetCount;
@property (nonatomic, retain) NSData *dPID;
@property (nonatomic, readonly) int*deviceModes;
@property (nonatomic, readonly) unsigned long long deviceModesCount;
@property (nonatomic, readonly) bool hasAdvertisingIdentifier;
@property (nonatomic) bool hasAdvertisingIdentifierMonthResetCount;
@property (nonatomic, readonly) bool hasDPID;
@property (nonatomic, readonly) bool hasIAdID;
@property (nonatomic) bool hasITunesRefreshTime;
@property (nonatomic) bool hasIsFirstPartyIdentifier;
@property (nonatomic, readonly) bool hasLocaleIdentifier;
@property (nonatomic, readonly) bool hasOsVersionAndBuild;
@property (nonatomic, readonly) bool hasSegmentInfo;
@property (nonatomic) bool hasTimezone;
@property (nonatomic) bool hasUpdateSentTime;
@property (nonatomic, retain) NSData *iAdID;
@property (nonatomic) double iTunesRefreshTime;
@property (nonatomic) bool isFirstPartyIdentifier;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSString *osVersionAndBuild;
@property (nonatomic, retain) NSString *segmentInfo;
@property (nonatomic) float timezone;
@property (nonatomic) double updateSentTime;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAccountTypes:(id)arg1;
- (int)StringAsDeviceModes:(id)arg1;
- (int)accountTypeAtIndex:(unsigned long long)arg1;
- (int*)accountTypes;
- (id)accountTypesAsString:(int)arg1;
- (unsigned long long)accountTypesCount;
- (void)addAccountType:(int)arg1;
- (void)addDeviceMode:(int)arg1;
- (id)advertisingIdentifier;
- (int)advertisingIdentifierMonthResetCount;
- (void)clearAccountTypes;
- (void)clearDeviceModes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPID;
- (void)dealloc;
- (id)description;
- (int)deviceModeAtIndex:(unsigned long long)arg1;
- (int*)deviceModes;
- (id)deviceModesAsString:(int)arg1;
- (unsigned long long)deviceModesCount;
- (id)dictionaryRepresentation;
- (bool)hasAdvertisingIdentifier;
- (bool)hasAdvertisingIdentifierMonthResetCount;
- (bool)hasDPID;
- (bool)hasIAdID;
- (bool)hasITunesRefreshTime;
- (bool)hasIsFirstPartyIdentifier;
- (bool)hasLocaleIdentifier;
- (bool)hasOsVersionAndBuild;
- (bool)hasSegmentInfo;
- (bool)hasTimezone;
- (bool)hasUpdateSentTime;
- (unsigned long long)hash;
- (id)iAdID;
- (double)iTunesRefreshTime;
- (bool)isEqual:(id)arg1;
- (bool)isFirstPartyIdentifier;
- (id)localeIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)osVersionAndBuild;
- (bool)readFrom:(id)arg1;
- (id)segmentInfo;
- (void)setAccountTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAdvertisingIdentifier:(id)arg1;
- (void)setAdvertisingIdentifierMonthResetCount:(int)arg1;
- (void)setDPID:(id)arg1;
- (void)setDeviceModes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasAdvertisingIdentifierMonthResetCount:(bool)arg1;
- (void)setHasITunesRefreshTime:(bool)arg1;
- (void)setHasIsFirstPartyIdentifier:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setHasUpdateSentTime:(bool)arg1;
- (void)setIAdID:(id)arg1;
- (void)setITunesRefreshTime:(double)arg1;
- (void)setIsFirstPartyIdentifier:(bool)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setOsVersionAndBuild:(id)arg1;
- (void)setSegmentInfo:(id)arg1;
- (void)setTimezone:(float)arg1;
- (void)setUpdateSentTime:(double)arg1;
- (float)timezone;
- (double)updateSentTime;
- (void)writeTo:(id)arg1;

@end
