/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogDeviceState : PBCodable <NSCopying> {
    NSString * _buildVersion;
    NSString * _deviceClass;
    struct { 
        unsigned int state : 1; 
    }  _has;
    NSString * _identifier;
    unsigned int  _state;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *deviceClass;
@property (nonatomic, readonly) bool hasBuildVersion;
@property (nonatomic, readonly) bool hasDeviceClass;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasState;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int state;

- (void).cxx_destruct;
- (id)buildVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceClass;
- (id)dictionaryRepresentation;
- (bool)hasBuildVersion;
- (bool)hasDeviceClass;
- (bool)hasIdentifier;
- (bool)hasState;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)writeTo:(id)arg1;

@end
