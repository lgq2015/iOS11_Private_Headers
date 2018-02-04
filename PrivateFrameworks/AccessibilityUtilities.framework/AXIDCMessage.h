/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIDCMessage : AXSimpleMessage {
    NSString * _UUID;
    id /* block */  _sendCompletion;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, copy) id /* block */ sendCompletion;

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)initWithPayload:(id)arg1;
- (id /* block */)sendCompletion;
- (void)setSendCompletion:(id /* block */)arg1;
- (void)setUUID:(id)arg1;
- (id)transportPayload;

@end
