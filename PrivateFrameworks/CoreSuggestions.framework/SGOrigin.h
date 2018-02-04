/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _bcc;
    NSString * _bundleId;
    NSArray * _cc;
    NSString * _contextSnippet;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contextSnippetRange;
    NSDate * _date;
    NSString * _externalKey;
    bool  _fromForwardedMessage;
    CSPerson * _fromPerson;
    NSString * _localizedApplicationName;
    NSString * _sourceKey;
    NSString * _teamId;
    NSString * _title;
    NSArray * _to;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSArray *bcc;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *cc;
@property (nonatomic, readonly) NSString *contextSnippet;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } contextSnippetRange;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *externalKey;
@property (nonatomic, readonly) SGSimpleNamedEmailAddress *from;
@property (getter=isFromForwardedMessage, readonly) bool fromForwardedMessage;
@property (nonatomic, readonly) CSPerson *fromPerson;
@property (nonatomic, readonly) NSString *localizedApplicationName;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) NSString *teamId;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *to;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

+ (id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(bool)arg5;
+ (id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_resolveAppName;
- (id)bcc;
- (id)bundleId;
- (id)cc;
- (id)contextSnippet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contextSnippetRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)externalKey;
- (id)from;
- (id)fromPerson;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrigin:(id)arg1;
- (bool)isFromForwardedMessage;
- (id)localizedApplicationName;
- (id)sourceKey;
- (id)teamId;
- (id)title;
- (id)to;
- (unsigned long long)type;
- (id)url;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)originForDuplicateKey:(id)arg1 entity:(id)arg2 parent:(id)arg3;
+ (id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3;
+ (unsigned long long)originTypeForEntityType:(long long)arg1;

- (void)addDetailsFromOriginatingCalendarEntity:(id)arg1;
- (void)addDetailsFromOriginatingContactEntity:(id)arg1;
- (void)addDetailsFromOriginatingGenericEntity:(id)arg1;
- (void)addDetailsFromOriginatingInteractionEntity:(id)arg1;
- (void)addDetailsFromOriginatingMessageEntity:(id)arg1;
- (void)addDetailsFromParticipantsOfEntity:(id)arg1;
- (void)addSnippetIfNotExistsFromContentOfEntity:(id)arg1;

@end
