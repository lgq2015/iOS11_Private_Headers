/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDEditorController : NSObject {
    unsigned long long  mChangingCurrentEditorsWhenCommittingInspectorChangesCount;
    bool  mDidChangeCurrentEditors;
    bool  mDidChangeTextInputEditor;
    TSKDocumentRoot * mDocumentRoot;
    NSMutableArray * mEditorStack;
    NSMutableDictionary * mInspectorPropertyValueMap;
    bool  mIsReentrantResigningTextInputEditors;
    bool  mNotifiedWillChangeCurrentEditors;
    bool  mNotifiedWillChangeTextInputEditor;
    NSMutableArray * mResignedTextInputEditors;
    NSObject<TSDEditor> * mTextInputEditor;
    unsigned long long  mTransactionLevel;
}

@property (getter=isChangingCurrentEditorsWhenCommittingInspectorChanges, nonatomic, readonly) bool changingCurrentEditorsWhenCommittingInspectorChanges;

- (bool)anyEditorProhibitsAction:(SEL)arg1;
- (void)beginTransaction;
- (id)currentEditors;
- (id)currentEditorsConformingToProtocol:(id)arg1;
- (id)currentEditorsOfClass:(Class)arg1;
- (void)dealloc;
- (void)didChangeCurrentEditorsWhenCommittingInspectorChanges;
- (void)editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (void)editorDidChangeSelectionAndWantsKeyboard:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (id)editorForEditAction:(SEL)arg1 withSender:(id)arg2;
- (id)editorForEditAction:(SEL)arg1 withSender:(id)arg2 response:(int*)arg3;
- (void)editorSelectionWasForciblyChanged:(id)arg1;
- (void)endTransaction;
- (void)enumerateEditorsOnStackUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isChangingCurrentEditorsWhenCommittingInspectorChanges;
- (id)mostSpecificCurrentEditorOfClass:(Class)arg1;
- (id)mostSpecificCurrentEditorOfClass:(Class)arg1 conformingToProtocol:(id)arg2;
- (id)mostSpecificEditorConformingToProtocol:(id)arg1;
- (void)notifyResignedTextInputEditors;
- (id)objectForInspectorPropertyKey:(id)arg1;
- (void)p_didChangeCurrentEditors;
- (void)p_didChangeTextInputEditor;
- (void)p_setTextInputEditor:(id)arg1;
- (void)p_willChangeCurrentEditors;
- (void)p_willChangeCurrentEditorsWithNewEditors:(id)arg1;
- (void)p_willChangeTextInputEditor;
- (void)popEditor:(id)arg1;
- (void)popEditor:(id)arg1 andPushTextInputEditor:(id)arg2;
- (void)popToEditor:(id)arg1;
- (void)pushEditor:(id)arg1;
- (void)removeObjectForInspectorPropertyKey:(id)arg1;
- (void)setObject:(id)arg1 forInspectorPropertyKey:(id)arg2;
- (void)setTextInputEditor:(id)arg1;
- (void)teardown;
- (id)textInputEditor;
- (void)willChangeCurrentEditorsWhenCommittingInspectorChanges;

@end
