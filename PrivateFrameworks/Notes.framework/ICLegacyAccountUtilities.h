/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICLegacyAccountUtilities : NSObject

+ (struct NoteAccountObject { Class x1; id x2; }*)accountForAccountIdentifier:(id)arg1 context:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg2;
+ (bool)didChooseToMigrateAccount:(struct NoteAccountObject { Class x1; id x2; }*)arg1 context:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg2;
+ (bool)didChooseToMigrateAccountsForContext:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg1 forAccountPassingTest:(id /* block */)arg2;
+ (bool)didChooseToMigrateLegacyAccountType:(long long)arg1;
+ (bool)isLegacyLocalAccount:(struct NoteAccountObject { Class x1; id x2; }*)arg1;
+ (struct NoteAccountObject { Class x1; id x2; }*)legacyAccountForLegacyAccountType:(long long)arg1 context:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg2;
+ (struct NoteAccountObject { Class x1; id x2; }*)legacyAccountForLocalAccountWithContext:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg1;
+ (struct NoteAccountObject { Class x1; id x2; }*)legacyAccountForPrimaryICloudAccountWithContext:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg1;

@end
