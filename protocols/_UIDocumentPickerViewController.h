/* made by EzioChiu.
 */

@protocol _UIDocumentPickerViewController <NSObject>

@required

- (void)_documentPickerDidDismiss;
- (void)_prepareForDisplayWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)_setAuxiliaryOptions:(NSArray *)arg1;
- (void)_setPickableTypes:(NSArray *)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setSourceIsManaged:(bool)arg1;
- (void)_setTintColor:(UIColor *)arg1;
- (void)_setUploadURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_showDefaultPicker;

@end
