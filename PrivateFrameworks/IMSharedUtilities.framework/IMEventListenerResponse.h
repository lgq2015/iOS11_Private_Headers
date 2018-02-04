/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse> {
    NSError * _error;
    bool  _success;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (getter=didSucceed, nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)description;
- (bool)didSucceed;
- (id)error;
- (id)initWithSuccess:(bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)setError:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
