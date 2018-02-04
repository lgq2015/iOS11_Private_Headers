/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPropertyTransaction : NSObject <NSSecureCoding> {
    NSString * _property;
    long long  _type;
    id  _value;
}

@property (nonatomic, retain) NSString *property;
@property (nonatomic) long long type;
@property (nonatomic, retain) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 forProperty:(id)arg2 withValue:(id)arg3;
- (void)mergeTransactionIntoTransactionArray:(id)arg1;
- (id)property;
- (void)setProperty:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (long long)type;
- (id)value;

@end
