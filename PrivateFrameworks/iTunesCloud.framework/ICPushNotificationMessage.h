/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPushNotificationMessage : NSObject {
    NSNumber * _accountDSID;
    long long  _actionType;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSNumber *accountDSID;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSArray *jaliscoChangedMediaTypes;
@property (nonatomic, readonly) long long jaliscoServerRevision;
@property (nonatomic, readonly) long long moduleIdentifier;
@property (nonatomic, readonly) long long sagaServerRevision;
@property (nonatomic, readonly, copy) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)accountDSID;
- (long long)actionType;
- (id)clientIdentifier;
- (id)initWithMessageUserInfo:(id)arg1;
- (id)jaliscoChangedMediaTypes;
- (long long)jaliscoServerRevision;
- (long long)moduleIdentifier;
- (long long)sagaServerRevision;
- (id)sagaUpdatedSubscribedPlaylistIDs;
- (id)userInfo;

@end
