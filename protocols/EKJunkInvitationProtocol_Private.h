/* made by EzioChiu.
 */

@protocol EKJunkInvitationProtocol_Private <NSObject>

@required

- (bool)couldBeJunk;
- (EKEventStore *)eventStore;
- (NSString *)sendersEmail;
- (NSString *)sendersPhoneNumber;
- (bool)supportsJunkReporting;

@end
