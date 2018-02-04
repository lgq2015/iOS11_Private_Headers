/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase {
    bool  _inSpringBoard;
    TUCallCenter * _queue_callCenter;
    bool  _queue_satisfied;
}

- (void)_callStatusChanged;
- (void)_queue_noteOnExistingPhoneCallDidChange:(bool)arg1;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(bool)arg4 onExistingPhoneCall:(bool)arg5;
- (unsigned long long)unsatisfiedConstraints;

@end
