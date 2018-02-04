/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {
    NSURL * _URL;
    TSPObject * _documentObject;
    <TSPPackage> * _documentPackage;
    TSPDocumentProperties * _documentProperties;
    NSUUID * _documentUUID;
    NSURL * _originalSupportURL;
    NSURL * _relativeURLForExternalData;
    bool  _shouldLeavePendingEndSave;
    TSPObject * _supportObject;
    <TSPPackage> * _supportPackage;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) TSPObject *documentObject;
@property (nonatomic, retain) <TSPPackage> *documentPackage;
@property (nonatomic, retain) TSPDocumentProperties *documentProperties;
@property (nonatomic, copy) NSUUID *documentUUID;
@property (nonatomic, copy) NSURL *originalSupportURL;
@property (nonatomic, copy) NSURL *relativeURLForExternalData;
@property (nonatomic) bool shouldLeavePendingEndSave;
@property (nonatomic, retain) TSPObject *supportObject;
@property (nonatomic, retain) <TSPPackage> *supportPackage;

- (void).cxx_destruct;
- (id)URL;
- (id)documentObject;
- (id)documentPackage;
- (id)documentProperties;
- (id)documentUUID;
- (id)init;
- (id)initWithURL:(id)arg1 updateType:(unsigned long long)arg2;
- (id)originalSupportURL;
- (id)relativeURLForExternalData;
- (void)setDocumentObject:(id)arg1;
- (void)setDocumentPackage:(id)arg1;
- (void)setDocumentProperties:(id)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setOriginalSupportURL:(id)arg1;
- (void)setRelativeURLForExternalData:(id)arg1;
- (void)setShouldLeavePendingEndSave:(bool)arg1;
- (void)setSupportObject:(id)arg1;
- (void)setSupportPackage:(id)arg1;
- (bool)shouldLeavePendingEndSave;
- (id)supportObject;
- (id)supportPackage;

@end
