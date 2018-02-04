/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICContact : NSObject {
    NSArray * _cities;
    NSString * _firstName;
    NSString * _jobTitle;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFirstName;
    NSString * _phoneticLastName;
    NSString * _phoneticMiddleName;
    NSArray * _relations;
    double  _score;
    NSArray * _streets;
}

@property (nonatomic, readonly) NSArray *cities;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *jobTitle;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSString *organizationName;
@property (nonatomic, readonly) NSString *phoneticFirstName;
@property (nonatomic, readonly) NSString *phoneticLastName;
@property (nonatomic, readonly) NSString *phoneticMiddleName;
@property (nonatomic, readonly) NSArray *relations;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSArray *streets;

- (void).cxx_destruct;
- (id)cities;
- (id)firstName;
- (id)flatten;
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relations:(id)arg10 streets:(id)arg11 cities:(id)arg12 score:(double)arg13;
- (id)jobTitle;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relations;
- (double)score;
- (id)streets;

@end
