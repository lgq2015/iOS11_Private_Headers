/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPContactInformation : PBCodable <NSCopying> {
    NSString * _containerScopedUserId;
    NSString * _emailAddress;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _phoneNumber;
}

@property (nonatomic, retain) NSString *containerScopedUserId;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, readonly) bool hasContainerScopedUserId;
@property (nonatomic, readonly) bool hasEmailAddress;
@property (nonatomic, readonly) bool hasFirstName;
@property (nonatomic, readonly) bool hasLastName;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)containerScopedUserId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddress;
- (id)firstName;
- (bool)hasContainerScopedUserId;
- (bool)hasEmailAddress;
- (bool)hasFirstName;
- (bool)hasLastName;
- (bool)hasPhoneNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (id)phoneNumber;
- (bool)readFrom:(id)arg1;
- (void)setContainerScopedUserId:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
