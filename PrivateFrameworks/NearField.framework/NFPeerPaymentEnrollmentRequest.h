/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFPeerPaymentEnrollmentRequest : NSObject <NSSecureCoding> {
    NSData * _alternateDSID;
}

@property (nonatomic, copy) NSData *alternateDSID;

+ (bool)supportsSecureCoding;

- (id)alternateDSID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setAlternateDSID:(id)arg1;

@end
