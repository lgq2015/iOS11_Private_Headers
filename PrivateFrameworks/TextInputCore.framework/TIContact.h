/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIContact : NSObject {
    NSArray * _cities;
    NSString * _familyName;
    NSString * _givenName;
    bool  _hasRelevancyScore;
    NSString * _jobTitle;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSArray * _relations;
    float  _relevancyScore;
}

@property (nonatomic, retain) NSArray *cities;
@property (nonatomic, retain) NSString *familyName;
@property (nonatomic, retain) NSString *givenName;
@property (nonatomic) bool hasRelevancyScore;
@property (nonatomic, retain) NSString *jobTitle;
@property (nonatomic, retain) NSString *middleName;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *phoneticFamilyName;
@property (nonatomic, retain) NSString *phoneticGivenName;
@property (nonatomic, retain) NSString *phoneticMiddleName;
@property (nonatomic, retain) NSArray *relations;
@property (nonatomic) float relevancyScore;

- (id)cities;
- (void)dealloc;
- (id)familyName;
- (id)flatten;
- (id)givenName;
- (bool)hasRelevancyScore;
- (id)jobTitle;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)relations;
- (float)relevancyScore;
- (void)setCities:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setHasRelevancyScore:(bool)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setRelations:(id)arg1;
- (void)setRelevancyScore:(float)arg1;

@end
