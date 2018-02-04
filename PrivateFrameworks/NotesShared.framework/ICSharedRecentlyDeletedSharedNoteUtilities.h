/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject

+ (id)messageForSharedNotesType:(unsigned long long)arg1;
+ (id)notesSharedViaICloudFromNotes:(id)arg1;
+ (unsigned long long)sharedNoteTypeForNotes:(id)arg1;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
+ (id)titleForSharedNotesType:(unsigned long long)arg1;

@end
