/* made by EzioChiu.
 */

@protocol HMDaemonConnection <HMXPCMessageTransport>

@required

- (void)checkinWithName:(void *)arg1 handleMessageWithName:(void *)arg2 messageIdentifier:(void *)arg3 messagePayload:(void *)arg4 target:(void *)arg5 responseHandler:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSUUID *, NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (void)recheckinWithName:(NSString *)arg1;

@end
