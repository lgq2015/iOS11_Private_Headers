/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupPrompter : NSObject <FAFamilySetupPrompterDelegate> {
    <AAUIFamilySetupPrompterDelegate> * _delegate;
    FAFamilySetupPrompter * _familySetupPrompter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIFamilySetupPrompterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (id)init;
- (id)initWithiTunesAccount:(id)arg1;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
