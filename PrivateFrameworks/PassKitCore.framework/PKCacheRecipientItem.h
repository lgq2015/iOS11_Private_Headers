/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {
    NSDate * _insertDate;
    PKPeerPaymentRecipient * _item;
}

@property (nonatomic, readonly) PKPeerPaymentRecipient *item;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasExpired;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (bool)isNewerThan:(id)arg1;
- (id)item;

@end
