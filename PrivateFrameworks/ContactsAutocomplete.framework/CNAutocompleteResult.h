/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteResult : NSObject {
    id /* block */  _contactProvider;
    NSString * _descriptionMemo;
    NSArray * _diagnosticLogs;
    NSString * _displayName;
    bool  _hasPreferredDomain;
    bool  _hasPrefixMatch;
    NSString * _identifier;
    id /* block */  _ignoreResultBlock;
    NSString * _lastSendingAddress;
    id /* block */  _membersProvider;
    CNAutocompleteNameComponents * _nameComponents;
    long long  _resultType;
    unsigned long long  _sourceType;
    NSDictionary * _userInfo;
    CNAutocompleteResultValue * _value;
}

@property (readonly, copy) id address;
@property (readonly) long long addressType;
@property (readonly, copy) NSString *contactIdentifier;
@property (nonatomic, copy) id /* block */ contactProvider;
@property (nonatomic, copy) NSArray *diagnosticLogs;
@property (copy) NSString *displayName;
@property (readonly, copy) NSString *groupIdentifier;
@property bool hasPreferredDomain;
@property (copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ ignoreResultBlock;
@property (copy) NSString *lastSendingAddress;
@property (nonatomic, copy) id /* block */ membersProvider;
@property (copy) CNAutocompleteNameComponents *nameComponents;
@property long long resultType;
@property unsigned long long sourceType;
@property (copy) NSDictionary *userInfo;
@property (readonly, copy) NSArray *userInfos;
@property (retain) CNAutocompleteResultValue *value;

+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(id /* block */)arg5;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(id /* block */)arg5 userInfo:(id)arg6;
+ (unsigned long long)category;
+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 identifier:(id)arg4;
+ (id)contactStoreForFetchingFullContacts;
+ (id)groupResultWithDisplayName:(id)arg1 identifier:(id)arg2;
+ (bool)isSourceTypeConsideredSuggestion:(unsigned long long)arg1;
+ (id)localeForHashing;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 addressType:(long long)arg5 identifier:(id)arg6 contactProvider:(id /* block */)arg7 groupMembersProvider:(id /* block */)arg8 userInfo:(id)arg9;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(id /* block */)arg5 userInfo:(id)arg6;
+ (id)resultWithDisplayName:(id)arg1;

- (void).cxx_destruct;
- (void)addDiagnosticLog:(id /* block */)arg1;
- (void)addDiagnosticLogFuture:(id)arg1;
- (id)address;
- (long long)addressType;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 withPriorityComparator:(id /* block */)arg2;
- (id)contactIdentifier;
- (id /* block */)contactProvider;
- (id)contactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)diagnosticLog;
- (id)diagnosticLogs;
- (id)displayName;
- (id)groupIdentifier;
- (bool)hasPreferredDomain;
- (unsigned long long)hash;
- (id)identifier;
- (id /* block */)ignoreResultBlock;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lastSendingAddress;
- (id)members:(id*)arg1;
- (id /* block */)membersProvider;
- (id)nameComponents;
- (long long)resultType;
- (id)resultTypeDescription;
- (void)setContactProvider:(id /* block */)arg1;
- (void)setDiagnosticLogs:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasPreferredDomain:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoreResultBlock:(id /* block */)arg1;
- (void)setLastSendingAddress:(id)arg1;
- (void)setMembersProvider:(id /* block */)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setResultType:(long long)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)sourceType;
- (id)sourceTypeDescription;
- (id)stringForHashing;
- (void)updateUsingInformationFromRelatedResult:(id)arg1;
- (id)userInfo;
- (id)userInfos;
- (id)value;

@end
