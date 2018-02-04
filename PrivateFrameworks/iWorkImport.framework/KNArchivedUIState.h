/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedUIState : TSPObject {
    KNUIState * _uiState;
}

@property (nonatomic, readonly) KNUIState *uiState;

- (void).cxx_destruct;
- (id)initWithUIState:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)uiState;
- (bool)validateDesktopViewStateWithDocumentRoot:(id)arg1;
- (bool)validateMobileViewStateWithDocumentRoot:(id)arg1;

@end
