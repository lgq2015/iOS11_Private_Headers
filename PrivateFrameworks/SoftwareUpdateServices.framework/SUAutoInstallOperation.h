/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAutoInstallOperation : NSObject <NSSecureCoding, SUAutoInstallOperationClientHandler> {
    int  _agreementStatus;
    bool  _canceled;
    SUManagerClient * _client;
    bool  _clientOwned;
    <SUAutoInstallOperationDelegate> * _delegate;
    bool  _expired;
    SUAutoInstallForecast * _forecast;
    NSUUID * _id;
}

@property (nonatomic) int agreementStatus;
@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUAutoInstallOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly, retain) SUAutoInstallForecast *forecast;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSUUID *id;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_initWithClient:(id)arg1 clientOwned:(bool)arg2 id:(id)arg3 forecast:(id)arg4 agreementStatus:(int)arg5 cancelled:(bool)arg6 expired:(bool)arg7;
- (bool)_isDateExpired:(id)arg1;
- (bool)_isEffectivelyScheduled;
- (bool)_isValidForScheduling;
- (bool)_isValidTillDate:(id)arg1;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpire;
- (void)_noteAutoInstallOperationIsReadyToInstall:(id /* block */)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (int)agreementStatus;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forecast;
- (id)id;
- (id)init;
- (id)initWithAutoInstallOperationModel:(id)arg1 client:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isCanceled;
- (bool)isExpired;
- (void)setAgreementStatus:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)uniqueIdentifier;

@end
