/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityAdvertiser : NSObject <SFActivityAdvertiserClient, SFCompanionXPCManagerObserver> {
    <SFActivityAdvertiserProtocol> * _connectionProxy;
    SFInternalAdvertisement * _currentAdvertisement;
    <SFActivityAdvertiserDelegate> * _delegate;
    bool  _xpcSetupInProgress;
}

@property (retain) <SFActivityAdvertiserProtocol> *connectionProxy;
@property (retain) SFInternalAdvertisement *currentAdvertisement;
@property (readonly, copy) NSString *debugDescription;
@property <SFActivityAdvertiserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool xpcSetupInProgress;

+ (id)sharedAdvertiser;

- (void).cxx_destruct;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;
- (id)connectionProxy;
- (id)currentAdvertisement;
- (void)dealloc;
- (id)delegate;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;
- (void)fetchLoginIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchSFPeerDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)pairedDevicesChanged:(id)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setCurrentAdvertisement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXpcSetupInProgress:(bool)arg1;
- (void)setupProxyIfNeeded;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidResumeConnection:(id)arg1;
- (bool)xpcSetupInProgress;

@end
