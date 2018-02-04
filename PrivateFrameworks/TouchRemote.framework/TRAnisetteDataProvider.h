/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying> {
    TRSession * _session;
}

@property (nonatomic, retain) TRSession *session;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithSession:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;

@end
