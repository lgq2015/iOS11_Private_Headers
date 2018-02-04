/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperation : PBCodable <NSCopying> {
    CKDPArchiveRecordsResponse * _archiveRecordsResponse;
    CKDPAssetUploadTokenRetrieveResponse * _assetUploadTokenRetrieveResponse;
    CKDPBundlesForContainerResponse * _bundlesForContainerResponse;
    CKDPDeleteCommentResponse * _deleteCommentResponse;
    CKDPDeleteContainerResponse * _deleteContainerResponse;
    CKDPFetchArchivedRecordsResponse * _fetchArchivedRecordsResponse;
    CKDPCodeFunctionInvokeResponse * _functionInvokeResponse;
    CKDPGetCommentResponse * _getCommentResponse;
    CKDPGetCommentsResponse * _getCommentsResponse;
    CKDPGetLikesResponse * _getLikesResponse;
    struct { 
        unsigned int operationCost : 1; 
    }  _has;
    CKDPLikeResponse * _likeResponse;
    CKDPMescalCertificateResponse * _mescalCertificateResponse;
    CKDPMescalSessionInfoResponse * _mescalSessionInfoResponse;
    CKDPMescalSignatureResponse * _mescalSignatureResponse;
    CKDPNotificationMarkReadResponse * _notificationMarkReadResponse;
    CKDPNotificationSyncResponse * _notificationSyncResponse;
    unsigned int  _operationCost;
    CKDPPostCommentResponse * _postCommentResponse;
    CKDPPulseResponse * _pulseResponse;
    CKDPQueryRetrieveResponse * _queryRetrieveResponse;
    CKDPRecordDeleteResponse * _recordDeleteResponse;
    CKDPRecordResolveTokenResponse * _recordResolveTokenResponse;
    CKDPRecordRetrieveAncestorsResponse * _recordRetrieveAncestorsResponse;
    CKDPRecordRetrieveChangesResponse * _recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse * _recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse * _recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse * _recordSaveResponse;
    CKDPOperation * _response;
    CKDPResponseOperationResult * _result;
    CKDPSetBadgeCountResponse * _setBadgeCountResponse;
    CKDPShareAcceptResponse * _shareAcceptResponse;
    CKDPShareDeleteResponse * _shareDeleteResponse;
    CKDPShareRetrieveResponse * _shareRetrieveResponse;
    CKDPShareSaveResponse * _shareSaveResponse;
    CKDPShareTokenDeleteResponse * _shareTokenDeleteResponse;
    CKDPShareTokenRetrieveResponse * _shareTokenRetrieveResponse;
    CKDPShareTokenSaveResponse * _shareTokenSaveResponse;
    CKDPShareVettingInitiateResponse * _shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse * _subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse * _subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse * _subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse * _tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse * _tokenUnregistrationResponse;
    CKDPUnlikeResponse * _unlikeResponse;
    CKDPUserAvailableQuotaResponse * _userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse * _userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse * _userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse * _userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse * _userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse * _userQueryResponse;
    CKDPUserRetrieveResponse * _userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse * _webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse * _zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse * _zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse * _zoneRetrieveResponse;
    CKDPZoneSaveResponse * _zoneSaveResponse;
}

@property (nonatomic, retain) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property (nonatomic, retain) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property (nonatomic, retain) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property (nonatomic, retain) CKDPDeleteCommentResponse *deleteCommentResponse;
@property (nonatomic, retain) CKDPDeleteContainerResponse *deleteContainerResponse;
@property (nonatomic, retain) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property (nonatomic, retain) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property (nonatomic, retain) CKDPGetCommentResponse *getCommentResponse;
@property (nonatomic, retain) CKDPGetCommentsResponse *getCommentsResponse;
@property (nonatomic, retain) CKDPGetLikesResponse *getLikesResponse;
@property (nonatomic, readonly) bool hasArchiveRecordsResponse;
@property (nonatomic, readonly) bool hasAssetUploadTokenRetrieveResponse;
@property (nonatomic, readonly) bool hasBundlesForContainerResponse;
@property (nonatomic, readonly) bool hasDeleteCommentResponse;
@property (nonatomic, readonly) bool hasDeleteContainerResponse;
@property (nonatomic, readonly) bool hasFetchArchivedRecordsResponse;
@property (nonatomic, readonly) bool hasFunctionInvokeResponse;
@property (nonatomic, readonly) bool hasGetCommentResponse;
@property (nonatomic, readonly) bool hasGetCommentsResponse;
@property (nonatomic, readonly) bool hasGetLikesResponse;
@property (nonatomic, readonly) bool hasLikeResponse;
@property (nonatomic, readonly) bool hasMescalCertificateResponse;
@property (nonatomic, readonly) bool hasMescalSessionInfoResponse;
@property (nonatomic, readonly) bool hasMescalSignatureResponse;
@property (nonatomic, readonly) bool hasNotificationMarkReadResponse;
@property (nonatomic, readonly) bool hasNotificationSyncResponse;
@property (nonatomic) bool hasOperationCost;
@property (nonatomic, readonly) bool hasPostCommentResponse;
@property (nonatomic, readonly) bool hasPulseResponse;
@property (nonatomic, readonly) bool hasQueryRetrieveResponse;
@property (nonatomic, readonly) bool hasRecordDeleteResponse;
@property (nonatomic, readonly) bool hasRecordResolveTokenResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveAncestorsResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveChangesResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveVersionsResponse;
@property (nonatomic, readonly) bool hasRecordSaveResponse;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasResult;
@property (nonatomic, readonly) bool hasSetBadgeCountResponse;
@property (nonatomic, readonly) bool hasShareAcceptResponse;
@property (nonatomic, readonly) bool hasShareDeleteResponse;
@property (nonatomic, readonly) bool hasShareRetrieveResponse;
@property (nonatomic, readonly) bool hasShareSaveResponse;
@property (nonatomic, readonly) bool hasShareTokenDeleteResponse;
@property (nonatomic, readonly) bool hasShareTokenRetrieveResponse;
@property (nonatomic, readonly) bool hasShareTokenSaveResponse;
@property (nonatomic, readonly) bool hasShareVettingInitiateResponse;
@property (nonatomic, readonly) bool hasSubscriptionCreateResponse;
@property (nonatomic, readonly) bool hasSubscriptionDeleteResponse;
@property (nonatomic, readonly) bool hasSubscriptionRetrieveResponse;
@property (nonatomic, readonly) bool hasTokenRegistrationResponse;
@property (nonatomic, readonly) bool hasTokenUnregistrationResponse;
@property (nonatomic, readonly) bool hasUnlikeResponse;
@property (nonatomic, readonly) bool hasUserAvailableQuotaResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsBatchLookupResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsResetResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsRetrieveResponse;
@property (nonatomic, readonly) bool hasUserPrivacySettingsUpdateResponse;
@property (nonatomic, readonly) bool hasUserQueryResponse;
@property (nonatomic, readonly) bool hasUserRetrieveResponse;
@property (nonatomic, readonly) bool hasWebAuthTokenRetrieveResponse;
@property (nonatomic, readonly) bool hasZoneDeleteResponse;
@property (nonatomic, readonly) bool hasZoneRetrieveChangesResponse;
@property (nonatomic, readonly) bool hasZoneRetrieveResponse;
@property (nonatomic, readonly) bool hasZoneSaveResponse;
@property (nonatomic, retain) CKDPLikeResponse *likeResponse;
@property (nonatomic, retain) CKDPMescalCertificateResponse *mescalCertificateResponse;
@property (nonatomic, retain) CKDPMescalSessionInfoResponse *mescalSessionInfoResponse;
@property (nonatomic, retain) CKDPMescalSignatureResponse *mescalSignatureResponse;
@property (nonatomic, retain) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property (nonatomic, retain) CKDPNotificationSyncResponse *notificationSyncResponse;
@property (nonatomic) unsigned int operationCost;
@property (nonatomic, retain) CKDPPostCommentResponse *postCommentResponse;
@property (nonatomic, retain) CKDPPulseResponse *pulseResponse;
@property (nonatomic, retain) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property (nonatomic, retain) CKDPRecordDeleteResponse *recordDeleteResponse;
@property (nonatomic, retain) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property (nonatomic, retain) CKDPRecordRetrieveAncestorsResponse *recordRetrieveAncestorsResponse;
@property (nonatomic, retain) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property (nonatomic, retain) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property (nonatomic, retain) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property (nonatomic, retain) CKDPRecordSaveResponse *recordSaveResponse;
@property (nonatomic, retain) CKDPOperation *response;
@property (nonatomic, retain) CKDPResponseOperationResult *result;
@property (nonatomic, retain) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property (nonatomic, retain) CKDPShareAcceptResponse *shareAcceptResponse;
@property (nonatomic, retain) CKDPShareDeleteResponse *shareDeleteResponse;
@property (nonatomic, retain) CKDPShareRetrieveResponse *shareRetrieveResponse;
@property (nonatomic, retain) CKDPShareSaveResponse *shareSaveResponse;
@property (nonatomic, retain) CKDPShareTokenDeleteResponse *shareTokenDeleteResponse;
@property (nonatomic, retain) CKDPShareTokenRetrieveResponse *shareTokenRetrieveResponse;
@property (nonatomic, retain) CKDPShareTokenSaveResponse *shareTokenSaveResponse;
@property (nonatomic, retain) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property (nonatomic, retain) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property (nonatomic, retain) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property (nonatomic, retain) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property (nonatomic, retain) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property (nonatomic, retain) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property (nonatomic, retain) CKDPUnlikeResponse *unlikeResponse;
@property (nonatomic, retain) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property (nonatomic, retain) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property (nonatomic, retain) CKDPUserQueryResponse *userQueryResponse;
@property (nonatomic, retain) CKDPUserRetrieveResponse *userRetrieveResponse;
@property (nonatomic, retain) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property (nonatomic, retain) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property (nonatomic, retain) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property (nonatomic, retain) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property (nonatomic, retain) CKDPZoneSaveResponse *zoneSaveResponse;

- (void).cxx_destruct;
- (id)archiveRecordsResponse;
- (id)assetUploadTokenRetrieveResponse;
- (id)bundlesForContainerResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteCommentResponse;
- (id)deleteContainerResponse;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchArchivedRecordsResponse;
- (id)functionInvokeResponse;
- (id)getCommentResponse;
- (id)getCommentsResponse;
- (id)getLikesResponse;
- (bool)hasArchiveRecordsResponse;
- (bool)hasAssetUploadTokenRetrieveResponse;
- (bool)hasBundlesForContainerResponse;
- (bool)hasDeleteCommentResponse;
- (bool)hasDeleteContainerResponse;
- (bool)hasFetchArchivedRecordsResponse;
- (bool)hasFunctionInvokeResponse;
- (bool)hasGetCommentResponse;
- (bool)hasGetCommentsResponse;
- (bool)hasGetLikesResponse;
- (bool)hasLikeResponse;
- (bool)hasMescalCertificateResponse;
- (bool)hasMescalSessionInfoResponse;
- (bool)hasMescalSignatureResponse;
- (bool)hasNotificationMarkReadResponse;
- (bool)hasNotificationSyncResponse;
- (bool)hasOperationCost;
- (bool)hasPostCommentResponse;
- (bool)hasPulseResponse;
- (bool)hasQueryRetrieveResponse;
- (bool)hasRecordDeleteResponse;
- (bool)hasRecordResolveTokenResponse;
- (bool)hasRecordRetrieveAncestorsResponse;
- (bool)hasRecordRetrieveChangesResponse;
- (bool)hasRecordRetrieveResponse;
- (bool)hasRecordRetrieveVersionsResponse;
- (bool)hasRecordSaveResponse;
- (bool)hasResponse;
- (bool)hasResult;
- (bool)hasSetBadgeCountResponse;
- (bool)hasShareAcceptResponse;
- (bool)hasShareDeleteResponse;
- (bool)hasShareRetrieveResponse;
- (bool)hasShareSaveResponse;
- (bool)hasShareTokenDeleteResponse;
- (bool)hasShareTokenRetrieveResponse;
- (bool)hasShareTokenSaveResponse;
- (bool)hasShareVettingInitiateResponse;
- (bool)hasSubscriptionCreateResponse;
- (bool)hasSubscriptionDeleteResponse;
- (bool)hasSubscriptionRetrieveResponse;
- (bool)hasTokenRegistrationResponse;
- (bool)hasTokenUnregistrationResponse;
- (bool)hasUnlikeResponse;
- (bool)hasUserAvailableQuotaResponse;
- (bool)hasUserPrivacySettingsBatchLookupResponse;
- (bool)hasUserPrivacySettingsResetResponse;
- (bool)hasUserPrivacySettingsRetrieveResponse;
- (bool)hasUserPrivacySettingsUpdateResponse;
- (bool)hasUserQueryResponse;
- (bool)hasUserRetrieveResponse;
- (bool)hasWebAuthTokenRetrieveResponse;
- (bool)hasZoneDeleteResponse;
- (bool)hasZoneRetrieveChangesResponse;
- (bool)hasZoneRetrieveResponse;
- (bool)hasZoneSaveResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)likeResponse;
- (void)mergeFrom:(id)arg1;
- (id)mescalCertificateResponse;
- (id)mescalSessionInfoResponse;
- (id)mescalSignatureResponse;
- (id)notificationMarkReadResponse;
- (id)notificationSyncResponse;
- (unsigned int)operationCost;
- (id)postCommentResponse;
- (id)pulseResponse;
- (id)queryRetrieveResponse;
- (bool)readFrom:(id)arg1;
- (id)recordDeleteResponse;
- (id)recordResolveTokenResponse;
- (id)recordRetrieveAncestorsResponse;
- (id)recordRetrieveChangesResponse;
- (id)recordRetrieveResponse;
- (id)recordRetrieveVersionsResponse;
- (id)recordSaveResponse;
- (id)response;
- (id)result;
- (void)setArchiveRecordsResponse:(id)arg1;
- (void)setAssetUploadTokenRetrieveResponse:(id)arg1;
- (id)setBadgeCountResponse;
- (void)setBundlesForContainerResponse:(id)arg1;
- (void)setDeleteCommentResponse:(id)arg1;
- (void)setDeleteContainerResponse:(id)arg1;
- (void)setFetchArchivedRecordsResponse:(id)arg1;
- (void)setFunctionInvokeResponse:(id)arg1;
- (void)setGetCommentResponse:(id)arg1;
- (void)setGetCommentsResponse:(id)arg1;
- (void)setGetLikesResponse:(id)arg1;
- (void)setHasOperationCost:(bool)arg1;
- (void)setLikeResponse:(id)arg1;
- (void)setMescalCertificateResponse:(id)arg1;
- (void)setMescalSessionInfoResponse:(id)arg1;
- (void)setMescalSignatureResponse:(id)arg1;
- (void)setNotificationMarkReadResponse:(id)arg1;
- (void)setNotificationSyncResponse:(id)arg1;
- (void)setOperationCost:(unsigned int)arg1;
- (void)setPostCommentResponse:(id)arg1;
- (void)setPulseResponse:(id)arg1;
- (void)setQueryRetrieveResponse:(id)arg1;
- (void)setRecordDeleteResponse:(id)arg1;
- (void)setRecordResolveTokenResponse:(id)arg1;
- (void)setRecordRetrieveAncestorsResponse:(id)arg1;
- (void)setRecordRetrieveChangesResponse:(id)arg1;
- (void)setRecordRetrieveResponse:(id)arg1;
- (void)setRecordRetrieveVersionsResponse:(id)arg1;
- (void)setRecordSaveResponse:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSetBadgeCountResponse:(id)arg1;
- (void)setShareAcceptResponse:(id)arg1;
- (void)setShareDeleteResponse:(id)arg1;
- (void)setShareRetrieveResponse:(id)arg1;
- (void)setShareSaveResponse:(id)arg1;
- (void)setShareTokenDeleteResponse:(id)arg1;
- (void)setShareTokenRetrieveResponse:(id)arg1;
- (void)setShareTokenSaveResponse:(id)arg1;
- (void)setShareVettingInitiateResponse:(id)arg1;
- (void)setSubscriptionCreateResponse:(id)arg1;
- (void)setSubscriptionDeleteResponse:(id)arg1;
- (void)setSubscriptionRetrieveResponse:(id)arg1;
- (void)setTokenRegistrationResponse:(id)arg1;
- (void)setTokenUnregistrationResponse:(id)arg1;
- (void)setUnlikeResponse:(id)arg1;
- (void)setUserAvailableQuotaResponse:(id)arg1;
- (void)setUserPrivacySettingsBatchLookupResponse:(id)arg1;
- (void)setUserPrivacySettingsResetResponse:(id)arg1;
- (void)setUserPrivacySettingsRetrieveResponse:(id)arg1;
- (void)setUserPrivacySettingsUpdateResponse:(id)arg1;
- (void)setUserQueryResponse:(id)arg1;
- (void)setUserRetrieveResponse:(id)arg1;
- (void)setWebAuthTokenRetrieveResponse:(id)arg1;
- (void)setZoneDeleteResponse:(id)arg1;
- (void)setZoneRetrieveChangesResponse:(id)arg1;
- (void)setZoneRetrieveResponse:(id)arg1;
- (void)setZoneSaveResponse:(id)arg1;
- (id)shareAcceptResponse;
- (id)shareDeleteResponse;
- (id)shareRetrieveResponse;
- (id)shareSaveResponse;
- (id)shareTokenDeleteResponse;
- (id)shareTokenRetrieveResponse;
- (id)shareTokenSaveResponse;
- (id)shareVettingInitiateResponse;
- (id)subscriptionCreateResponse;
- (id)subscriptionDeleteResponse;
- (id)subscriptionRetrieveResponse;
- (id)tokenRegistrationResponse;
- (id)tokenUnregistrationResponse;
- (id)unlikeResponse;
- (id)userAvailableQuotaResponse;
- (id)userPrivacySettingsBatchLookupResponse;
- (id)userPrivacySettingsResetResponse;
- (id)userPrivacySettingsRetrieveResponse;
- (id)userPrivacySettingsUpdateResponse;
- (id)userQueryResponse;
- (id)userRetrieveResponse;
- (id)webAuthTokenRetrieveResponse;
- (void)writeTo:(id)arg1;
- (id)zoneDeleteResponse;
- (id)zoneRetrieveChangesResponse;
- (id)zoneRetrieveResponse;
- (id)zoneSaveResponse;

@end
