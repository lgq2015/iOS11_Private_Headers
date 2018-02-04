/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {
    <IKAppNavigationController> * _navigationControllerDelegate;
}

@property (nonatomic, readonly, retain) NSArray *documents;
@property (nonatomic, readonly) <IKAppNavigationController> *navigationControllerDelegate;

- (void).cxx_destruct;
- (id)_makeAppDocumentWithDocument:(id)arg1;
- (void)clear;
- (void)dismissModal;
- (id)documents;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2;
- (void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (id)navigationControllerDelegate;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)presentModal:(id)arg1 :(id)arg2;
- (void)pushDocument:(id)arg1 :(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end
