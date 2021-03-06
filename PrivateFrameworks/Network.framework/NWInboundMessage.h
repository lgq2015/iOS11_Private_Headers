/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWInboundMessage : NWMessage {
    NSObject<OS_nw_inbound_message> * _internalMessage;
}

@property (nonatomic, readonly) NSData *content;
@property (retain) NSObject<OS_nw_inbound_message> *internalMessage;

- (void).cxx_destruct;
- (id)content;
- (unsigned long long)getNumberForDomain:(id)arg1 key:(id)arg2;
- (id)initWithInternalMessage:(id)arg1;
- (id)internalMessage;
- (void)setInternalMessage:(id)arg1;

@end
