/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCallRecord : NSObject <NSCopying, NSSecureCoding> {
    long long  _callCapability;
    NSNumber * _callDuration;
    long long  _callRecordType;
    INPerson * _caller;
    NSDate * _dateCreated;
    NSString * _identifier;
    NSNumber * _unseen;
}

@property (nonatomic, readonly) long long callCapability;
@property (nonatomic, readonly, copy) NSNumber *callDuration;
@property (nonatomic, readonly) long long callRecordType;
@property (nonatomic, readonly, copy) INPerson *caller;
@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSNumber *unseen;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (long long)callCapability;
- (id)callDuration;
- (long long)callRecordType;
- (id)caller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)unseen;

@end
