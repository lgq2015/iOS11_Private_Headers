/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATMessage : NSObject <NSSecureCoding> {
    NSUUID * _messageUUID;
}

@property (nonatomic, retain) id cat_assertion;
@property (nonatomic, retain) NSUUID *messageUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cat_assertion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)messageUUID;
- (void)setCat_assertion:(id)arg1;
- (void)setMessageUUID:(id)arg1;

@end
