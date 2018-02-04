/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierTextRep : TSWPRep <STAXCustomRotorItemProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (bool)shouldBeginEditingWithGesture:(id)arg1;
- (id)storage;
- (id)supportedCustomRotors;
- (Class)wpEditorClass;

@end
