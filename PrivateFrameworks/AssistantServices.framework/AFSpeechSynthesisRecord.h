/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _beginTimestamp;
    unsigned long long  _endTimestamp;
    NSString * _utterance;
}

@property (nonatomic, readonly) unsigned long long beginTimestamp;
@property (nonatomic, readonly) unsigned long long endTimestamp;
@property (nonatomic, readonly, copy) NSString *utterance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)beginTimestamp;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endTimestamp;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1 beginTimestamp:(unsigned long long)arg2 endTimestamp:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)utterance;

@end
