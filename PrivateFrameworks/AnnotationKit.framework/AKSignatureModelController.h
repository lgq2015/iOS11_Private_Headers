/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureModelController : NSObject {
    AKController * _controller;
    int  _nextUID;
    AKSignature * _selectedSignature;
    NSMutableArray * _signatures;
    bool  _signaturesDecryptionAttempted;
}

@property AKController *controller;
@property (nonatomic, retain) AKSignature *selectedSignature;
@property (readonly) NSArray *signatures;

- (void).cxx_destruct;
- (id)_createAKSignatureFromItemRef:(id)arg1;
- (bool)_createNewKeychainItemWithSignature:(id)arg1;
- (bool)_deleteSignatureFromKeychain:(id)arg1;
- (void)_loadSignaturesFromPersistentStorage;
- (void)_migrateLegacySignaturesFromPreviewContainer;
- (void)_saveSignatureToPersistentStorage:(id)arg1;
- (id)controller;
- (id)initWithController:(id)arg1;
- (void)insertObject:(id)arg1 inSignaturesAtIndex:(unsigned long long)arg2;
- (void)reloadSignaturesFromSource;
- (void)removeObjectFromSignaturesAtIndex:(unsigned long long)arg1;
- (id)selectedSignature;
- (void)setController:(id)arg1;
- (void)setSelectedSignature:(id)arg1;
- (id)signatures;

@end
