/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportSaveOperationState : NSObject {
    NSURL * _URL;
    bool  _didWriteSupportBundleSuccessfuly;
    NSUUID * _documentUUID;
    NSUUID * _originalDocumentUUID;
    NSURL * _originalURL;
    NSUUID * _originalVersionUUID;
    TSUSafeSaveAssistant * _safeSaveAssistant;
    bool  _shouldLeavePendingEndSave;
    long long  _updateType;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool didWriteSupportBundleSuccessfuly;
@property (nonatomic, copy) NSUUID *documentUUID;
@property (nonatomic, readonly) NSUUID *originalDocumentUUID;
@property (nonatomic, copy) NSURL *originalURL;
@property (nonatomic, readonly) NSUUID *originalVersionUUID;
@property (nonatomic, readonly) bool preserveDocumentUUID;
@property (nonatomic, retain) TSUSafeSaveAssistant *safeSaveAssistant;
@property (nonatomic) bool shouldLeavePendingEndSave;
@property (nonatomic, readonly) bool shouldUpdate;
@property (nonatomic, readonly) long long updateType;

- (void).cxx_destruct;
- (id)URL;
- (bool)didWriteSupportBundleSuccessfuly;
- (id)documentUUID;
- (id)init;
- (id)initWithOriginalDocumentUUID:(id)arg1 originalVersionUUID:(id)arg2 originalURL:(id)arg3 updateType:(long long)arg4;
- (id)originalDocumentUUID;
- (id)originalURL;
- (id)originalVersionUUID;
- (bool)preserveDocumentUUID;
- (id)safeSaveAssistant;
- (void)setDidWriteSupportBundleSuccessfuly:(bool)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setOriginalURL:(id)arg1;
- (void)setSafeSaveAssistant:(id)arg1;
- (void)setShouldLeavePendingEndSave:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldLeavePendingEndSave;
- (bool)shouldUpdate;
- (long long)updateType;

@end
