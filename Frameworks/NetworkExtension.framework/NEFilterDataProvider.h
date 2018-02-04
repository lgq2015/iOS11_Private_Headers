/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)handleInboundDataCompleteForFlow:(id)arg1;
- (id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleNewFlow:(id)arg1;
- (id)handleOutboundDataCompleteForFlow:(id)arg1;
- (id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleRemediationForFlow:(id)arg1;
- (void)handleRulesChanged;

@end
