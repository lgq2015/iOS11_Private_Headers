/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXContact : NSObject {
    NSString * _cachedFullName;
    CNContact * _contact;
    NSString * _identifier;
    double  _score;
    SGContact * _sgContact;
    unsigned long long  _source;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double score;
@property (nonatomic, retain) SGContact *sgContact;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)birthday;
- (id)contact;
- (id)description;
- (id)emailAddresses;
- (id)familyName;
- (id)fullName;
- (id)givenName;
- (id)identifier;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)organizationName;
- (id)phoneNumbers;
- (id)postalAddresses;
- (double)score;
- (void)setContact:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSgContact:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (id)sgContact;
- (id)socialProfiles;
- (unsigned long long)source;

@end