/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate> {
    SSAccount * _iTunesAccount;
    bool  _isFirstRun;
    UIViewController * _presentingViewController;
    FAFamilySetupPrompter * _prompter;
    FAFamilySettings * _retainedSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SSAccount *iTunesAccount;
@property bool isFirstRun;
@property UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemon;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (id)iTunesAccount;
- (bool)isFirstRun;
- (void)launchiCloudFamilySettings;
- (id)presentingViewController;
- (void)setITunesAccount:(id)arg1;
- (void)setIsFirstRun:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
