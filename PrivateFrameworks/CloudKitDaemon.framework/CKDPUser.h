/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUser : PBCodable <NSCopying> {
    CKDPUserAlias * _alias;
    NSString * _firstName;
    struct { 
        unsigned int isInNetwork : 1; 
    }  _has;
    CKDPIdentifier * _identifier;
    bool  _isInNetwork;
    NSString * _lastName;
    CKDPProtectionInfo * _protectionInfo;
}

@property (nonatomic, retain) CKDPUserAlias *alias;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, readonly) bool hasAlias;
@property (nonatomic, readonly) bool hasFirstName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsInNetwork;
@property (nonatomic, readonly) bool hasLastName;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, retain) CKDPIdentifier *identifier;
@property (nonatomic) bool isInNetwork;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;

- (void).cxx_destruct;
- (id)alias;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (bool)hasAlias;
- (bool)hasFirstName;
- (bool)hasIdentifier;
- (bool)hasIsInNetwork;
- (bool)hasLastName;
- (bool)hasProtectionInfo;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isInNetwork;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHasIsInNetwork:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsInNetwork:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
