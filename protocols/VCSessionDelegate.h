/* made by EzioChiu.
 */

@protocol VCSessionDelegate <NSObject>

@required

- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;

@end
