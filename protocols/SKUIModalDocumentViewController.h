/* made by EzioChiu.
 */

@protocol SKUIModalDocumentViewController <NSObject>

@optional

- (<SKUIModalDocumentController> *)modalDocumentController;
- (bool)needsNavigationDocument;
- (void)setModalDocumentController:(id <SKUIModalDocumentController>)arg1;

@end
