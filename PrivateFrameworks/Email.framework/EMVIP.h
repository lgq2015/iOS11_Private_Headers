/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMVIP : NSObject {
    NSString * _displayName;
    EAEmailAddressSet * _emailAddresses;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) EAEmailAddressSet *emailAddresses;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
