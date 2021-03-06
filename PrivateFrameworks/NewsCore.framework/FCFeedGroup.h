/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {
    FCFeedDescriptor * _L2FeedDescriptor;
    NSDate * _creationDate;
    FCFeedEdition * _edition;
    NSArray * _elements;
    long long  _groupType;
    NSArray * _headlines;
    NSString * _identifier;
    bool  _isFirstFromEdition;
    unsigned long long  _mergeID;
    NSString * _name;
    unsigned long long  _options;
    NSString * _sourceIdentifier;
    <FCFeedTheming> * _theme;
}

@property (nonatomic, readonly, copy) FCFeedDescriptor *L2FeedDescriptor;
@property (nonatomic, readonly, copy) NSString *backingTagID;
@property (nonatomic, readonly) bool canBeExtended;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) FCFeedEdition *edition;
@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) bool hasStrictHeadlineOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isFirstFromEdition;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;

+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;

- (void).cxx_destruct;
- (id)L2FeedDescriptor;
- (id)backingTagID;
- (bool)canBeExtended;
- (id)copyWithEdition:(id)arg1 isFirst:(bool)arg2;
- (id)copyWithElements:(id)arg1;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)edition;
- (id)elements;
- (long long)feedElementType;
- (long long)groupType;
- (bool)hasStrictHeadlineOrder;
- (unsigned long long)hash;
- (id)headlines;
- (id)identifier;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 name:(id)arg3 theme:(id)arg4 L2FeedDescriptor:(id)arg5 elements:(id)arg6 options:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 name:(id)arg5 theme:(id)arg6 L2FeedDescriptor:(id)arg7 edition:(id)arg8 isFirstFromEdition:(bool)arg9 elements:(id)arg10 options:(unsigned long long)arg11 mergeID:(unsigned long long)arg12;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 name:(id)arg4 theme:(id)arg5 L2FeedDescriptor:(id)arg6 elements:(id)arg7 options:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isFirstFromEdition;
- (bool)isGap;
- (unsigned long long)mergeID;
- (id)name;
- (unsigned long long)options;
- (id)sourceIdentifier;
- (id)theme;

@end
