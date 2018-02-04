/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {
    SGContact * _contact;
    NSArray * _matchTokens;
    SGMatchedDetails * _matchedDetails;
    SGRecordId * _matchingFieldRecordId;
    long long  _matchingFieldType;
}

@property (nonatomic, readonly) SGContact *contact;
@property (nonatomic, readonly) NSArray *matchTokens;
@property (nonatomic, readonly) SGMatchedDetails *matchedDetails;
@property (nonatomic, readonly) SGObject *matchingField;
@property (nonatomic, readonly) long long matchingFieldType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactMatch:(id)arg1;
- (id)matchTokens;
- (id)matchedDetails;
- (id)matchingField;
- (long long)matchingFieldType;

@end
