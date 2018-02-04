/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPreferences : NSObject <NSCopying, NSSecureCoding> {
    bool  _canReceiveFormalPaymentRequests;
    bool  _requiresConfirmation;
}

@property (nonatomic) bool canReceiveFormalPaymentRequests;
@property (nonatomic) bool requiresConfirmation;

+ (id)preferencesWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)canReceiveFormalPaymentRequests;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)requiresConfirmation;
- (void)setCanReceiveFormalPaymentRequests:(bool)arg1;
- (void)setRequiresConfirmation:(bool)arg1;

@end
