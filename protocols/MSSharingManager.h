/* made by EzioChiu.
 */

@protocol MSSharingManager <NSObject>

@required

- (<MSSharingManagerDelegate> *)delegate;
- (void)modifyShare:(MSShare *)arg1;
- (NSString *)personID;
- (void)refreshCurrentShareState;
- (void)removeShare:(MSShare *)arg1;
- (void)respondToInvitation:(MSShare *)arg1 accept:(bool)arg2;
- (void)sendInvitationsForShares:(NSArray *)arg1;
- (void)setDelegate:(id <MSSharingManagerDelegate>)arg1;
- (void)setShares:(NSArray *)arg1;
- (NSArray *)shares;

@end
