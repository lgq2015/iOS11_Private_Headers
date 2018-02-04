/* made by EzioChiu.
 */

@protocol TSKDocumentViewController

@required

- (NSArray *)CJKLanguages;
- (NSArray *)bidiLanguages;
- (id)documentRoot;
- (bool)inFindReplaceMode;
- (bool)inPrintPreviewMode;
- (bool)insertControllerIsVisible;
- (bool)isBiDiEnabled;
- (bool)isCJKEnabled;
- (bool)isInspectorVisible;
- (NSArray *)listLanguages;
- (void)showInsertPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 popoverType:(int)arg2 withDoneButton:(bool)arg3;
- (bool)toolsControllerIsVisible;

@end
