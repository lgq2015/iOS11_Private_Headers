/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {
    bool  _shouldNotifyMobileMail;
    NSSet * _supportedMailClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_cleanupAccountClass:(id)arg1;
- (void)accountsHaveBeenSaved:(bool)arg1;
- (void)dealloc;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (id)init;
- (id)supportedAccountTypes;

@end
