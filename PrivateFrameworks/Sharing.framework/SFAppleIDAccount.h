/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAppleIDAccount : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _certificateToken;
    SFAppleIDContactInfo * _contactInfo;
    bool  _dirty;
    bool  _forceValidation;
    SFAppleIDIdentity * _identity;
    NSDate * _lastConnectAttemptDate;
    NSDate * _lastValidationDate;
    NSDate * _modificationDate;
    NSDate * _nextCertificateFetchDate;
    NSDate * _nextConnectionDate;
    NSDate * _nextValidationDate;
    SFAppleIDValidationRecord * _validationRecord;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, retain) NSString *certificateToken;
@property (nonatomic, retain) SFAppleIDContactInfo *contactInfo;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic) bool forceValidation;
@property (nonatomic, retain) SFAppleIDIdentity *identity;
@property (nonatomic, retain) NSDate *lastConnectAttemptDate;
@property (nonatomic, retain) NSDate *lastValidationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSDate *nextCertificateFetchDate;
@property (nonatomic, retain) NSDate *nextConnectionDate;
@property (nonatomic, retain) NSDate *nextValidationDate;
@property (nonatomic, retain) SFAppleIDValidationRecord *validationRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)certificateToken;
- (id)contactInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceValidation;
- (id)identity;
- (id)initWithAppleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccount:(id)arg1;
- (id)lastConnectAttemptDate;
- (id)lastValidationDate;
- (id)modificationDate;
- (id)nextCertificateFetchDate;
- (id)nextConnectionDate;
- (id)nextValidationDate;
- (void)setAltDSID:(id)arg1;
- (void)setCertificateToken:(id)arg1;
- (void)setContactInfo:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setForceValidation:(bool)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLastConnectAttemptDate:(id)arg1;
- (void)setLastValidationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNextCertificateFetchDate:(id)arg1;
- (void)setNextConnectionDate:(id)arg1;
- (void)setNextValidationDate:(id)arg1;
- (void)setValidationRecord:(id)arg1;
- (id)validationRecord;

@end
