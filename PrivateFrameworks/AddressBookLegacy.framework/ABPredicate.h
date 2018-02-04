/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABPredicate : NSPredicate

+ (id)newQueryFromABPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 ranked:(bool)arg3 addressBook:(void*)arg4 propertyIndices:(const struct __CFDictionary {}**)arg5;
+ (id)newQueryFromCompoundPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 ranked:(bool)arg3 addressBook:(void*)arg4 propertyIndices:(const struct __CFDictionary {}**)arg5;
+ (id)newQueryWithProperties:(id)arg1 joins:(id)arg2 whereString:(id)arg3 sortOrder:(unsigned int)arg4 rankString:(id)arg5 groupByProperties:(id)arg6 addressBook:(void*)arg7 propertyIndices:(const struct __CFDictionary {}**)arg8;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1;
+ (id)personPredicateWithGroup:(void*)arg1 source:(void*)arg2 account:(id)arg3;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 addressBook:(void*)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 includeSourceInResults:(bool)arg5 addressBook:(void*)arg6;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(bool)arg4 addressBook:(void*)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(bool)arg4 includePhotosInResults:(bool)arg5 addressBook:(void*)arg6;
+ (id)personPredicateWithNameOnly:(id)arg1 account:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3;
+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;
+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 ranked:(bool)arg3 inAddressBook:(void*)arg4 withDelegate:(id)arg5;

- (id)_querySelectStringForPredicateIdentifier:(int)arg1;
- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
- (void)bindDouble:(double)arg1 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg2 withBindingOffset:(int*)arg3;
- (void)bindString:(id)arg1 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg2 withBindingOffset:(int*)arg3;
- (id)callbackContext;
- (void)dealloc;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(id)arg2 values:(struct sqlite3_value {}**)arg3 count:(int)arg4;
- (bool)hasCallback;
- (id)init;
- (bool)isValid;
- (id)predicateFormat;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(bool)arg1 predicateIdentifier:(int)arg2;
- (id)queryRankStringForPredicateIdentifier:(int)arg1;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;

@end
