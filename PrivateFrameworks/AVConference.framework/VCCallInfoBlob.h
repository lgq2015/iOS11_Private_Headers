/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCallInfoBlob : PBCodable <NSCopying> {
    unsigned int  _callID;
    unsigned int  _clientVersion;
    NSString * _deviceType;
    NSString * _frameworkVersion;
    NSString * _osVersion;
}

@property (nonatomic) unsigned int callID;
@property (nonatomic) unsigned int clientVersion;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic, retain) NSString *frameworkVersion;
@property (nonatomic, retain) NSString *osVersion;

- (unsigned int)callID;
- (unsigned int)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (id)frameworkVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osVersion;
- (bool)readFrom:(id)arg1;
- (void)setCallID:(unsigned int)arg1;
- (void)setClientVersion:(unsigned int)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setFrameworkVersion:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
