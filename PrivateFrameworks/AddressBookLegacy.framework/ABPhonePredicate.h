/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABPhonePredicate : ABPredicate {
    NSString * _country;
    NSString * _homeCountryCode;
    NSString * _phoneNumber;
}

@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *phoneNumber;

- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)country;
- (void)dealloc;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(id)arg2 values:(struct sqlite3_value {}**)arg3 count:(int)arg4;
- (bool)hasCallback;
- (id)homeCountryCode;
- (bool)isValid;
- (id)phoneNumber;
- (id)predicateFormat;
- (id)queryJoinsInCompound:(bool)arg1 predicateIdentifier:(int)arg2;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)setCountry:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
