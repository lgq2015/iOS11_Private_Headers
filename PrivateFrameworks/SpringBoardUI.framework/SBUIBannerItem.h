/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerItem : NSObject

- (id /* block */)action;
- (id)actionWithIdentifier:(id)arg1;
- (bool)canShowInAssistant;
- (bool)canShowWhileLocked;
- (id)defaultActionWithContext:(id)arg1;
- (bool)hasSubActions;
- (bool)isSticky;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)message;
- (unsigned long long)priority;
- (bool)shouldPlayLightsAndSirens;
- (bool)shouldShowModalSubActions;
- (id)sortDate;
- (id)sound;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end
