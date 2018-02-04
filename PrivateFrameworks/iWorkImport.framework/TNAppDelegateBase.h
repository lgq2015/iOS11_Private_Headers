/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNAppDelegateBase : TSABaseApplicationDelegate {
    TSUColor * _numbersKeyColor;
}

@property (nonatomic, readonly) NSArray *excelDocumentTypes;
@property (nonatomic, readonly) TSUColor *numbersKeyColor;

- (id)appChartPropertyOverrides;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (unsigned long long)applicationType;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (void)configureSharedCode;
- (id)createCompatibilityDelegate;
- (id)defaultAppStoreURLString;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (Class)documentViewControllerClass;
- (id)excelDocumentTypes;
- (id)importableDocumentTypes;
- (id)init;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (id)numbersKeyColor;
- (void)p_inputMethodsChanged:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerClassTypeMappings;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForApplicationUpdateError;
- (id)stringForBoxCollaborationOptInLearnMoreURL;
- (id)stringForBoxCollaborationOptInMessage;
- (id)stringForBoxCollaborationOptInTermsOfServiceURL;
- (id)stringForCloseDocument;
- (id)stringForCloseDocumentConfirmationAlertMessage;
- (id)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
- (id)stringForCollaborationConnecting;
- (id)stringForCollaborationOffline;
- (id)stringForCollaborationOnline;
- (id)stringForCollaborator1_6ConflictDetails;
- (id)stringForCollaborator1_6ConflictWithKeepDetails;
- (id)stringForCollaboratorConflict;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForCouldntCreatePDFTitle;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForGenericServerUnreachable;
- (id)stringForICloudUnreachable;
- (id)stringForLearnMoreSharingURL;
- (id)stringForOwnerHasCollabEnabledMessage;
- (id)stringForOwnerHasCollabEnabledTitle;
- (id)stringForOwnerPasswordOnConflictAlertMessage;
- (id)stringForOwnerPasswordOnConflictAlertTitle;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForRemoveLastPrivateParticipantAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationTitle;
- (id)stringForStopSharingAlertConfirmationMessage;
- (id)stringForStopSharingAlertConfirmationTitle;
- (id)stringForUpdatingDocument;
- (bool)supportsRTL;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;

@end
