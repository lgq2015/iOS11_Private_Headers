/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscribeToEmailCommand : FCCommand {
    NSString * _DSID;
    NSString * _primaryLanguage;
    NSString * _storeFrontID;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, copy) NSString *primaryLanguage;
@property (nonatomic, copy) NSString *storeFrontID;

- (void).cxx_destruct;
- (id)DSID;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3;
- (id)primaryLanguage;
- (void)setDSID:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setStoreFrontID:(id)arg1;
- (id)storeFrontID;

@end