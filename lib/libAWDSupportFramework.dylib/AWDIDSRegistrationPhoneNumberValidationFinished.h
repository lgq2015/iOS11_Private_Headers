/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationPhoneNumberValidationFinished : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numberOfSMSSent : 1; 
        unsigned int registrationError : 1; 
        unsigned int validationDuration : 1; 
    }  _has;
    unsigned int  _numberOfSMSSent;
    int  _registrationError;
    unsigned long long  _timestamp;
    unsigned int  _validationDuration;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasNumberOfSMSSent;
@property (nonatomic) bool hasRegistrationError;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasValidationDuration;
@property (nonatomic) unsigned int numberOfSMSSent;
@property (nonatomic) int registrationError;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int validationDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasNumberOfSMSSent;
- (bool)hasRegistrationError;
- (bool)hasTimestamp;
- (bool)hasValidationDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfSMSSent;
- (bool)readFrom:(id)arg1;
- (int)registrationError;
- (void)setGuid:(id)arg1;
- (void)setHasNumberOfSMSSent:(bool)arg1;
- (void)setHasRegistrationError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasValidationDuration:(bool)arg1;
- (void)setNumberOfSMSSent:(unsigned int)arg1;
- (void)setRegistrationError:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setValidationDuration:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)validationDuration;
- (void)writeTo:(id)arg1;

@end