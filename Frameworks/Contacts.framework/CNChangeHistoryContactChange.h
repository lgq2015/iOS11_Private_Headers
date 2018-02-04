/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding> {
    CNChangeHistoryAnchor * _changeAnchor;
    long long  _changeType;
    CNContact * _contact;
    NSString * _contactIdentifier;
}

@property (nonatomic, retain) CNChangeHistoryAnchor *changeAnchor;
@property (nonatomic) long long changeType;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeAnchor;
- (long long)changeType;
- (id)contact;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3;
- (void)setChangeAnchor:(id)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setContact:(id)arg1;

@end
