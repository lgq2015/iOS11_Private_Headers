/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGContactMatchArrayOption : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _matches;
    SGRecordId * _recordId;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSArray *matches;
@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatches:(id)arg1;
- (id)initWithRecordId:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactMatchArrayOption:(id)arg1;
- (id)matches;
- (id)recordId;
- (unsigned long long)type;

@end
