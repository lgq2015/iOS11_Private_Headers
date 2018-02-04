/* made by EzioChiu.
 */

@protocol IKAppNavigationController <NSObject>

@required

- (NSArray *)documents;
- (void)insertDocument:(IKAppDocument *)arg1 beforeDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)popDocument;
- (void)popToDocument:(IKAppDocument *)arg1;
- (void)popToRootDocument;
- (void)pushDocument:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;
- (void)removeDocument:(IKAppDocument *)arg1;
- (void)replaceDocument:(IKAppDocument *)arg1 withDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;

@optional

- (void)clear;
- (void)dismissModal;
- (void)presentModal:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;

@end