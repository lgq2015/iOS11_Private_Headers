/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserKeyCommands : NSObject

+ (bool)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4;
+ (id)_keyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2;
+ (id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3;
+ (long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3;
+ (void)_setUpKeyCommandsIfNecessary;
+ (id)browserKeyCommands;
+ (id)browserKeyCommandsByAddingCommands:(id)arg1 commandsNotConflictingWithEditing:(id)arg2;
+ (id)keyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4;

@end
