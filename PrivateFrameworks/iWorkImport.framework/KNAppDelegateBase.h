/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    bool  _cachedBidiIsSupported;
}

@property (nonatomic, readonly) NSArray *powerPointDocumentTypes;

- (bool)URLIsValidForImportedHyperlink:(id)arg1 targetDocumentRoot:(id)arg2;
- (id)appChartPropertyOverrides;
- (void)applicationDidFinishLaunching;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (unsigned long long)applicationType;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)importableDocumentTypes;
- (id)init;
- (id)invalidURLSchemes;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (id)powerPointDocumentTypes;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (bool)sidebarPositionRespectsUserInterfaceLayoutDirection;
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
- (bool)supportsPastingIntoGroups;
- (bool)supportsRTL;
- (bool)supportsShrinkTextToFit;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;

@end
